#include<bits/stdc++.h> 
using namespace std;
bool isHWC(string b)
{
	if(b.length()<=1)
		return true;
	else if(b[0]!=b[b.length()-1])
		return false;
	else
		return isHWC(b.substr(1, b.length()-2));
}
int main(){
	string a;
	cin>>a;
	if(isHWC(a)==true)
		cout<<"HWC";
	else
		cout<<"not HWC";	
}