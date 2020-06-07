#include <iostream>
#include <exception>

#include "json.hpp"
#include "json_writer.h"

using json = nlohmann::json;

void JSONWriter::SetPath(const std::string& inPath)
{
    if( path.empty())
    {
        path = inPath;
    }
    else
    {
        throw("Path already set. Please clear writer before set new path");
    }
}

void JSONWriter::clear()
{
    path.clear();
}
