    #include<iostream>
    #include<deque>
    using namespace std;
    deque<int> mp;
    int main(){
        int n,m;
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            int tmp;
            cin>>tmp;
            mp.push_back(tmp);
        }
        bool flag = true;
        while(!mp.empty()&&flag == true){
            flag = false;
            int l = mp.front();
            if(l <= m) {mp.pop_front();flag = true;}
            if(!mp.empty()){
                int r = mp.back();
                if(r <= m) {mp.pop_back();flag = true;}
            }
            
        }
        cout<<n - mp.size();
        return 0;
    }