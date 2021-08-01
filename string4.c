#include<stdio.h>  
#include <string.h>    
struct student
{        
    char name[10];
    char birthplace[10];
}; 

int main()
{    
    int i;    
    struct student s1[4];    
    static int count=0;
   
    strcpy(s1[0].name,"Vaibhav");
    strcpy(s1[0].birthplace,"Shirdi");
    strcpy(s1[1].name,"Sunny");
    strcpy(s1[1].birthplace,"Shirdi");
    
    printf("\n Name:%s, Birthplace:%s",s1[0].name,s1[0].birthplace);    
    printf("\n Name:%s, Birthplace:%s",s1[1].name,s1[1].birthplace);    

    
        if(s1[0].birthplace==s1[1].birthplace)
        {
            count=count+1;
        }
        
    
       printf("\n%d",count);


    return 0;    
}    
   