#include "test.h"

#include <iostream>  

#include <glog/logging.h>

#ifndef UNIT_TEST
int main(int argc, char *argv[]) {
#else
int inner_main(int argc, char *argv[]) {
#endif
    google::InitGoogleLogging((const char *)argv[0]);  //参数为自己的可执行文件名  
    google::SetLogDestination(google::GLOG_INFO,"./log.log"); 
    LOG(INFO) << "This is a <Warn> log message..." << std::endl;  
    return 0;
}  
