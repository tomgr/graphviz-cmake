add_library(${LIB_TWOPIGEN}
    ${GRAPHVIZ_SRC_DIR}/lib/twopigen/circle.c
    ${GRAPHVIZ_SRC_DIR}/lib/twopigen/twopiinit.c
)

target_link_libraries(${LIB_TWOPIGEN}
    ${LIB_COMMON}
    ${LIB_PACK}
    ${LIB_NEATOGEN}
    ${LIB_CIRCOGEN}
    ${LIB_SFDPGEN}
)
