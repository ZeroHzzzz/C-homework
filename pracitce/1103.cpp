#include<iostream>
int num[300],cf[300];
int ans[300];
int main(){
    std::string a;
    int k;
    std::cin>>a;
    std::cin>>k;
    for(int i=0;i<a.size();i++){
        num[i] = a[i] - '0';
    }
    for(int i=0;i<a.size();i++) cf[i] = num[i+1] - num[i];
    // int cnt = 0, ind = 0;
    // for(int i=0;i<a.size();i++){
    //     if(cf[i] < 0 && cnt<k){
    //         cnt ++;
    //     }
    //     else ans[ind++] = num[i];
    // }
    // for(int i=0;i<ind;i++) std::cout<<ans[i];
    for(int i=0;i<k;i++){
        for(int ind=0;ind<a.size();ind++){
            if(cf[ind] < 0 && num[ind] != -1){
                if(ind == 0){num[ind] = -1;break;}
                else{
                    cf[ind-1] = num[ind+1] - num[ind-1];
                    num[ind] = -1;
                    break;
                } 
            }
        }
    }
    int ind = 0;
    for(int i=0;i<a.size();i++){if(num[i]!=-1 &&num[i]!=0){ind=i;break;}}
    for(int i=ind;i<a.size();i++) if(num[i] != -1) std::cout<<num[i];
    return 0;
}