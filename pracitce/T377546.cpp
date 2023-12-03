#include<iostream>
int main(){
    long long a,b,c;
    std::cin>>a>>b>>c;
    if(a+b == c) std::cout<<"plus";
    else if(a-b == c) std::cout<<"minus";
    else std::cout<<"illegal";
    return 0;
}