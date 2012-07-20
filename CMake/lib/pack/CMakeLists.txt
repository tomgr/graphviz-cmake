add_library(${LIB_PACK}
    ${GRAPHVIZ_SRC_DIR}/lib/pack/ccomps.c
    ${GRAPHVIZ_SRC_DIR}/lib/pack/pack.c
)

target_link_libraries(${LIB_PACK} 
    ${LIB_COMMON}
    ${LIB_XDOT}
)
