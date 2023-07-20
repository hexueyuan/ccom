PROJECT(ccom)

CMAKE_MINIMUM_REQUIRED(VERSION 3.12)

set(CMAKE_OSX_ARCHITECTURES "arm64")

# ======== 编译选项 ======== #
set(CMAKE_CXX_STANDARD 17) # C++17
#set(GFLAGS_NS "google")

# ========================== #
include_directories(${PROJECT_SOURCE_DIR}/src)
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

if(CMAKE_SYSTEM_NAME STREQUAL "Darwin")
    include(CheckFunctionExists)
    CHECK_FUNCTION_EXISTS(clock_gettime HAVE_CLOCK_GETTIME)
    if(NOT HAVE_CLOCK_GETTIME)
        set(DEFINE_CLOCK_GETTIME "-DNO_CLOCK_GETTIME_IN_MAC")
    endif()
    set(CMAKE_CPP_FLAGS "${CMAKE_CPP_FLAGS} -Wno-deprecated-declarations -Wno-inconsistent-missing-override")
endif()

if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    set(DYNAMIC_LIB ${DYNAMIC_LIB} rt)
    set(BRPC_PRIVATE_LIBS "${BRPC_PRIVATE_LIBS} -lrt")
elseif(CMAKE_SYSTEM_NAME STREQUAL "Darwin")
    set(DYNAMIC_LIB ${DYNAMIC_LIB}
        pthread
        "-framework CoreFoundation"
        "-framework CoreGraphics"
        "-framework CoreData"
        "-framework CoreText"
        "-framework Security"
        "-framework Foundation"
        "-Wl,-U,_MallocExtension_ReleaseFreeMemory"
        "-Wl,-U,_ProfilerStart"
        "-Wl,-U,_ProfilerStop")
endif()

set(CMAKE_CPP_FLAGS "${CMAKE_CPP_FLAGS} -DBTHREAD_USE_FAST_PTHREAD_MUTEX -D__const__=__unused__ -D_GNU_SOURCE -DUSE_SYMBOLIZE -DNO_TCMALLOC -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS -D__STDC_CONSTANT_MACROS -D__STRICT_ANSI__")
set(CMAKE_CPP_FLAGS "${CMAKE_CPP_FLAGS} -DGFLAGS_NS=google")
set(CMAKE_CXX_FLAGS "${CMAKE_CPP_FLAGS} -O2 -pipe -Wall -W -fPIC -fstrict-aliasing -Wno-invalid-offsetof -Wno-unused-parameter -fno-omit-frame-pointer")
set(CMAKE_C_FLAGS "${CMAKE_CPP_FLAGS} -O2 -pipe -Wall -W -fPIC -fstrict-aliasing -Wno-unused-parameter -fno-omit-frame-pointer")

# ================================ #
# ----        编译模块       ----- #
# ================================ #

# --- 编译bthread
add_subdirectory(src/bthread)

# --- 编译butil
add_subdirectory(src/butil)

# --- 编译json2pb
add_subdirectory(src/json2pb)

# --- 编译mcpack2pb
add_subdirectory(src/mcpack2pb)

# --- 编译bvar
add_subdirectory(src/bvar)
