# PROTOBUF_PROTOC_EXECUTABLE: protoc的路径
# PROTOBUF_PROTOC_FLAGS: protoc的编译参数
# 函数名：compile_proto
# 编译得到的头文件: OUT_HDRS
# 编译得到的源文件: OUT_SRCS
# 目标路径：DEST_DIR
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
