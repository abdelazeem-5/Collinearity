#include <iostream>
using namespace std;
int main()

{
    
  double x1, y1, x2, y2;
    cout << "Enter the coordinates of the first vector (x1 y1)\n";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second vector (x2 y2)\n";
    cin >> x2 >> y2;

    if ((x1 * y2 - x2 * y1) == 0)
    {
      cout << "The vectors are collinear.\n";
    }
    else
    {
      cout << "The vectors are not collinear.\n";
    }
    return 0;
}