#ifndef LISTELEMENT_HH
#define LISTELEMENT_HH

struct listElement {
private:
  string key;
  int value;

public:
  int getKey() {
    return key;
  };
  int getValue() {
    return value;
  };
};

#endif
