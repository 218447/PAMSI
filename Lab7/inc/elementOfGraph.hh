#ifndef ELEMENTOFGRAPH_HH
#define ELEMENTOFGRAPH_HH

struct elementOfGraph {
 private:
  int value;
  bool visited = false;
 public:
  void setValue (int newValue) {
  value = newValue;
};
  int getValue () {
    return value;
  };
  void setVisited () {
    visited = true;
  };
  void setUnvisited () {
    visited = false;
  };
  bool getVisited () {
    return visited;
  };
};

#endif
