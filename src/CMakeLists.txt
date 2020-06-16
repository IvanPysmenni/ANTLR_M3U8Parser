# minimum required CMAKE version
CMAKE_MINIMUM_REQUIRED(VERSION 3.7 FATAL_ERROR)

# Call macro to add lexer and grammar to your build dependencies.
antlr_target(PlaylistLexer ${CMAKE_CURRENT_SOURCE_DIR}/grammar/playlist_lexer.g4 
            LEXER
            OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/generated/lexer/
            PACKAGE playlistParser)
antlr_target(PlaylistParser ${CMAKE_CURRENT_SOURCE_DIR}/grammar/playlist_parser.g4 
            PARSER 
            LISTENER
            OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/generated/parser/
            PACKAGE playlistParser
            DEPENDS_ANTLR PlaylistLexer
            COMPILE_FLAGS -lib ${ANTLR_PlaylistLexer_OUTPUT_DIR})

# include generated files in project environment
include_directories(${ANTLR_PlaylistLexer_OUTPUT_DIR})
include_directories(${ANTLR_PlaylistParser_OUTPUT_DIR})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/json_writer)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/listener)

# add generated grammar to demo binary target
add_executable(PlaylistParser main.cpp
               ${ANTLR_PlaylistLexer_CXX_OUTPUTS}
               ${ANTLR_PlaylistParser_CXX_OUTPUTS}
               ${CMAKE_CURRENT_SOURCE_DIR}/json_writer/json_writer.cpp
               ${CMAKE_CURRENT_SOURCE_DIR}/listener/playlist_listener.cpp)
               
set_target_properties(PlaylistParser PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
target_link_libraries(PlaylistParser antlr4_static)
