#include "linux_parser.h"

#include <dirent.h>

#include <iterator>
#include <string>

#include "iostream"

using std::string;
using namespace std;
// DONE: An example of how to read data from the filesystem
void LinuxParser::OperatingSystem() {
  string line;
  string key;
  std::ifstream infilestream(nsnDirectory);
  std::ofstream outfilestream("nsn_output.txt", ios::out | ios::trunc);
  if (infilestream.is_open()) {
    std::cout << "input File opened \n";
    if (outfilestream.is_open()) {
      std::cout << "output File opened \n";
      while (std::getline(infilestream, line)) {
        if (line.length() == 16 && line[4] == '-') {
          line.erase(line.begin(), line.begin() + 5);
        }
        if (line.length() == 11 && line[2] == '-' && line[6] == '-') {
          line.erase(line.begin() + 2);
          line.erase(line.begin() + 5);
        }
        outfilestream << line<< std::endl;
      }
      outfilestream.close();
    } else {
      std::cout << "can't open output file \n";
    }
    infilestream.close();

  } else {
    std::cout << "can't open input file \n";
  }
}
