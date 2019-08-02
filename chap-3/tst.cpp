#include <vector>
#include <iostream>

using std::vector;
using std::cout;

void pv(vector<vector<int>> &v)
{
  for(vector<int> a : v) {
    for(int b : a) {
      cout << b << " ";
    }
    cout << std::endl;
  }
}

int main()
{
  vector<vector<int>> a{{1,2,3}, {4,5,6}, {7,8,9}};
  pv(a);

  cout << a[1][2] << std::endl;
  cout << a[1][7] << std::endl;
  try {
    cout << a.at(1).at(700) << std::endl;
  }
  catch(std::out_of_range &err) {
    cout << "out of the range, mofo..." << std::endl;
  }
  return 0;
}
