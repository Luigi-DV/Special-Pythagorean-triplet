#include <iostream>

int main() {
   const int sum = 1000;
    int x;
    for (x = 1; x <= sum/3; x++)
    {
        int y;
        for (y = x + 1; y <= sum/2; y++)
        {
            int z = sum - x - y;
            if ( x*x + y*y == z*z )
               printf("x=%d, y=%d, z=%d\n",x,y,z);
        }
    }
    return 0;
}
