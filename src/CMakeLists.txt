# minimum required CMAKE version
CMAKE_MINIMUM_REQUIRED(VERSION 3.7 FATAL_ERROR)

# Call macro to add lexer and grammar to your build dependencies.
antlr_target(PlaylistLexer ${CMAKE_CURRENT_SOURCE_DIR}/grammar/playlist_lexer.g4 LEXER
             PACKAGE playlistParser)
antlr_target(PlaylistParser ${CMAKE_CURRENT_SOURCE_DIR}/grammar/playlist_parser.g4 PARSER
             PACKAGE playlistParser
             DEPENDS_ANTLR PlaylistLexer
             COMPILE_FLAGS -lib ${ANTLR_PlaylistLexer_OUTPUT_DIR})

# include generated files in project environment
include_directories(${ANTLR_PlaylistLexer_OUTPUT_DIR})
include_directories(${ANTLR_PlaylistParser_OUTPUT_DIR})

# add generated grammar to demo binary target
add_executable(PlaylistParser main.cpp
               ${ANTLR_PlaylistLexer_CXX_OUTPUTS}
               ${ANTLR_PlaylistParser_CXX_OUTPUTS})
               
set_target_properties(PlaylistParser PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
target_link_libraries(PlaylistParser antlr4_static)
