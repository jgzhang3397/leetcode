#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// arrays of stings for the numerals
const char *thousands[4] = {"", "M", "MM", "MMM"};//0, 1000, 2000, 3000
const char *hundreds[10] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};//...
const char *tens[10] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
const char *ones[10] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

char * intToRoman(int num)
{
    char *roman = malloc(16);
    int index1000, index100, index10, index1;

    //calculate indices for the numeral arrays
    index1000 = num / 1000;
    index100 = (num % 1000) / 100;
    index10 = (num % 100) / 10;
    index1 = (num % 10);

    // concatenate the numeral strings
    strcpy(roman, thousands[index1000]);
    strcat(roman, hundreds[index100]);
    strcat(roman, tens[index10]);
    strcat(roman, ones[index1]);
    
    return roman;
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