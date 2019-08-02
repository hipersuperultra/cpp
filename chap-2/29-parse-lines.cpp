#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using std::cout;
using std::ifstream;
using std::string;
using std::vector;

// TODO: Add the ParseLine function here.
vector<int> ParseLine(string line)
{
  vector<int> ret;
  char c;
  int n;
  
  std::istringstream stream(line);
  
  while(stream >> n >> c) {
    ret.push_back(n);
  }
  
  return ret;
}

void ReadBoardFile(string path) {
  ifstream myfile (path);
  if (myfile) {
    string line;
    while (getline(myfile, line)) {
      cout << line << "\n";
    }
  }
}

void PrintBoard(const vector<vector<int> > board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

#include "test.cpp" // For testing.

int main() {
  ReadBoardFile("1.board");
  TestParseLine(); // For testing.
  // Leave commented out.
  // PrintBoard(board);
}
