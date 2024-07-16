//Develop a program that finds the length of a string using a pointer.

#include <stdio.h>
#include<conio.h>


int stringLength(char *str) 
{
    char *ptr = str;  
    int length = 0;   

    
    while (*ptr != '\0') 
	{
        length++;     
        ptr++;        
    }

    return length;    
}

int main() 
{
    char str[100];    
    printf("Enter a string: ");
    scanf("%s", str); 

    int len = stringLength(str);  
    printf("Length of the string: %d\n", len);
}
