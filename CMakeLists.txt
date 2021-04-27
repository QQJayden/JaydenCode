cmake_minimum_required(VERSION 3.2)

PROJECT(JaydenCode)

INCLUDE_DIRECTORIES(
    ${PROJECT_SOURCE_DIR}
)

set(SRC
    ${PROJECT_SOURCE_DIR}/main.cpp
)

ADD_EXECUTABLE(hello ${SRC})