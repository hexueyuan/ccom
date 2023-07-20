PROJECT(ccom)

CMAKE_MINIMUM_REQUIRED(VERSION 3.12)

# ================================ #
#             全局设置              #
# ================================ #
set(CMAKE_OSX_ARCHITECTURES "arm64") # 编译架构
set(CMAKE_CXX_STANDARD 17) # C++17

include_directories(${PROJECT_SOURCE_DIR}/src) # include path

link_directories(${PROJECT_SOURCE_DIR}/lib) # lib path

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake) # cmake module

if(CMAKE_SYSTEM_NAME STREQUAL "Darwin")
    include(CheckFunctionExists)
    CHECK_FUNCTION_EXISTS(clock_gettime HAVE_CLOCK_GETTIME)
    if(NOT HAVE_CLOCK_GETTIME)
        set(DEFINE_CLOCK_GETTIME "-DNO_CLOCK_GETTIME_IN_MAC")
    endif()
    set(CMAKE_CPP_FLAGS "${CMAKE_CPP_FLAGS} -Wno-deprecated-declarations -Wno-inconsistent-missing-override")
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
elseif(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    set(DYNAMIC_LIB ${DYNAMIC_LIB} rt)
endif()

# PreProcessor Flags
set(CMAKE_CPP_FLAGS "${CMAKE_CPP_FLAGS} -DBTHREAD_USE_FAST_PTHREAD_MUTEX -D__const__=__unused__")
set(CMAKE_CPP_FLAGS "${CMAKE_CPP_FLAGS} -D_GNU_SOURCE -DUSE_SYMBOLIZE -DNO_TCMALLOC -D__STDC_FORMAT_MACROS")
set(CMAKE_CPP_FLAGS "${CMAKE_CPP_FLAGS} -D__STDC_LIMIT_MACROS -D__STDC_CONSTANT_MACROS -D__STRICT_ANSI__")
set(CMAKE_CPP_FLAGS "${CMAKE_CPP_FLAGS} -DGFLAGS_NS=google")

# C++ Compiler Flags
set(CMAKE_CXX_FLAGS "${CMAKE_CPP_FLAGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2 -pipe -Wall -W -fPIC")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fstrict-aliasing -Wno-invalid-offsetof -Wno-unused-parameter -fno-omit-frame-pointer")
# C Compiler Flags
set(CMAKE_C_FLAGS "${CMAKE_CPP_FLAGS}")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O2 -pipe -Wall -W -fPIC")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fstrict-aliasing -Wno-unused-parameter -fno-omit-frame-pointer")

# ================================ #
#             编译模块              #
# ================================ #
add_subdirectory(src/bthread)
add_subdirectory(src/butil)
add_subdirectory(src/json2pb)
add_subdirectory(src/mcpack2pb)
add_subdirectory(src/bvar)

# ================================ #
#             测试模块              #
# ================================ #
add_executable(butil_test test/butil_test.cpp)
target_link_libraries(butil_test butil ${DYNAMIC_LIB})
add_executable(bthread_test test/bthread_test.cpp)
target_link_libraries(bthread_test bthread bvar butil ${DYNAMIC_LIB})
add_executable(boost_test test/boost_test.cpp)