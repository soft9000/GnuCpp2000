#include "act_EzLog.hpp"
#include "TimeStruct.hpp"
#include <iostream>
#include <sstream>
#include <sys/stat.h>  // stat()
#include <fstream>

using namespace std;

EzLog::EzLog(string file) {
  this->sFQName.assign(file);
}

bool EzLog::exists() {
  struct stat info;
  if (::stat(sFQName.c_str(), &info) != 0)
    return false;
  return true;
}

int EzLog::count() {
  int tally = 0;
  fstream fs;
  fs.open(sFQName.c_str(), ios::in);
  string str;
  while (getline(fs, str)) {
    tally++;
  }
  fs.close();
  return tally;
}

bool EzLog::append(string message) {
  fstream fs;
  if (exists()) {
    fs.open(sFQName.c_str(), ios::out | ios::app);
  } else {
    fs.open(sFQName.c_str(), ios::out);
  }
  time_t ztime = ::time(NULL);  // "Epoch Time"
  struct tm* zData = localtime(&ztime);
  // Auto Conversion to "TimeStruct":
  fs << LocalTime(*zData) << "\t" << message << endl;
  fs.flush();  // to disk
  fs.close();  // release
  return exists();
}

void usage() {
  cout << "Usage: EzLog.run \"message\"" << endl;
}

int main(int argc, char** argv) {
  if (argc < 2) {
    usage();
    return 0;
  }
  EzLog writer("./EzLog.log");
  if (writer.append(argv[1]) == false) {
    cerr << "Error: Unable to write \"" << argv[0] << "\"" << ends;
  } else {
    cout << "Success: There are " << writer.count() << " log entries." << endl;
  }
  return 0;
}
