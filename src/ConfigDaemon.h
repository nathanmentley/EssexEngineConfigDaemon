/* 
 * Essex Engine
 * 
 * Copyright (C) 2018 Nathan Mentley - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the BSD license.
 *
 * You should have received a copy of the BSD license with
 * this file. If not, please visit: https://github.com/nathanmentley/EssexEngine
 */
#pragma once

#include <string>

#include <EssexEngineCore/BaseDaemon.h>
#include <EssexEngineCore/LogDaemon.h>
#include <EssexEngineConfigDaemon/IConfigDriver.h>

namespace EssexEngine{ 
namespace Daemons{
namespace Config{
    class ConfigDaemon:public BaseDaemon<IConfigDriver>
    {
        public:
            ConfigDaemon(WeakPointer<Context> _context);
            ~ConfigDaemon();

            void Init() {
                if(GetContext()->HasDaemon<Core::Logging::LogDaemon>()) {
                    GetContext()->GetDaemon<Core::Logging::LogDaemon>()->LogLine(
                        "Loading Daemon [%s] [%s]",
                        GetDaemonName().c_str(),
                        GetDaemonVersion().c_str()
                    );
                  }
            }
            std::string GetDaemonName() { return "Config"; }
            std::string GetDaemonVersion() { return ESSEX_ENGINE_VERSION; }

            int GetBuildNumber();
            std::string GetBuildName();
        
            int GetScreenWidth();
            int GetScreenHeight();
        private:
            int build_number;
            std::string build_name;
    };
}}};
