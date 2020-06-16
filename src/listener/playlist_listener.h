#include "../generated/parser/playlist_parserBaseListener.h"

class playlistListener : public playlistParser::playlist_parserBaseListener
{
public:

    void enterEnter(playlistParser::playlist_parser::EnterContext* ctx) override;
    void exitEnter(playlistParser::playlist_parser::EnterContext* ctx) override;

    void enterExtention_info(playlistParser::playlist_parser::Extention_infoContext* ctx) override;
    void exitExtention_info(playlistParser::playlist_parser::Extention_infoContext* ctx) override;

    void enterDuration(playlistParser::playlist_parser::DurationContext* ctx) override;
    void exitDuration(playlistParser::playlist_parser::DurationContext* ctx) override;

    void enterActor_name(playlistParser::playlist_parser::Actor_nameContext* ctx) override;
    void exitActor_name(playlistParser::playlist_parser::Actor_nameContext* ctx) override; 

    void enterTrack_name(playlistParser::playlist_parser::Track_nameContext* ctx) override;
    void exitTrack_name(playlistParser::playlist_parser::Track_nameContext* ctx) override; 

    void enterPath_to_track(playlistParser::playlist_parser::Path_to_trackContext * /*ctx*/) override;
    void exitPath_to_track(playlistParser::playlist_parser::Path_to_trackContext * /*ctx*/) override;

    //void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override;
    //void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override;
    //void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override;
    //void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override;
};