#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main (){

 int number ;
 cin>>number;

 int reversenumber=0;
 int temp=number;

 while(number>0){

    int ld=number%10;

    reversenumber= (reversenumber * 10) + ld;

    number=number/10;
 }

if(temp==reversenumber){
    cout<<"is palindrome"<<endl;

}else {
    cout<<"not a palindrome";
}



return 0;

}


