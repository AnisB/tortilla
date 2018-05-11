cmake_minimum_required(VERSION 3.2)

# The defines we need for the library
set(TORTILLA_SDK_INCLUDE ${TORTILLA_SDK_ROOT}/include)
set(TORTILLA_CAPI_INCLUDE ${TORTILLA_CAPI_ROOT}/include)
set(TORTILLA_CAPI_SRC ${TORTILLA_CAPI_ROOT}/src)

bento_headers(header_files "${TORTILLA_CAPI_INCLUDE}" "c_api")
bento_sources(source_files "${TORTILLA_CAPI_SRC}" "c_api")

# Generate the static library
bento_dynamic_lib("tortilla_dylib" "c_api" "${header_files};${source_files};" "${TORTILLA_SDK_INCLUDE};${TORTILLA_CAPI_INCLUDE}")
target_link_libraries("tortilla_dylib" "tortilla_sdk" "bento_sdk")