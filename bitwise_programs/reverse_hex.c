// WAP reverse the given hexa value
//i/p=0x14B5
//o/p=0x5B41

#include <stdio.h>
unsigned int reverse(unsigned int hexnum)
{
    unsigned int reversenum = 0;
    while(hexnum != 0)
    {
        reversenum <<=4;
        reversenum|= (hexnum & 0xF);
        hexnum>>= 4;
    }
    return reversenum;
}
int main() {
    unsigned int inputval = 0x14B5;
    printf("output 0x%x\n",inputval);
    unsigned int output = reverse(inputval);
    printf("output 0x%x\n",output);

    return 0;
}
