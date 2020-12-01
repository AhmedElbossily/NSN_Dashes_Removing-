#ifndef SYSTEM_PARSER_H
#define SYSTEM_PARSER_H

#include <fstream>
#include <regex>


namespace LinuxParser {
// Paths
const std::string nsnDirectory{"./nsn"};
const std::string nsnDirectoryOutput{"./nsn_output"};


// System
void OperatingSystem();


};  // namespace LinuxParser

#endif