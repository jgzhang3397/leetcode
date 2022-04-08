#include<stdio.h>
#include<stdlib.h>

char output[15] = {0};
char * intToRoman(int num){
    int i = 0;
    while(num>=0)
    {
        if(num>=1000)
        {
            num -= 1000;
            output[i]= 'M';
            i++;
        }
        else if(num>=900 && num <1000)
        {
            num -= 900;
            output[i]= 'C';
            output[i+1]= 'M';
            i += 2;
        }
        else if(num>=500 && num <900)
        {
            num -= 500;
            output[i]='D';
            i++;
        }
        else if(num>=400 && num <500)
        {
            num -= 400;
            output[i]='C';
            output[i+1]='D';
            i+=2;
        }
        else if(num>=100 && num<400)
        {
            num -= 100;
            output[i] = 'C';
            i++;
        }
        else if(num>=90 && num<100)
        {
            num -= 90;
            output[i]='X';
            output[i+1]='C';
            i+=2;
        }
        else if(num>=50 && num<90)
        {
            num -= 50;
            output[i]='L';
            i++;
        }
        else if(num>=40 && num<50)
        {
            num -= 40;
            output[i]='X';
            output[i+1]='L';
            i+=2;
        }
        else if(num>=10 && num<40)
        {
            num -= 10;
            output[i]='X';
            i++;
        }
        else if(num>=9 && num<10)
        {
            num -= 9;
            output[i]='I';
            output[i+1]='X';
            i+=2;
        }
        else if(num>=5 && num<9)
        {
            num -=5;
            output[i] = 'V';
            i++;
        }
        else if(num>=4 && num<5)
        {
            num -=4;
            output[i] = 'I';
            output[i+1] = 'V';
            i+=2;
        }
        else if(num>=1 && num<4)
        {
            num --;
            output[i] = 'I';
            i++;
        }
        else
        {
            output[i] = '\0';
            break;
        }
    } 
    return output;
}

int main()
{
    int num = 0;
    scanf("%d", &num);
    char * ps = NULL;
    ps = intToRoman(num);
    printf("%s\n", ps);
    return 0;
}