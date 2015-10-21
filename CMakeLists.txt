cmake_minimum_required(VERSION 2.6)
project(KTEResourcePacker)
add_definitions(-DDEBUG)

find_package(Boost  REQUIRED)

set_property( GLOBAL PROPERTY USE_FOLDERS ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/build/")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -pedantic")




set(HEADER_FILES "${PROJECT_SOURCE_DIR}/include")
set(SOURCE_FILES main.cpp)
set(DATA_FILES "CMakeLists.txt")
set(LIBRARIES)
set(ENGINE_PATH "${PROJECT_SOURCE_DIR}/../KTEngine/")

set(HEADER_FILES  ${HEADER_FILES} )
set(LIBRARIES ${LIBRARIES} )
set(SOURCE_FILES ${SOURCE_FILES} )

add_subdirectory(${ENGINE_PATH} KTEngine)
add_subdirectory(external)
add_subdirectory(src)

find_package(Freetype REQUIRED)



include_directories( ${HEADER_FILES} ${Boost_INCLUDE_DIRS})

set_source_files_properties("CMakeLists.txt" PROPERTIES HEADER_FILE_ONLY TRUE)

add_executable(KTEResourcePacker ${SOURCE_FILES} ${DATA_FILES})
target_link_libraries(KTEResourcePacker ${LIBRARIES} ${FREETYPE_LIBRARIES} sndfile)
