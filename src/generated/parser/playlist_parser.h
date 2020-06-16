
// Generated from /home/ivan/Repos/M3UParser/src/grammar/playlist_parser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"


namespace playlistParser {


class  playlist_parser : public antlr4::Parser {
public:
  enum {
    ENTER_LABEL = 1, EXTINFO_LABEL = 2, LETTER = 3, NEWLINE = 4, WHITE_SPACE = 5, 
    DIGIT = 6, SPECIAL_SYMBOL = 7, DASH = 8, COLON = 9, COMMA = 10, POINT = 11, 
    HASHTAG = 12
  };

  enum {
    RuleEnter = 0, RuleExtention_info = 1, RuleDuration = 2, RuleActor_name = 3, 
    RuleTrack_name = 4, RulePath_to_track = 5
  };

  playlist_parser(antlr4::TokenStream *input);
  ~playlist_parser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class EnterContext;
  class Extention_infoContext;
  class DurationContext;
  class Actor_nameContext;
  class Track_nameContext;
  class Path_to_trackContext; 

  class  EnterContext : public antlr4::ParserRuleContext {
  public:
    EnterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENTER_LABEL();
    antlr4::tree::TerminalNode *NEWLINE();
    std::vector<Extention_infoContext *> extention_info();
    Extention_infoContext* extention_info(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnterContext* enter();

  class  Extention_infoContext : public antlr4::ParserRuleContext {
  public:
    Extention_infoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTINFO_LABEL();
    antlr4::tree::TerminalNode *COLON();
    DurationContext *duration();
    antlr4::tree::TerminalNode *COMMA();
    Actor_nameContext *actor_name();
    std::vector<antlr4::tree::TerminalNode *> WHITE_SPACE();
    antlr4::tree::TerminalNode* WHITE_SPACE(size_t i);
    antlr4::tree::TerminalNode *DASH();
    Track_nameContext *track_name();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    Path_to_trackContext *path_to_track();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Extention_infoContext* extention_info();

  class  DurationContext : public antlr4::ParserRuleContext {
  public:
    DurationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WHITE_SPACE();
    antlr4::tree::TerminalNode* WHITE_SPACE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIGIT();
    antlr4::tree::TerminalNode* DIGIT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DurationContext* duration();

  class  Actor_nameContext : public antlr4::ParserRuleContext {
  public:
    Actor_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WHITE_SPACE();
    antlr4::tree::TerminalNode* WHITE_SPACE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LETTER();
    antlr4::tree::TerminalNode* LETTER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIGIT();
    antlr4::tree::TerminalNode* DIGIT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SPECIAL_SYMBOL();
    antlr4::tree::TerminalNode* SPECIAL_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> POINT();
    antlr4::tree::TerminalNode* POINT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DASH();
    antlr4::tree::TerminalNode* DASH(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Actor_nameContext* actor_name();

  class  Track_nameContext : public antlr4::ParserRuleContext {
  public:
    Track_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WHITE_SPACE();
    antlr4::tree::TerminalNode* WHITE_SPACE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LETTER();
    antlr4::tree::TerminalNode* LETTER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIGIT();
    antlr4::tree::TerminalNode* DIGIT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SPECIAL_SYMBOL();
    antlr4::tree::TerminalNode* SPECIAL_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> POINT();
    antlr4::tree::TerminalNode* POINT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DASH();
    antlr4::tree::TerminalNode* DASH(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Track_nameContext* track_name();

  class  Path_to_trackContext : public antlr4::ParserRuleContext {
  public:
    Path_to_trackContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASHTAG();
    std::vector<antlr4::tree::TerminalNode *> LETTER();
    antlr4::tree::TerminalNode* LETTER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIGIT();
    antlr4::tree::TerminalNode* DIGIT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SPECIAL_SYMBOL();
    antlr4::tree::TerminalNode* SPECIAL_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHITE_SPACE();
    antlr4::tree::TerminalNode* WHITE_SPACE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DASH();
    antlr4::tree::TerminalNode* DASH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> POINT();
    antlr4::tree::TerminalNode* POINT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Path_to_trackContext* path_to_track();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace playlistParser
