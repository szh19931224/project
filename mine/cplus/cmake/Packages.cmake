SET(PROJECT_ROOT_PATH "/home/yangkai04/project/mine/cplus")
SET(PROJECT_CMAKE_PATH "${PROJECT_ROOT_PATH}/cmake")
SET(PROJECT_THIRD_PATH "${PROJECT_ROOT_PATH}/third")

INCLUDE(${PROJECT_CMAKE_PATH}/Options.cmake)
INCLUDE(${PROJECT_CMAKE_PATH}/Boost.cmake)
INCLUDE(${PROJECT_CMAKE_PATH}/Glog.cmake)
INCLUDE(${PROJECT_CMAKE_PATH}/GFlags.cmake)
INCLUDE(${PROJECT_CMAKE_PATH}/Gtest.cmake)
INCLUDE(${PROJECT_CMAKE_PATH}/Jsoncpp.cmake)
INCLUDE(${PROJECT_CMAKE_PATH}/Pcl.cmake)
