add_library(${LIB_OSAGE}
    ${GRAPHVIZ_SRC_DIR}/lib/osage/osageinit.c
)

target_link_libraries(${LIB_OSAGE} 
    ${LIB_COMMON}
    ${LIB_PACK}
    ${LIB_NEATOGEN}
)
