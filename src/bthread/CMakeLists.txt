file(GLOB_RECURSE BTHREAD_SOURCES "${PROJECT_SOURCE_DIR}/src/bthread/*.cpp")
add_library(bthread ${BTHREAD_SOURCES})
