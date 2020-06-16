
// Generated from /home/ivan/Repos/M3UParser/src/grammar/playlist_parser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "playlist_parser.h"


namespace playlistParser {

/**
 * This interface defines an abstract listener for a parse tree produced by playlist_parser.
 */
class  playlist_parserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterEnter(playlist_parser::EnterContext *ctx) = 0;
  virtual void exitEnter(playlist_parser::EnterContext *ctx) = 0;

  virtual void enterExtention_info(playlist_parser::Extention_infoContext *ctx) = 0;
  virtual void exitExtention_info(playlist_parser::Extention_infoContext *ctx) = 0;

  virtual void enterDuration(playlist_parser::DurationContext *ctx) = 0;
  virtual void exitDuration(playlist_parser::DurationContext *ctx) = 0;

  virtual void enterActor_name(playlist_parser::Actor_nameContext *ctx) = 0;
  virtual void exitActor_name(playlist_parser::Actor_nameContext *ctx) = 0;

  virtual void enterTrack_name(playlist_parser::Track_nameContext *ctx) = 0;
  virtual void exitTrack_name(playlist_parser::Track_nameContext *ctx) = 0;

  virtual void enterPath_to_track(playlist_parser::Path_to_trackContext *ctx) = 0;
  virtual void exitPath_to_track(playlist_parser::Path_to_trackContext *ctx) = 0;


};

}  // namespace playlistParser
