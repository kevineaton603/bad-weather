# Note that headers are optional, and do not affect add_library, but they will not
# show up in IDEs unless they are listed in add_library.

set(This BadWeather)

# Optionally glob, but only for CMake 3.12 or later:
# file(GLOB HEADER_LIST CONFIGURE_DEPENDS "${ModernCMakeExample_SOURCE_DIR}/include/modern/*.hpp")
set(
    HEADER_LIST 
    "${${This}_SOURCE_DIR}/include/httplib.h"
    "${${This}_SOURCE_DIR}/include/Request.h"
    "${${This}_SOURCE_DIR}/include/Converter.h"
    "${${This}_SOURCE_DIR}/include/UserInput.h"
    "${${This}_SOURCE_DIR}/include/GetAdvice.h"
    "${${This}_SOURCE_DIR}/include/InvalidCoordinates.h"
)

# Make an automatic library - will be static or dynamic based on user setting
add_library(${This} Request.cpp Converter.cpp UserInput.cpp GetAdvice.cpp InvalidCoordinates.cpp ${HEADER_LIST})

# We need this directory, and users of our library will need it too
target_include_directories(${This} PUBLIC ../include)

# This depends on (header only) boost
target_link_libraries(${This} PRIVATE nlohmann_json::nlohmann_json)

# All users of this library will need at least C++11
target_compile_features(${This} PUBLIC cxx_std_11)

# IDEs should put the headers in a nice place
source_group(TREE "${PROJECT_SOURCE_DIR}/include" PREFIX "Header Files" FILES ${HEADER_LIST})