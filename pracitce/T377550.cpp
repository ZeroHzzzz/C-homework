#include<iostream>
long long max(long long a, long long b){
    return a>b?a:b;
}
int main(){
    int a,b,c,d;
    std::cin>>a>>b>>c>>d;
    if(a == 0||b == 0){
        if(c == 0 || d == 0){
            if(max(a, b) >= max(c, d)) std::cout<<"Program ends with return value 0.";
            else std::cout<<"Segmentation fault.";
       }
        else{
            if(max(a, b) >= c * d) std::cout<<"Program ends with return value 0.";
            else std::cout<<"Segmentation fault.";
       }
    }
    else{
        if(c == 0 || d == 0){
            if(max(c, d) <= a * b) std::cout<<"Program ends with return value 0.";
            else std::cout<<"Segmentation fault.";
        }
        else{
            if(a * b >= c * d) std::cout<<"Program ends with return value 0.";
            else std::cout<<"Segmentation fault.";
        }
    }
    return 0;
}