#include <iostream>
#include <string>
#include <fstream>
#include <memory>
#include <codecvt>

#include "antlr4-runtime.h"
#include "playlist_lexer.h"
#include "playlist_parser.h"
#include "json_writer/json_writer.h"
#include "listener/playlist_listener.h"

using namespace playlistParser;
using namespace antlr4;

int main(int argc, const char **argv) {

    if((argc-1) % 2)
    {
        std::cout << "Error: wrong number of arguments. Current number is " << std::to_string(argc) << ", expected 2 or 4" << std::endl;
        return 1;
    }

    std::string pathToSourceFile;
    std::string pathToDestinationFile = "default_playlist.json";
    for(size_t i = 1; i < argc; ++i)
    {
        std::string parameter(argv[i]);
        if(parameter == "-s")
        {
            ++i;
            pathToSourceFile = argv[i];
        }
        else if(parameter == "-d")
        {
            ++i;
            pathToDestinationFile=argv[i];
        }
    }

    std::cout << "Source file: " << pathToSourceFile << std::endl;
    std::cout << "Destination file: " << pathToDestinationFile << std::endl;

    std::wifstream playlistFile(pathToSourceFile, std::wifstream::in);
    std::wstringstream playlistStream;
    playlistFile.imbue(std::locale(std::locale(), new std::codecvt_utf8<wchar_t>));
    playlistStream << playlistFile.rdbuf();
    std::wstring playlistText(playlistStream.str());

    ANTLRInputStream input(antlrcpp::ws2s(playlistText));
    playlist_lexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    playlist_parser parser(&tokens);
    tree::ParseTree* tree = parser.enter();
    std::unique_ptr<playlistListener> plListener(new playlistListener(new JSONWriter(pathToDestinationFile)));
    tree::ParseTreeWalker::DEFAULT.walk(plListener.get(), tree);
    return 0;
}
