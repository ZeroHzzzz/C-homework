#include<iostream>

int main(){
    std::string a;
    std::cin>>a;
    for(int i=0;i<a.size();i++){
        int tmp = a[i] - '0';
        if(tmp %2 ==0) a[i] += 1;
        else a[i]--;
    }
    int ind = -1;
    for(int i=0;i<a.size();i++) if(a[i]!='0'){ind=i;break;}
    if(ind == -1) std::cout<<"0";
    else
        for(int i=ind;i<a.size();i++) std::cout<<a[i];
    return 0;
}