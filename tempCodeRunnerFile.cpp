#include <iostream>
using namespace std;
struct Point {
int x;
int y;
};
int main() {
Point p1, p2, p3;
cout << "Enter x and y coordinates for point 1: ";
cin >> p1.x >> p1.y;
cout << "Enter x and y coordinates for point 2: ";
cin >> p2.x >> p2.y;
p3.x = p1.x + p2.x;
p3.y = p1.y + p2.y;
cout << "Sum of the two points is: (" << p3.x << "," << p3.y << ")" << endl;
return 0;
}