cmake_minimum_required(VERSION 3.2)
project(tortilla)

# Declare the global variables for the cmake project
set(BENTO_SDK_ROOT ${PROJECT_SOURCE_DIR}/bento)
set(TORTILLA_SDK_ROOT ${PROJECT_SOURCE_DIR}/sdk)
set(TORTILLA_CAPI_ROOT ${PROJECT_SOURCE_DIR}/c_api)
set(TORTILLA_TESTS_ROOT ${PROJECT_SOURCE_DIR}/tests)

# Set the cmake path variable
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")

# This flag must be activated in order to handle properly folder flags
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# Define the cmake macros
include(CMakePlatforms)
include(CMakeMacros)
include(CMakeBuildSettings)

# Define the build options
define_plaform_settings()

# Print the platform's name
message(STATUS "The build identifier is: ${PLATFORM_NAME}")

# Create the list of allowed files to be included
set(bento_source_extensions)
list(APPEND bento_source_extensions ".h" ".cpp" ".inl" ".txt")

# Compile the bento SDK
add_subdirectory(${BENTO_SDK_ROOT}/src)

# Generate the tortilla SDK
add_subdirectory(${TORTILLA_SDK_ROOT}/src)

# Generate the dynamic library
add_subdirectory(${TORTILLA_CAPI_ROOT}/src)

# generate the applications if required
#add_subdirectory(${TORTILLA_TESTS_ROOT})
