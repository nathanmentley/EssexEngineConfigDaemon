/* 
 * Essex Engine
 * 
 * Copyright (C) 2017 Nathan Mentley - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the BSD license.
 *
 * You should have received a copy of the BSD license with
 * this file. If not, please visit: https://github.com/nathanmentley/EssexEngine
 */

#include <EssexEngineConfigDaemon/ConfigDaemon.h>

EssexEngine::Daemons::Config::ConfigDaemon::ConfigDaemon(WeakPointer<Context> _context):BaseDaemon(_context) {
	build_number = 12;
	build_name = "build name";
}

EssexEngine::Daemons::Config::ConfigDaemon::~ConfigDaemon() {}

int EssexEngine::Daemons::Config::ConfigDaemon::GetBuildNumber() {
	return build_number;
}

std::string EssexEngine::Daemons::Config::ConfigDaemon::GetBuildName() {
	return build_name;
}

int EssexEngine::Daemons::Config::ConfigDaemon::GetScreenWidth() {
    return 1024;
}

int EssexEngine::Daemons::Config::ConfigDaemon::GetScreenHeight() {
    return 768;
}
