lexer grammar playlist_lexer;

ENTER_LABEL: HASHTAG 'EXTM3U';

EXTINFO_LABEL: HASHTAG 'EXTINF';

LETTER: [a-zA-Z\u0080-\u{10FFFF}];

NEWLINE: ('\r'? '\n' | '\r')+;

WHITE_SPACE: (' ' | '\t');

DIGIT: [0-9];

SPECIAL_SYMBOL: [!@$%^&*\\/];

DASH: [-];

COLON: [:];

COMMA: [,];

POINT: [.];

HASHTAG: [#];