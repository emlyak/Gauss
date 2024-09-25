CMAKE_MINIMUM_REQUIRED(VERSION 3.12)

project(gauss
        LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD_REQUIRED 17)

set(SOURCES 
    src/gauss.cpp   
)

set(HEADERS 
    src/gauss.h
    src/dllexport.h
)

add_compile_definitions(GAUSS_EXPORTS)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

add_library(${PROJECT_NAME} SHARED ${SOURCES} ${HEADERS})