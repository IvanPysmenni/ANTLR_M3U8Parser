#ifndef JSON_WRITER_H_
    #define JSON_WRITER_H_

#include <string>
#include <memory>

#include <stdio.h>

#include "json_fwd.hpp"

class JSONWriter
{
public:
    JSONWriter(const std::string& inPath);
    ~JSONWriter();

    void SetPath(const std::string& inPath);
    const std::string& GetPath() const {return m_path;}

    void writeStart();
    void writeEnd();

    void writeStartObject();
    void writeEndObject();

    void writeRow(std::string key, std::string value);

    void clear();

private:
    std::string m_path;

    // Get error when tried to use unique_ptr. Problem with object size. Need additional investigation in future.
    nlohmann::json* m_json;

    // FLAGS
    bool m_needNewObject = true;
};

#endif // JSON_WRITER_H_