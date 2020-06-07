#include <string>

class JSONWriter
{
public:
    JSONWriter() = default;
    JSONWriter(const std::string& inPath) : path(inPath) {};
    ~JSONWriter() = default;

    void SetPath(const std::string& inPath);
    const std::string& GetPath() const {return path;}

    void clear();

private:
    std::string path;
};