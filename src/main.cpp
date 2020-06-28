#include <iostream>
#include <string>
#include <fstream>
#include <memory>

#include "antlr4-runtime.h"
#include "playlist_lexer.h"
#include "playlist_parser.h"
#include "json_writer/json_writer.h"
#include "listener/playlist_listener.h"

using namespace playlistParser;
using namespace antlr4;

int main(int argc, const char **argv) {

    if((argc-1) != 4)
    {
        std::cout << "Error: wrong number of arguments. Current number is " << std::to_string(argc) << ", expected 4" << std::endl;
        return 1;
    }

    std::string pathToSourceFile;
    std::string pathToDestinationFile;
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

    std::ifstream playlistFile(pathToSourceFile, std::wifstream::in);
    std::stringstream playlistStream;
    playlistStream << playlistFile.rdbuf();
    std::string playlistText(playlistStream.str());

    ANTLRInputStream input(playlistText);
    playlist_lexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    playlist_parser parser(&tokens);
    tree::ParseTree* tree = parser.enter();
    std::unique_ptr<playlistListener> plListener(new playlistListener(new JSONWriter(pathToDestinationFile)));
    tree::ParseTreeWalker::DEFAULT.walk(plListener.get(), tree);
    return 0;
}
