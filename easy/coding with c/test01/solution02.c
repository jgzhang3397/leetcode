#include<stdio.h>
int convert(char c)
{
    switch (c)
    {
        case 'I':
            return 1;
            break;
        case 'V':
            return 5;
            break;
        case 'X':
            return 10;
            break;
        case 'L':
            return 50;
            break;
        case 'C':
            return 100;
            break;
        case 'D':
            return 500;
            break;
        case 'M':
            return 1000;
            break;
        default:
            break;
    }
    return 0;
}

int romanToInt(char * s)
{
    int i = 0;
    int final = 0;
    int val = 1000;
    int prev = 0;
    while (*(s+i)> 'A' && *(s+i)< 'Z')
    {
        prev = val;//input == IV 预测值1 || prev = 1
        val = convert(*(s+i));//1 || 5

        if((val - prev) > 0 && (val - prev) < 10)
        {
            val -= prev;//val = 5-1=4
            final -= prev;//final = 0
        }
        final += val;//val == 1 || final = 4
        i++;
    }
    return final;  
}
int main()
{
    char str[15] = {0};
    int result = 0;
    scanf("%s", str);
    result = romanToInt(str);
    printf("%d\n", result);
}