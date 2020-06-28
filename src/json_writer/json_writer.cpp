#include <iostream>
#include <exception>
#include <fstream>


#include "json.hpp"

using json = nlohmann::json;

#include "playlist_parser.h"
#include "playlist_lexer.h"

#include "json_writer.h"

JSONWriter::JSONWriter(const std::string& inPath) 
: 
    m_path(inPath)
{
}

JSONWriter::~JSONWriter()
{
    delete m_json;
}

void JSONWriter::SetPath(const std::string& inPath)
{
    if( m_path.empty())
    {
        m_path = inPath;
    }
    else
    {
        throw("Path already set. Please clear writer before set new path");
    }
}

void JSONWriter::writeStart()
{
    if(m_path.empty())
    {
        std::cout << "Warning: Path wasn't set. You can proceed without setting path but writeEnd function will throw error" << std::endl;
    }


    m_json = new json(json::array());
}

void JSONWriter::writeEnd()
{
    if(m_path.empty())
    {
        throw("Path wasn't set. Can't save json array to file");
    }

    if(m_json)
    {
        std::ofstream jsonFile(m_path, std::ios::out | std::ios::trunc);
        jsonFile << *m_json;
        jsonFile.close();
    }

    delete m_json;
}

void JSONWriter::writeStartObject()
{
    if(m_needNewObject && m_json)
    {
        m_json->push_back(json::object());
        m_needNewObject = false;
    }
}

void JSONWriter::writeEndObject()
{
    m_needNewObject = true;
}

void JSONWriter::writeRow(std::string key, std::string value)
{
    if(m_json)
    {
        auto& lastObject = m_json->back();
        lastObject[key] = value; 
    }
}

void JSONWriter::clear()
{
    m_path.clear();
    m_needNewObject = true;
}
