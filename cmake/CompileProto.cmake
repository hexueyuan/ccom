# Licensed to the Apache Software Foundation (ASF) under one or more
# contributor license agreements.  See the NOTICE file distributed with
# this work for additional information regarding copyright ownership.
# The ASF licenses this file to You under the Apache License, Version 2.0
# (the "License"); you may not use this file except in compliance with
# the License.  You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.


# 函数名：compile_proto
# 编译得到的头文件: OUT_HDRS
# 编译得到的源文件: OUT_SRCS
# 目标路径：DESTDIR
# 头文件输出路径：HDR_OUTPUT_DIR
# proto文件目录：PROTO_DIR
# proto文件里表：PROTO_FILES
#set(PROTOBUF_PROTOC_EXECUTABLE "/Users/hexueyuan/Workroot/CPPRELEASE/bin/protoc")
#function(compile_proto OUT_HDRS OUT_SRCS DESTDIR HDR_OUTPUT_DIR PROTO_DIR PROTO_FILES)
#  foreach(P ${PROTO_FILES})
#    string(REPLACE .proto .pb.h HDR ${P})
#    set(HDR_RELATIVE ${HDR})
#    set(HDR ${DESTDIR}/${HDR})
#    string(REPLACE .proto .pb.cc SRC ${P})
#    set(SRC ${DESTDIR}/${SRC})
#    list(APPEND HDRS ${HDR})
#    list(APPEND SRCS ${SRC})
#    add_custom_command(
#      OUTPUT ${HDR} ${SRC}
#      COMMAND ${PROTOBUF_PROTOC_EXECUTABLE} ${PROTOC_FLAGS} -I${PROTO_DIR} --cpp_out=${DESTDIR} ${PROTO_DIR}/${P}
#      COMMAND ${CMAKE_COMMAND} -E copy ${HDR} ${HDR_OUTPUT_DIR}/${HDR_RELATIVE}
#      DEPENDS ${PROTO_DIR}/${P}
#    )
#  endforeach()
#  set(${OUT_HDRS} ${HDRS} PARENT_SCOPE)
#  set(${OUT_SRCS} ${SRCS} PARENT_SCOPE)
#endfunction()

# PROTOBUF_PROTOC_EXECUTABLE: protoc的路径
# PROTOBUF_PROTOC_FLAGS: protoc的编译参数
function(compile_proto PROTO_BASE_DIR PROTO_FILES DEST_DIR OUT_HDRS OUT_SRCS)
    foreach(F ${PROTO_FILES})
        string(REPLACE .proto .pb.h HDR ${F})
        string(REPLACE .proto .pb.cc SRC ${F})
        set(HDR ${DEST_DIR}/${HDR})
        set(SRC ${DEST_DIR}/${SRC})

        list(APPEND HDRS ${HDR})
        list(APPEND SRCS ${SRC})

        add_custom_command(
            OUTPUT ${HDR} ${SRC}
            COMMAND ${PROTOBUF_PROTOC_EXECUTABLE} ${PROTOBUF_PROTOC_FLAGS} -I${PROTO_BASE_DIR} --cpp_out=${DEST_DIR} ${PROTO_BASE_DIR}/${F}
        )
    endforeach()
    set(${OUT_HDRS} ${HDRS} PARENT_SCOPE)
    set(${OUT_SRCS} ${SRCS} PARENT_SCOPE)
endfunction()
