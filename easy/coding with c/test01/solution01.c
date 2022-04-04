#include<stdio.h>
int romanToInt(char * s)
{
    int sum = 0;
    int i=0;
    while (s[i])
    {
        switch(s[i])
        {
            case 'I':
                if(s[i+1]=='V')
                {
                    sum += 4;
                    i++;
                }
                else if(s[i+1]=='X')
                {
                    sum += 9;
                    i++;
                }
                else 
                    sum ++;
                break;
            case 'V':
                sum += 5;
                break;
            case 'X':
                if(s[i+1]=='L')
                {
                    sum += 40;
                    i++;
                }
                else if(s[i+1]=='C')
                {
                    sum += 90;
                    i++;
                }
                else
                    sum += 10;
                break;
            case 'L':
                sum += 50;
                break;
            case 'C':
                if(s[i+1]=='D')
                {
                    sum +=400;
                    i++;
                }
                else if(s[i+1]=='M')
                {
                    sum +=900;
                    i++;
                }
                else
                    sum +=100;
                break;
            case 'D':
                sum += 500;
                break;
            case 'M':
                sum += 1000;
                break;
            default:
                break;
        }
        i++;
    }
    return sum;  
}

int main()
{
    char str[15] = {0};
    int result = 0;
    scanf("%s", str);
    result = romanToInt(str);
    printf("%d\n", result);
    return 0;
}