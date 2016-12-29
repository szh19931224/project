SET(CUR_LIB_NAME "jsoncpp")
SET(CUR_LIB_PATH "${PROJECT_THIRD_PATH}/${CUR_LIB_NAME}")
#SET(CMAKE_PREFIX_PATH ${CUR_LIB_PATH})
SET(CUR_LIB_INCLUDE_PATH "${CUR_LIB_PATH}/include")
SET(CUR_LIB_LIB_PATH "${CUR_LIB_PATH}/lib/x86_64-linux-gnu")
SET(CUR_LIB_LIBRARIES jsoncpp)

#FIND_PACKAGE(Jsoncpp REQUIRED)

INCLUDE_DIRECTORIES(${CUR_LIB_INCLUDE_PATH})
LINK_DIRECTORIES(${CUR_LIB_LIB_PATH})
SET(PROJECT_THIRD_LIBS ${PROJECT_THIRD_LIBS} ${CUR_LIB_LIBRARIES})