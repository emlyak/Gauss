CMAKE_MINIMUM_REQUIRED(VERSION 3.12)

project(gauss)

set(SOURCES 
    src/gauss.cpp   
)

set(HEADERS 
    src/gauss.h
)

include_directories(src)

add_library(${PROJECT_NAME} SHARED ${SOURCES} ${HEADERS})