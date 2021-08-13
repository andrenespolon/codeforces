/*
One hot summer day Pete and his friend Billy decided to buy a watermelon. They 
chose the biggest and the ripest one, in their opinion. After that the 
watermelon was weighed, and the scales showed w kilos. They rushed home, dying 
of thirst, and decided to divide the berry, however they faced a hard problem.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int w;
  cin >> w;
  if (w % 2 == 0 && w != 2)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
}