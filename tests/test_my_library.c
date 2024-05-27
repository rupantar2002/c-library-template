#include <stdio.h>
#include <my_library.h>

int main(int argc, char const *argv[])
{
    printf("The sum of 12 and 13 is : %d \r\n",my_library_add(12,13));
    printf("The difference of 12 and 13 is : %d \r\n",my_library_subtract(12,13));
    return 0;
}
