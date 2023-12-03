#include<iostream>
int A[210], B[210];
int ansA,ansB;
int chk[5][5] = {
    {0, -1, 1, 1, -1},
    {1, 0, -1, 1, -1},
    {-1, 1, 0, -1, 1},
    {-1, -1, 1, 0, 1},
    {1, 1, -1, -1, 0}
};
int main(){
    int n,na,nb;
    std::cin>>n>>na>>nb;
    for(int i=1;i<=na;i++) std::cin>>A[i];
    for(int i=1;i<=nb;i++) std::cin>>B[i];
    for(int i=1;i<=n;i++){
        int tA,tB;
        if(i<=na) tA = A[i];
        else if(i%na == 0) tA = A[na];
        else tA = A[i%na];
        // std::cout<<tA<<std::endl;
        if(i<=nb) tB = B[i];
        else if(i%nb == 0) tB = B[nb];
        else tB = B[i%nb];

        // std::cout<<tA<<" "<<tB<<std::endl;
        // std::cout<<chk[tA][tB]<<std::endl;
        if(chk[tA][tB] == -1) ansB += 1;
        else if(chk[tA][tB] == 1) ansA +=1;
    }
    std::cout<<ansA<<" "<<ansB;
    return 0;
}