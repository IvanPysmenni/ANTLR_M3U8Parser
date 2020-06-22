#include <iostream>

#include "playlist_listener.h"
#include "json_writer.h"

playlistListener::playlistListener(JSONWriter* jsonWriter) : m_jsonWriter(jsonWriter) {};

void playlistListener::enterEnter(playlistParser::playlist_parser::EnterContext* ctx)
{
    m_jsonWriter->writeStart();
}

void playlistListener::exitEnter(playlistParser::playlist_parser::EnterContext* ctx)
{
    m_jsonWriter->writeEnd();
}

void playlistListener::enterExtention_info(playlistParser::playlist_parser::Extention_infoContext* ctx)
{
    m_jsonWriter->writeStartObject();
}

void playlistListener::exitExtention_info(playlistParser::playlist_parser::Extention_infoContext* ctx)
{
    m_jsonWriter->writeEndObject();
}

void playlistListener::enterDuration(playlistParser::playlist_parser::DurationContext* ctx)
{
}

void playlistListener::exitDuration(playlistParser::playlist_parser::DurationContext* ctx)
{
    m_jsonWriter->writeRow("duration", ctx->getText());
}

void playlistListener::enterActor_name(playlistParser::playlist_parser::Actor_nameContext* ctx)
{
}

void playlistListener::exitActor_name(playlistParser::playlist_parser::Actor_nameContext* ctx)
{
    m_jsonWriter->writeRow("actor_name", ctx->getText());
}

void playlistListener::enterTrack_name(playlistParser::playlist_parser::Track_nameContext* ctx)
{
}

void playlistListener::exitTrack_name(playlistParser::playlist_parser::Track_nameContext* ctx)
{
    m_jsonWriter->writeRow("track_name", ctx->getText());
}

void playlistListener::enterPath_to_track(playlistParser::playlist_parser::Path_to_trackContext* ctx)
{
}

void playlistListener::exitPath_to_track(playlistParser::playlist_parser::Path_to_trackContext* ctx)
{
    m_jsonWriter->writeRow("path_to_track", ctx->getText());
}

