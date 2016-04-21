#ifndef LISTELEMENT_HH
#define LISTELEMENT_HH

#include <string>

struct listElement {
private:
  std::string key;
  int value;

public:
  std::string getKey() {
    return key;
  };
  int getValue() {
    return value;
  };
};

#endif
