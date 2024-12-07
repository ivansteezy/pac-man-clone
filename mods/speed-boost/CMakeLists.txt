add_library(speed-boost)

target_include_directories(speed-boost PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_sources(speed-boost PRIVATE
    speed-boost.cpp
)

target_link_libraries(speed-boost PUBLIC game-framework pac-man)