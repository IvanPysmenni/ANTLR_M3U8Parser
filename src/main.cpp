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

int main(int , const char **) {

    std::ifstream playlistFile("../test_src/simple-playlist.m3u8", std::wifstream::in);
    std::stringstream playlistStream;
    playlistStream << playlistFile.rdbuf();
    std::string playlistText(playlistStream.str());

    ANTLRInputStream input(playlistText);
    playlist_lexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    playlist_parser parser(&tokens);
    tree::ParseTree* tree = parser.enter();
    std::unique_ptr<playlistListener> plListener(new playlistListener(new JSONWriter("simple-playlist.json")));
    tree::ParseTreeWalker::DEFAULT.walk(plListener.get(), tree);

    return 0;
}
