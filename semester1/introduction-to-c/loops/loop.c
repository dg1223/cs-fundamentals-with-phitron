#include <stdio.h>
int main()
{
    float i;
while (1) {
    printf("%0.3f ", i);
    i += 0.001;
}
    return 0;
}