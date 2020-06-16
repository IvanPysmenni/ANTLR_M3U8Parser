#include <iostream>

#include "playlist_listener.h"

void playlistListener::enterEnter(playlistParser::playlist_parser::EnterContext* ctx)
{
    std::cout << "[\n";
}

void playlistListener::exitEnter(playlistParser::playlist_parser::EnterContext* ctx)
{
    std::cout << "]" << std::endl;
}

void playlistListener::enterExtention_info(playlistParser::playlist_parser::Extention_infoContext* ctx)
{
    std::cout << "{\n";
}

void playlistListener::exitExtention_info(playlistParser::playlist_parser::Extention_infoContext* ctx)
{
    std::cout << "},\n";
}

void playlistListener::enterDuration(playlistParser::playlist_parser::DurationContext* ctx)
{
    std::cout << "duration: ";
}

void playlistListener::exitDuration(playlistParser::playlist_parser::DurationContext* ctx)
{
    std::cout << ctx->getText() << ",\n";
}

void playlistListener::enterActor_name(playlistParser::playlist_parser::Actor_nameContext* ctx)
{
    std::cout << "actor_name: ";
}

void playlistListener::exitActor_name(playlistParser::playlist_parser::Actor_nameContext* ctx)
{
    std::cout << ctx->getText() << ",\n";
}

void playlistListener::enterTrack_name(playlistParser::playlist_parser::Track_nameContext* ctx)
{
    std::cout << "track_name: ";
}

void playlistListener::exitTrack_name(playlistParser::playlist_parser::Track_nameContext* ctx)
{
    std::cout << ctx->getText() << ",\n";
}

void playlistListener::enterPath_to_track(playlistParser::playlist_parser::Path_to_trackContext* ctx)
{
    std::cout << "path_to_track: ";
}

void playlistListener::exitPath_to_track(playlistParser::playlist_parser::Path_to_trackContext* ctx)
{
    std::cout << ctx->getText() << ",\n";
}

