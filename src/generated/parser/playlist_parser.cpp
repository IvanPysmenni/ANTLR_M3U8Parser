
// Generated from /home/ivan/Repos/M3UParser/src/grammar/playlist_parser.g4 by ANTLR 4.8


#include "playlist_parserListener.h"

#include "playlist_parser.h"


using namespace antlrcpp;
using namespace playlistParser;
using namespace antlr4;

playlist_parser::playlist_parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

playlist_parser::~playlist_parser() {
  delete _interpreter;
}

std::string playlist_parser::getGrammarFileName() const {
  return "playlist_parser.g4";
}

const std::vector<std::string>& playlist_parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& playlist_parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- EnterContext ------------------------------------------------------------------

playlist_parser::EnterContext::EnterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* playlist_parser::EnterContext::ENTER_LABEL() {
  return getToken(playlist_parser::ENTER_LABEL, 0);
}

tree::TerminalNode* playlist_parser::EnterContext::NEWLINE() {
  return getToken(playlist_parser::NEWLINE, 0);
}

std::vector<playlist_parser::Extention_infoContext *> playlist_parser::EnterContext::extention_info() {
  return getRuleContexts<playlist_parser::Extention_infoContext>();
}

playlist_parser::Extention_infoContext* playlist_parser::EnterContext::extention_info(size_t i) {
  return getRuleContext<playlist_parser::Extention_infoContext>(i);
}


size_t playlist_parser::EnterContext::getRuleIndex() const {
  return playlist_parser::RuleEnter;
}

void playlist_parser::EnterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<playlist_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnter(this);
}

void playlist_parser::EnterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<playlist_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnter(this);
}

playlist_parser::EnterContext* playlist_parser::enter() {
  EnterContext *_localctx = _tracker.createInstance<EnterContext>(_ctx, getState());
  enterRule(_localctx, 0, playlist_parser::RuleEnter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(12);
    match(playlist_parser::ENTER_LABEL);
    setState(13);
    match(playlist_parser::NEWLINE);
    setState(15); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(14);
      extention_info();
      setState(17); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == playlist_parser::EXTINFO_LABEL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Extention_infoContext ------------------------------------------------------------------

playlist_parser::Extention_infoContext::Extention_infoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* playlist_parser::Extention_infoContext::EXTINFO_LABEL() {
  return getToken(playlist_parser::EXTINFO_LABEL, 0);
}

tree::TerminalNode* playlist_parser::Extention_infoContext::COLON() {
  return getToken(playlist_parser::COLON, 0);
}

playlist_parser::DurationContext* playlist_parser::Extention_infoContext::duration() {
  return getRuleContext<playlist_parser::DurationContext>(0);
}

tree::TerminalNode* playlist_parser::Extention_infoContext::COMMA() {
  return getToken(playlist_parser::COMMA, 0);
}

playlist_parser::Actor_nameContext* playlist_parser::Extention_infoContext::actor_name() {
  return getRuleContext<playlist_parser::Actor_nameContext>(0);
}

std::vector<tree::TerminalNode *> playlist_parser::Extention_infoContext::WHITE_SPACE() {
  return getTokens(playlist_parser::WHITE_SPACE);
}

tree::TerminalNode* playlist_parser::Extention_infoContext::WHITE_SPACE(size_t i) {
  return getToken(playlist_parser::WHITE_SPACE, i);
}

tree::TerminalNode* playlist_parser::Extention_infoContext::DASH() {
  return getToken(playlist_parser::DASH, 0);
}

playlist_parser::Track_nameContext* playlist_parser::Extention_infoContext::track_name() {
  return getRuleContext<playlist_parser::Track_nameContext>(0);
}

std::vector<tree::TerminalNode *> playlist_parser::Extention_infoContext::NEWLINE() {
  return getTokens(playlist_parser::NEWLINE);
}

tree::TerminalNode* playlist_parser::Extention_infoContext::NEWLINE(size_t i) {
  return getToken(playlist_parser::NEWLINE, i);
}

playlist_parser::Path_to_trackContext* playlist_parser::Extention_infoContext::path_to_track() {
  return getRuleContext<playlist_parser::Path_to_trackContext>(0);
}


size_t playlist_parser::Extention_infoContext::getRuleIndex() const {
  return playlist_parser::RuleExtention_info;
}

void playlist_parser::Extention_infoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<playlist_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExtention_info(this);
}

void playlist_parser::Extention_infoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<playlist_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExtention_info(this);
}

playlist_parser::Extention_infoContext* playlist_parser::extention_info() {
  Extention_infoContext *_localctx = _tracker.createInstance<Extention_infoContext>(_ctx, getState());
  enterRule(_localctx, 2, playlist_parser::RuleExtention_info);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(19);
    match(playlist_parser::EXTINFO_LABEL);
    setState(20);
    match(playlist_parser::COLON);
    setState(21);
    duration();
    setState(22);
    match(playlist_parser::COMMA);
    setState(23);
    actor_name();
    setState(24);
    match(playlist_parser::WHITE_SPACE);
    setState(25);
    match(playlist_parser::DASH);
    setState(26);
    match(playlist_parser::WHITE_SPACE);
    setState(27);
    track_name();
    setState(28);
    match(playlist_parser::NEWLINE);
    setState(29);
    path_to_track();
    setState(33);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == playlist_parser::NEWLINE) {
      setState(30);
      match(playlist_parser::NEWLINE);
      setState(35);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DurationContext ------------------------------------------------------------------

playlist_parser::DurationContext::DurationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> playlist_parser::DurationContext::WHITE_SPACE() {
  return getTokens(playlist_parser::WHITE_SPACE);
}

tree::TerminalNode* playlist_parser::DurationContext::WHITE_SPACE(size_t i) {
  return getToken(playlist_parser::WHITE_SPACE, i);
}

std::vector<tree::TerminalNode *> playlist_parser::DurationContext::DIGIT() {
  return getTokens(playlist_parser::DIGIT);
}

tree::TerminalNode* playlist_parser::DurationContext::DIGIT(size_t i) {
  return getToken(playlist_parser::DIGIT, i);
}


size_t playlist_parser::DurationContext::getRuleIndex() const {
  return playlist_parser::RuleDuration;
}

void playlist_parser::DurationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<playlist_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDuration(this);
}

void playlist_parser::DurationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<playlist_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDuration(this);
}

playlist_parser::DurationContext* playlist_parser::duration() {
  DurationContext *_localctx = _tracker.createInstance<DurationContext>(_ctx, getState());
  enterRule(_localctx, 4, playlist_parser::RuleDuration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(39);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == playlist_parser::WHITE_SPACE) {
      setState(36);
      match(playlist_parser::WHITE_SPACE);
      setState(41);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(43); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(42);
      match(playlist_parser::DIGIT);
      setState(45); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == playlist_parser::DIGIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Actor_nameContext ------------------------------------------------------------------

playlist_parser::Actor_nameContext::Actor_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> playlist_parser::Actor_nameContext::WHITE_SPACE() {
  return getTokens(playlist_parser::WHITE_SPACE);
}

tree::TerminalNode* playlist_parser::Actor_nameContext::WHITE_SPACE(size_t i) {
  return getToken(playlist_parser::WHITE_SPACE, i);
}

std::vector<tree::TerminalNode *> playlist_parser::Actor_nameContext::LETTER() {
  return getTokens(playlist_parser::LETTER);
}

tree::TerminalNode* playlist_parser::Actor_nameContext::LETTER(size_t i) {
  return getToken(playlist_parser::LETTER, i);
}

std::vector<tree::TerminalNode *> playlist_parser::Actor_nameContext::DIGIT() {
  return getTokens(playlist_parser::DIGIT);
}

tree::TerminalNode* playlist_parser::Actor_nameContext::DIGIT(size_t i) {
  return getToken(playlist_parser::DIGIT, i);
}

std::vector<tree::TerminalNode *> playlist_parser::Actor_nameContext::SPECIAL_SYMBOL() {
  return getTokens(playlist_parser::SPECIAL_SYMBOL);
}

tree::TerminalNode* playlist_parser::Actor_nameContext::SPECIAL_SYMBOL(size_t i) {
  return getToken(playlist_parser::SPECIAL_SYMBOL, i);
}

std::vector<tree::TerminalNode *> playlist_parser::Actor_nameContext::POINT() {
  return getTokens(playlist_parser::POINT);
}

tree::TerminalNode* playlist_parser::Actor_nameContext::POINT(size_t i) {
  return getToken(playlist_parser::POINT, i);
}

std::vector<tree::TerminalNode *> playlist_parser::Actor_nameContext::DASH() {
  return getTokens(playlist_parser::DASH);
}

tree::TerminalNode* playlist_parser::Actor_nameContext::DASH(size_t i) {
  return getToken(playlist_parser::DASH, i);
}


size_t playlist_parser::Actor_nameContext::getRuleIndex() const {
  return playlist_parser::RuleActor_name;
}

void playlist_parser::Actor_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<playlist_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterActor_name(this);
}

void playlist_parser::Actor_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<playlist_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitActor_name(this);
}

playlist_parser::Actor_nameContext* playlist_parser::actor_name() {
  Actor_nameContext *_localctx = _tracker.createInstance<Actor_nameContext>(_ctx, getState());
  enterRule(_localctx, 6, playlist_parser::RuleActor_name);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == playlist_parser::WHITE_SPACE) {
      setState(47);
      match(playlist_parser::WHITE_SPACE);
      setState(52);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(54); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(53);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << playlist_parser::LETTER)
        | (1ULL << playlist_parser::DIGIT)
        | (1ULL << playlist_parser::SPECIAL_SYMBOL)
        | (1ULL << playlist_parser::DASH)
        | (1ULL << playlist_parser::POINT))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(56); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << playlist_parser::LETTER)
      | (1ULL << playlist_parser::DIGIT)
      | (1ULL << playlist_parser::SPECIAL_SYMBOL)
      | (1ULL << playlist_parser::DASH)
      | (1ULL << playlist_parser::POINT))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Track_nameContext ------------------------------------------------------------------

playlist_parser::Track_nameContext::Track_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> playlist_parser::Track_nameContext::WHITE_SPACE() {
  return getTokens(playlist_parser::WHITE_SPACE);
}

tree::TerminalNode* playlist_parser::Track_nameContext::WHITE_SPACE(size_t i) {
  return getToken(playlist_parser::WHITE_SPACE, i);
}

std::vector<tree::TerminalNode *> playlist_parser::Track_nameContext::LETTER() {
  return getTokens(playlist_parser::LETTER);
}

tree::TerminalNode* playlist_parser::Track_nameContext::LETTER(size_t i) {
  return getToken(playlist_parser::LETTER, i);
}

std::vector<tree::TerminalNode *> playlist_parser::Track_nameContext::DIGIT() {
  return getTokens(playlist_parser::DIGIT);
}

tree::TerminalNode* playlist_parser::Track_nameContext::DIGIT(size_t i) {
  return getToken(playlist_parser::DIGIT, i);
}

std::vector<tree::TerminalNode *> playlist_parser::Track_nameContext::SPECIAL_SYMBOL() {
  return getTokens(playlist_parser::SPECIAL_SYMBOL);
}

tree::TerminalNode* playlist_parser::Track_nameContext::SPECIAL_SYMBOL(size_t i) {
  return getToken(playlist_parser::SPECIAL_SYMBOL, i);
}

std::vector<tree::TerminalNode *> playlist_parser::Track_nameContext::POINT() {
  return getTokens(playlist_parser::POINT);
}

tree::TerminalNode* playlist_parser::Track_nameContext::POINT(size_t i) {
  return getToken(playlist_parser::POINT, i);
}

std::vector<tree::TerminalNode *> playlist_parser::Track_nameContext::DASH() {
  return getTokens(playlist_parser::DASH);
}

tree::TerminalNode* playlist_parser::Track_nameContext::DASH(size_t i) {
  return getToken(playlist_parser::DASH, i);
}


size_t playlist_parser::Track_nameContext::getRuleIndex() const {
  return playlist_parser::RuleTrack_name;
}

void playlist_parser::Track_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<playlist_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrack_name(this);
}

void playlist_parser::Track_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<playlist_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrack_name(this);
}

playlist_parser::Track_nameContext* playlist_parser::track_name() {
  Track_nameContext *_localctx = _tracker.createInstance<Track_nameContext>(_ctx, getState());
  enterRule(_localctx, 8, playlist_parser::RuleTrack_name);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(61);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == playlist_parser::WHITE_SPACE) {
      setState(58);
      match(playlist_parser::WHITE_SPACE);
      setState(63);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(65); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(64);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << playlist_parser::LETTER)
        | (1ULL << playlist_parser::DIGIT)
        | (1ULL << playlist_parser::SPECIAL_SYMBOL)
        | (1ULL << playlist_parser::DASH)
        | (1ULL << playlist_parser::POINT))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(67); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << playlist_parser::LETTER)
      | (1ULL << playlist_parser::DIGIT)
      | (1ULL << playlist_parser::SPECIAL_SYMBOL)
      | (1ULL << playlist_parser::DASH)
      | (1ULL << playlist_parser::POINT))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Path_to_trackContext ------------------------------------------------------------------

playlist_parser::Path_to_trackContext::Path_to_trackContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* playlist_parser::Path_to_trackContext::HASHTAG() {
  return getToken(playlist_parser::HASHTAG, 0);
}

std::vector<tree::TerminalNode *> playlist_parser::Path_to_trackContext::LETTER() {
  return getTokens(playlist_parser::LETTER);
}

tree::TerminalNode* playlist_parser::Path_to_trackContext::LETTER(size_t i) {
  return getToken(playlist_parser::LETTER, i);
}

std::vector<tree::TerminalNode *> playlist_parser::Path_to_trackContext::DIGIT() {
  return getTokens(playlist_parser::DIGIT);
}

tree::TerminalNode* playlist_parser::Path_to_trackContext::DIGIT(size_t i) {
  return getToken(playlist_parser::DIGIT, i);
}

std::vector<tree::TerminalNode *> playlist_parser::Path_to_trackContext::SPECIAL_SYMBOL() {
  return getTokens(playlist_parser::SPECIAL_SYMBOL);
}

tree::TerminalNode* playlist_parser::Path_to_trackContext::SPECIAL_SYMBOL(size_t i) {
  return getToken(playlist_parser::SPECIAL_SYMBOL, i);
}

std::vector<tree::TerminalNode *> playlist_parser::Path_to_trackContext::COLON() {
  return getTokens(playlist_parser::COLON);
}

tree::TerminalNode* playlist_parser::Path_to_trackContext::COLON(size_t i) {
  return getToken(playlist_parser::COLON, i);
}

std::vector<tree::TerminalNode *> playlist_parser::Path_to_trackContext::COMMA() {
  return getTokens(playlist_parser::COMMA);
}

tree::TerminalNode* playlist_parser::Path_to_trackContext::COMMA(size_t i) {
  return getToken(playlist_parser::COMMA, i);
}

std::vector<tree::TerminalNode *> playlist_parser::Path_to_trackContext::WHITE_SPACE() {
  return getTokens(playlist_parser::WHITE_SPACE);
}

tree::TerminalNode* playlist_parser::Path_to_trackContext::WHITE_SPACE(size_t i) {
  return getToken(playlist_parser::WHITE_SPACE, i);
}

std::vector<tree::TerminalNode *> playlist_parser::Path_to_trackContext::DASH() {
  return getTokens(playlist_parser::DASH);
}

tree::TerminalNode* playlist_parser::Path_to_trackContext::DASH(size_t i) {
  return getToken(playlist_parser::DASH, i);
}

std::vector<tree::TerminalNode *> playlist_parser::Path_to_trackContext::POINT() {
  return getTokens(playlist_parser::POINT);
}

tree::TerminalNode* playlist_parser::Path_to_trackContext::POINT(size_t i) {
  return getToken(playlist_parser::POINT, i);
}


size_t playlist_parser::Path_to_trackContext::getRuleIndex() const {
  return playlist_parser::RulePath_to_track;
}

void playlist_parser::Path_to_trackContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<playlist_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPath_to_track(this);
}

void playlist_parser::Path_to_trackContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<playlist_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPath_to_track(this);
}

playlist_parser::Path_to_trackContext* playlist_parser::path_to_track() {
  Path_to_trackContext *_localctx = _tracker.createInstance<Path_to_trackContext>(_ctx, getState());
  enterRule(_localctx, 10, playlist_parser::RulePath_to_track);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    _la = _input->LA(1);
    if (_la == 0 || _la == Token::EOF || (_la == playlist_parser::HASHTAG)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(71); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(70);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << playlist_parser::LETTER)
        | (1ULL << playlist_parser::WHITE_SPACE)
        | (1ULL << playlist_parser::DIGIT)
        | (1ULL << playlist_parser::SPECIAL_SYMBOL)
        | (1ULL << playlist_parser::DASH)
        | (1ULL << playlist_parser::COLON)
        | (1ULL << playlist_parser::COMMA)
        | (1ULL << playlist_parser::POINT))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(73); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << playlist_parser::LETTER)
      | (1ULL << playlist_parser::WHITE_SPACE)
      | (1ULL << playlist_parser::DIGIT)
      | (1ULL << playlist_parser::SPECIAL_SYMBOL)
      | (1ULL << playlist_parser::DASH)
      | (1ULL << playlist_parser::COLON)
      | (1ULL << playlist_parser::COMMA)
      | (1ULL << playlist_parser::POINT))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> playlist_parser::_decisionToDFA;
atn::PredictionContextCache playlist_parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN playlist_parser::_atn;
std::vector<uint16_t> playlist_parser::_serializedATN;

std::vector<std::string> playlist_parser::_ruleNames = {
  "enter", "extention_info", "duration", "actor_name", "track_name", "path_to_track"
};

std::vector<std::string> playlist_parser::_literalNames = {
};

std::vector<std::string> playlist_parser::_symbolicNames = {
  "", "ENTER_LABEL", "EXTINFO_LABEL", "LETTER", "NEWLINE", "WHITE_SPACE", 
  "DIGIT", "SPECIAL_SYMBOL", "DASH", "COLON", "COMMA", "POINT", "HASHTAG"
};

dfa::Vocabulary playlist_parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> playlist_parser::_tokenNames;

playlist_parser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0xe, 0x4e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x6, 0x2, 0x12, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 
    0x13, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x22, 
    0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x25, 0xb, 0x3, 0x3, 0x4, 0x7, 0x4, 0x28, 
    0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x2b, 0xb, 0x4, 0x3, 0x4, 0x6, 0x4, 0x2e, 
    0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0x2f, 0x3, 0x5, 0x7, 0x5, 0x33, 0xa, 0x5, 
    0xc, 0x5, 0xe, 0x5, 0x36, 0xb, 0x5, 0x3, 0x5, 0x6, 0x5, 0x39, 0xa, 0x5, 
    0xd, 0x5, 0xe, 0x5, 0x3a, 0x3, 0x6, 0x7, 0x6, 0x3e, 0xa, 0x6, 0xc, 0x6, 
    0xe, 0x6, 0x41, 0xb, 0x6, 0x3, 0x6, 0x6, 0x6, 0x44, 0xa, 0x6, 0xd, 0x6, 
    0xe, 0x6, 0x45, 0x3, 0x7, 0x3, 0x7, 0x6, 0x7, 0x4a, 0xa, 0x7, 0xd, 0x7, 
    0xe, 0x7, 0x4b, 0x3, 0x7, 0x2, 0x2, 0x8, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0x2, 0x5, 0x5, 0x2, 0x5, 0x5, 0x8, 0xa, 0xd, 0xd, 0x3, 0x2, 0xe, 0xe, 
    0x4, 0x2, 0x5, 0x5, 0x7, 0xd, 0x2, 0x50, 0x2, 0xe, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x15, 0x3, 0x2, 0x2, 0x2, 0x6, 0x29, 0x3, 0x2, 0x2, 0x2, 0x8, 0x34, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x3f, 0x3, 0x2, 0x2, 0x2, 0xc, 0x47, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0xf, 0x7, 0x3, 0x2, 0x2, 0xf, 0x11, 0x7, 0x6, 0x2, 0x2, 
    0x10, 0x12, 0x5, 0x4, 0x3, 0x2, 0x11, 0x10, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x13, 0x3, 0x2, 0x2, 0x2, 0x13, 0x11, 0x3, 0x2, 0x2, 0x2, 0x13, 0x14, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x3, 0x3, 0x2, 0x2, 0x2, 0x15, 0x16, 0x7, 
    0x4, 0x2, 0x2, 0x16, 0x17, 0x7, 0xb, 0x2, 0x2, 0x17, 0x18, 0x5, 0x6, 
    0x4, 0x2, 0x18, 0x19, 0x7, 0xc, 0x2, 0x2, 0x19, 0x1a, 0x5, 0x8, 0x5, 
    0x2, 0x1a, 0x1b, 0x7, 0x7, 0x2, 0x2, 0x1b, 0x1c, 0x7, 0xa, 0x2, 0x2, 
    0x1c, 0x1d, 0x7, 0x7, 0x2, 0x2, 0x1d, 0x1e, 0x5, 0xa, 0x6, 0x2, 0x1e, 
    0x1f, 0x7, 0x6, 0x2, 0x2, 0x1f, 0x23, 0x5, 0xc, 0x7, 0x2, 0x20, 0x22, 
    0x7, 0x6, 0x2, 0x2, 0x21, 0x20, 0x3, 0x2, 0x2, 0x2, 0x22, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0x23, 0x21, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x3, 0x2, 
    0x2, 0x2, 0x24, 0x5, 0x3, 0x2, 0x2, 0x2, 0x25, 0x23, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x28, 0x7, 0x7, 0x2, 0x2, 0x27, 0x26, 0x3, 0x2, 0x2, 0x2, 
    0x28, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x29, 0x27, 0x3, 0x2, 0x2, 0x2, 0x29, 
    0x2a, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x29, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0x2e, 0x7, 0x8, 0x2, 0x2, 0x2d, 0x2c, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x2d, 0x3, 0x2, 
    0x2, 0x2, 0x2f, 0x30, 0x3, 0x2, 0x2, 0x2, 0x30, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x31, 0x33, 0x7, 0x7, 0x2, 0x2, 0x32, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x33, 0x36, 0x3, 0x2, 0x2, 0x2, 0x34, 0x32, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x35, 0x3, 0x2, 0x2, 0x2, 0x35, 0x38, 0x3, 0x2, 0x2, 0x2, 0x36, 0x34, 
    0x3, 0x2, 0x2, 0x2, 0x37, 0x39, 0x9, 0x2, 0x2, 0x2, 0x38, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0x39, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x38, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x3c, 0x3e, 0x7, 0x7, 0x2, 0x2, 0x3d, 0x3c, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 
    0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x43, 0x3, 0x2, 0x2, 0x2, 0x41, 0x3f, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x44, 0x9, 0x2, 0x2, 0x2, 0x43, 0x42, 0x3, 
    0x2, 0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0x43, 0x3, 0x2, 
    0x2, 0x2, 0x45, 0x46, 0x3, 0x2, 0x2, 0x2, 0x46, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x47, 0x49, 0xa, 0x3, 0x2, 0x2, 0x48, 0x4a, 0x9, 0x4, 0x2, 0x2, 
    0x49, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4b, 
    0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4c, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0xb, 0x13, 0x23, 0x29, 0x2f, 0x34, 0x3a, 0x3f, 0x45, 
    0x4b, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

playlist_parser::Initializer playlist_parser::_init;
