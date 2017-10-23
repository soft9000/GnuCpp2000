#ifndef TimeStruct_hpp0
#define TimeStruct_hpp0

#include <string>
#include <sstream>
#include <ctime>    // Time support
#include <cstring>  // memcpy

// "Header implementation" (no .cpp required)
class TimeStruct {
 private:
  struct tm zData;

 public:
  // Only 1 way to create this class!
  TimeStruct(const struct tm& info) {
    ::memcpy(&zData, &info, sizeof(struct tm));
  }

  int julianDay(void) const { return zData.tm_yday + 1; }

  int year(void) const { return (zData.tm_year + 1900); }

  int hour(void) const { return zData.tm_hour; }

  int minute(void) const { return zData.tm_min; }

  int second(void) const { return zData.tm_sec; }
};

// "Helper Function"
string LocalTime(const TimeStruct& zStruct) {
  stringstream srm;
  srm << zStruct.year() << ".";
  srm << zStruct.julianDay() << " [";
  srm << zStruct.hour() << ":";
  srm << zStruct.minute() << ":";
  srm << zStruct.second() << "]";
  return srm.str();
}

#endif
