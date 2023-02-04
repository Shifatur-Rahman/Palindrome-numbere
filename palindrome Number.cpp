#include <iostream>
using namespace std;
int main(){

int num=1221;
int rem, temp=0, res;
res=num;

while(num!=0){
	rem = num%10;
	num = num/10;
	temp = 10*temp+rem;
}

if(res==temp)
	cout<<"Palindrome"<<endl;
else
    cout<<"Not Palindrome"<<endl;

}
