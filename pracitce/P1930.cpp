#include<iostream>
int mp[1100][2];
int main(){
    int row, col;
    std::cin>>row>>col;
    char tmpa;int tmpb;
    int ind = 0;
    while(std::cin>>tmpa>>tmpb){
        mp[++ind][0] = tmpa - 'A' + 1;
        mp[ind][1] = tmpb;
    }
    for(int i=1;i<=ind;i++) std::cout<<mp[i][0]<<" "<<mp[i][1]<<std::endl;
    return 0;
}