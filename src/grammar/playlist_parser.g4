parser grammar playlist_parser;

options {
    tokenVocab = playlist_lexer;
}

// PARSER

enter: ENTER_LABEL NEWLINE extention_info+;

extention_info: EXTINFO_LABEL COLON duration COMMA actor_track_full_name WHITE_SPACE DASH WHITE_SPACE actor_track_full_name NEWLINE path_to_track NEWLINE*;

duration: WHITE_SPACE* DIGIT+;

actor_track_full_name: actor_track_name ((DASH | WHITE_SPACE) actor_track_name)*;

actor_track_name: WHITE_SPACE* (LETTER | DIGIT | SPECIAL_SYMBOL | POINT)+;

path_to_track: ~HASHTAG (LETTER | DIGIT | SPECIAL_SYMBOL | COLON | COMMA | WHITE_SPACE | DASH | POINT)+;
