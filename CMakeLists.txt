#files

file(GLOB EssexEngineConfigDaemon_HEADERS
    "src/Daemons/Config/*.h"
)
file(GLOB EssexEngineConfigDaemon_SRC
    ${EssexEngineConfigDaemon_HEADERS}
    "src/Daemons/Config/*.cpp"
)

#setup headers

file(COPY ${EssexEngineConfigDaemon_HEADERS} DESTINATION "${CMAKE_BINARY_DIR}/lib/include/EssexEngineConfigDaemon/")

#setup build

add_library(EssexEngineConfigDaemon SHARED ${EssexEngineConfigDaemon_SRC})
target_link_libraries(EssexEngineConfigDaemon EssexEngineCore)