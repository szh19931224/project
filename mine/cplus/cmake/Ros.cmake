SET(CUR_LIB_NAME "ros")
#SET(CUR_LIB_PATH "${PROJECT_THIRD_PATH}/${CUR_LIB_NAME}")
SET(CUR_LIB_PATH "/opt/ros/indigo/")
SET(CUR_LIB_INCLUDE_PATH "${CUR_LIB_PATH}/include")
SET(CUR_LIB_LIB_PATH "${CUR_LIB_PATH}/lib")
SET(CUR_LIB_LIBRARIES roscpp roscpp_serialization)
#SET(CMAKE_PREFIX_PATH ${CUR_LIB_PATH})

#FIND_PACKAGE(catkin REQUIRED)
#FIND_PACKAGE(catkin REQUIRED COMPONENTS
#    roscpp
#    rospy
#    std_msgs
#    message_generation
#)

#MESSAGE(HELLO ${catkin_INCLUDE_DIRS})
#MESSAGE(HELLO ${catkin_LIBRARY_DIRS})
#MESSAGE(HELLO ${catkin_LIBRARIES})
INCLUDE_DIRECTORIES(${CUR_LIB_INCLUDE_PATH})
LINK_DIRECTORIES(${CUR_LIB_LIB_PATH})
SET(PROJECT_THIRD_LIBS ${PROJECT_THIRD_LIBS} ${CUR_LIB_LIBRARIES})
#INCLUDE_DIRECTORIES(${catkin_INCLUDE_DIRS})
#LINK_DIRECTORIES(${catkin_LIBRARY_DIRS})
#SET(PROJECT_THIRD_LIBS ${PROJECT_THIRD_LIBS} ${catkin_LIBRARIES})
