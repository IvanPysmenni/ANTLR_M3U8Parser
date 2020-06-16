parser grammar playlist_parser;

options {
    tokenVocab = playlist_lexer;
}

// PARSER

enter: ENTER_LABEL NEWLINE extention_info+;

extention_info: EXTINFO_LABEL COLON duration COMMA actor_name WHITE_SPACE DASH WHITE_SPACE track_name NEWLINE path_to_track NEWLINE*;

duration: WHITE_SPACE* DIGIT+;

actor_name: WHITE_SPACE* (LETTER | DIGIT | SPECIAL_SYMBOL | POINT | DASH)+;

track_name: WHITE_SPACE* (LETTER | DIGIT | SPECIAL_SYMBOL | POINT | DASH)+;

path_to_track: ~HASHTAG (LETTER | DIGIT | SPECIAL_SYMBOL | COLON | COMMA | WHITE_SPACE | DASH | POINT)+;
