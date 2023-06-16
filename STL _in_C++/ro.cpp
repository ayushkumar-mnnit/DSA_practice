
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

string s="00 00P dfe";

string temp="";

cout<<"\n";



for(int i=0;i<s.length();i++)
{
    if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
    {
        temp=temp+s[i];
    }
}

// transform(temp.begin(), temp.end(), temp.begin(), ::toupper); // upper case

transform(temp.begin(), temp.end(), temp.begin(), ::tolower); // lower case



cout<<temp;





return 0;
}

