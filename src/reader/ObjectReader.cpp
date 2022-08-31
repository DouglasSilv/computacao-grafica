#include <string>
#include <iostream>
#include <sstream>
#include "model/Mesh.hpp"
#include "model/Group.hpp"
#include <fstream>

using namespace std;

static void readObject(const string filename) {
  Mesh* mesh = new Mesh;
  Group* g_atual = new Group;

  ifstream arq(filename);

  while (!arq.eof()) {
    string line;
    getline(arq, line);
    stringstream sline;
    sline << line;
    string temp;
    sline >> temp;
    switch (temp) {
      case x:
        // code block
        break;
      case y:
        // code block
        break;
      default:
        // code block
    }
 
  }
 }