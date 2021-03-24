cmake_minimum_required (VERSION 3.5)

project (HelloWorld)



set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++14")
set (source_dir "${PROJECT_SOURCE_DIR}/src/")
set (include_dir "${PROJECT_SOURCE_DIR}/headers/")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/")
set (PROJ_VERSION "0.1")

include_directories(${include_dir})
file (GLOB source_files "${source_dir}/*cpp" "${include_dir}/*hpp" )

set (exec_name "main_${PROJ_VERSION}")

add_executable  (${exec_name} ${source_files})
