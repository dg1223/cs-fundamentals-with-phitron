// returns the number of digits in a number
#include <stdio.h>
int count(int n)
{
   if (n == 0)
   {
      return 0;
   }
   else
   {
      return 1 + count(n / 10);
   }
}

int main()
{

    int result = count(1000);
    printf("%d\n", result);

}