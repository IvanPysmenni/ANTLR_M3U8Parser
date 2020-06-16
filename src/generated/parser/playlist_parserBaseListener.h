
// Generated from /home/ivan/Repos/M3UParser/src/grammar/playlist_parser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "playlist_parserListener.h"


namespace playlistParser {

/**
 * This class provides an empty implementation of playlist_parserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  playlist_parserBaseListener : public playlist_parserListener {
public:

  virtual void enterEnter(playlist_parser::EnterContext * /*ctx*/) override { }
  virtual void exitEnter(playlist_parser::EnterContext * /*ctx*/) override { }

  virtual void enterExtention_info(playlist_parser::Extention_infoContext * /*ctx*/) override { }
  virtual void exitExtention_info(playlist_parser::Extention_infoContext * /*ctx*/) override { }

  virtual void enterDuration(playlist_parser::DurationContext * /*ctx*/) override { }
  virtual void exitDuration(playlist_parser::DurationContext * /*ctx*/) override { }

  virtual void enterActor_name(playlist_parser::Actor_nameContext * /*ctx*/) override { }
  virtual void exitActor_name(playlist_parser::Actor_nameContext * /*ctx*/) override { }

  virtual void enterTrack_name(playlist_parser::Track_nameContext * /*ctx*/) override { }
  virtual void exitTrack_name(playlist_parser::Track_nameContext * /*ctx*/) override { }

  virtual void enterPath_to_track(playlist_parser::Path_to_trackContext * /*ctx*/) override { }
  virtual void exitPath_to_track(playlist_parser::Path_to_trackContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace playlistParser
