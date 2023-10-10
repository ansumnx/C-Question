#include<stdio.h>
#include<string.h>
int main(){ 
        char str[50]; // size of char string  
        printf (" Enter the string: ");  
        gets(str); // use gets() function to take string  
          
        printf (" \n Before reversing the string: %s \n", str);  
          
        // call revstr() function 
        strrev(str);  
        printf (" After reversing the string: %s",str);  
        return 0;
    }  
 