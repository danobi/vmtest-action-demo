#include <sys/utsname.h>
#include <iostream>

#include "json/json.h"

int main() {
  struct utsname data;
  if (uname(&data))
    return 1;

  Json::Value root;
  root["release"] = data.release;
  std::cout << root << std::endl;
}
