/**
* @file dlog_util.h
* @author Chong Niu <niuchong893184@gmail.com>
*/

#ifndef DLOG_UTIL_H
#define DLOG_UTIL_H

#include <string>

extern char* __progname;

namespace dlog {
    
void get_curr_proc_info(std::string* pid, std::string* proc_name);

}

#endif
