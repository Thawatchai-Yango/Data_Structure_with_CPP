/*
 *  sting operations.cpp
 *
 *  Created on: 
 *  Author: thawatchai yango SE COMP B
 *  Roll No:203074 BATCH E
 *  Assignment 4
 *  Problem Statement: Write C++ program for string operations-
 *  copy, concatenate, check substring, equal, reverse and length.
 */
#include<iostream>
#include<cstdio>
using namespace std;
int Length(char str[50])
{
    int count=0,i=0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}
void Palindrome(char str[50])
{
    int k=Length(str)-1;
    int i,p=0;
    while(str[i]!='\0')
    {
        if(str[i++]==str[k--]){
            p=1;
            break;
        }
    }
    if(p==1)
    {
        printf("Entered string is a Palindrome\n");
    }
    else{
        printf("Entered string is not a palindrome\n");
    }
}
void copy_string(char str[50])
{
    char ch[50];
    printf("Enter second string which you want to copy!!\n");
    scanf("%s",ch);
    int i=0;
    while(str[i]!='\0')
    {
        str[i]=ch[i];
        i++;
    }
    printf("copied string is : %s \n",str);
}
void Reverse(char str[50])
{
    int k=Length(str)-1;

    printf("\nReversal of string is : ");
     for(int i=k;i>=0;--i){
     cout<<str[i];
    }
  cout<<endl;
}
void string_comparison(char str[50])
{
    char ch[30];
    printf("Enter string which you want to compare!\n");
    scanf("%s",ch);
    int i = 0;
   while (str[i] == ch[i] && str[i] != '\0')
      i++;
   if (str[i] > ch[i])
      printf("String first is greater than second.\n");
   else if (str[i] < ch[i])
      printf("String second is greater than first.\n");
   else
      printf("str1 and str2 are equal.\n");
}
void sub_string(char str[50])
{
    char search[10];
    int count1 = 0, count2 = 0, i, j, flag;
    printf("Enter search substring:");
    cin>>search;
    count1=Length(str);
    count2=Length(search);
    for (i = 0; i <= count1 - count2; i++)
    {
        for (j = i; j < i + count2; j++)
        {
            flag = 1;
            if (str[j] != search[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("String Found!\n");
    else
        printf("String not Found");
}
int main()
{
    int ch;
    char str[50];
    printf("\n\n::::::::::: STRING OPERATIONS ::::::::::::\n");
    printf("\n\t Enter string \n");
    scanf("%s",str);
    do{
        cout<<"\n******MENU******\n";
        cout<<" 1.Length of string\n 2.Palindrome\n 3.Copy_String\n 4.Reverse string\n";
        printf(" 5.String Comparison\n 6.Substring\n");
        cout<<"Enter your choice\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Length of entered string is = "<<Length(str)<<" \n";
                break;
            case 2:
                Palindrome(str);
                break;
            case 3:
                copy_string(str);
                break;
            case 4:
                Reverse(str);
                break;
            case 5:
                string_comparison(str);
                break;
            case 6:
                sub_string(str);
                break;
        }

    }
    while(ch>=0&&ch<=6);
}
