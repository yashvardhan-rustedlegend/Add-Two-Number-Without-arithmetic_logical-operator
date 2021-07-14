#include <iostream>
using namespace std;
  
int add(int x, int y)
{
    return printf("%*c%*c",x,' ',y,' ');
}
int main()
{
    printf("Sum = %d", add(9, 4));
    return 0;
}
