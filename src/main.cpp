#include <iostream>
#include <string>
#include <fstream>

#include "antlr4-runtime.h"
#include "playlist_lexer.h"
#include "playlist_parser.h"

using namespace playlistParser;
using namespace antlr4;

int main(int , const char **) {

    std::ifstream playlistFile("../test_src/simple-playlist.m3u8", std::wifstream::in);
    std::stringstream playlistStream;
    playlistStream << playlistFile.rdbuf();
    std::string playlistText(playlistStream.str());

    ANTLRInputStream input(playlistText);
    playlist_lexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    tokens.fill();
    for (auto token : tokens.getTokens()) 
    {
        std::cout << token->toString() << std::endl;
    }

    playlist_parser parser(&tokens);
    tree::ParseTree* tree = parser.enter();

    std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

    return 0;
}
