#include <vector>
#include <GLM/vec3.hpp>
#include <GLM/vec2.hpp>
#include "Group.hpp"

using namespace std;

class Mesh {
 public:
  vector<Group*> groups;
  vector<glm::vec3*> vertex;
  vector<glm::vec3*> normals;
  vector<glm::vec2*> mappings;
  Mesh() {}
};