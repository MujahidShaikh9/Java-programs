#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    
}
 

int main()
{
    int x = 1, y = 2;
    swap(x, y);
    cout << "After Swap x: " << x << ", y: " << y << endl;
    return 0;
}