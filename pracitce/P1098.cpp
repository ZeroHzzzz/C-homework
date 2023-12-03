#include<iostream>
int pa,pb,pc;
std::string ord;
bool chk(char a, char b){
    if(((a>='a'&& a<='z')&&(b>='a'&& b<='z'))||((a>='0'&& a<='9')&&(b>='0'&& b<='9'))) return true;
    else return false;
}
int main(){
    std::cin>>pa>>pb>>pc;
    std::cin>>ord;
    for(int i=0;i<sizeof(ord);i++){
        if(ord[i] == '-'){
            if(chk(ord[i-1], ord[i+1]) && ord[i+1] > ord[i-1]){
                if(ord[i+1] == ord[i-1] + 1) continue;//后继
                if(pc == 1){//正序
                    for(char j=ord[i-1]+1;j<ord[i+1];j++){
                        for(int k = 1;k<=pb;k++){
                            if(pa == 1) std::cout<<j;
                            else if(pa == 2 && (ord[i-1]>='a'&& ord[i-1]<='z')) std::cout<<char(j - 32);
                            else if(pa == 3) std::cout<<"*";
                        }
                    }
                }
                // char a = 'a'
                else if(pc == 2){
                    for(char j=ord[i+1]-1;j>ord[i-1];j--){
                        for(int k = 1;k<=pb;k++){
                            if(pa == 1) std::cout<<j;
                            else if(pa == 2 && (ord[i-1]>='a'&& ord[i-1]<='z')) std::cout<<char(j - 32);

                            
                            else if(pa == 3) std::cout<<"*";
                        }
                    }
                }
            }
            else std::cout<<ord[i];
        }
        else std::cout<<ord[i];
    }
    return 0;
}