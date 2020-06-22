#ifndef PLAYLIST_LISTENER_H_
    #define PLAYLIST_LISTENER_H_

#include <memory>

#include "../generated/parser/playlist_parserBaseListener.h"

class JSONWriter;

class playlistListener : public playlistParser::playlist_parserBaseListener
{
public:

    playlistListener(JSONWriter* jsonWriter);

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

private:

    std::unique_ptr<JSONWriter> m_jsonWriter;
};

#endif // PLAYLIST_LISTENER_H_