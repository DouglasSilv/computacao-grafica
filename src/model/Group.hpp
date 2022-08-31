#include <string>

using namespace std;

class Group {
 public:
  string name;
  string material;
  Group(string name, string material) {
	this->material = material;
    this->name = name;
  }
  Group() {}
};