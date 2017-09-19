#files

file(GLOB EssexEngineConfigDaemon_HEADERS
    "src/Daemons/ConfigDaemon/src/*.h"
)
file(GLOB EssexEngineConfigDaemon_SRC
    ${EssexEngineConfigDaemon_HEADERS}
    "src/Daemons/ConfigDaemon/src/*.cpp"
)

#setup headers

file(COPY ${EssexEngineConfigDaemon_HEADERS} DESTINATION "${CMAKE_BINARY_DIR}/lib/include/EssexEngineConfigDaemon/")

#setup build

add_library(EssexEngineConfigDaemon SHARED ${EssexEngineConfigDaemon_SRC})
target_link_libraries(EssexEngineConfigDaemon EssexEngineCore)

#setup tests

file(GLOB EssexEngineConfigDaemon_TESTSRC
    "src/Daemons/ConfigDaemon/test/*.cpp"
)

add_executable(EssexEngineConfigDaemonTests ${EssexEngineConfigDaemon_TESTSRC})
add_test(NAME EssexEngineConfigDaemonTests COMMAND EssexEngineConfigDaemonTests)