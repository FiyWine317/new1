#include<bits/stdc++.h>
using namespace std;

//max/min/nth_element()
    // int main() {
    //     int n;cin>>n;
    //     vector<int>v(n);
    //     for (int i=0;i<n;i++) cin>>v[i];
    //     int max=*max_element(v.begin(),v.end());
    //     int min=*min_element(v.begin(),v.end());
    //     double sum=0;
    //     for (int i=0;i<n;i++) {
    //         sum+=v[i];
    //     }
    //     cout<<sum/n<<endl;
    //     cout<<min<<endl;
    //     cout<<max<<endl;
    //     return 0;
    // }

//银行排队!!!queue
    // int main() {
    //     ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    //     int m;cin>>m;
    //     queue<string>v;
    //     queue<string>nal;
    //     while (m--) {
    //         string s1;cin>>s1;
    //         if (s1=="IN") {
    //             string s2,s3;
    //             cin>>s2>>s3;
    //             if (s3=="V")v.push(s2);
    //             nal.push(s2);
    //         }
    //         else {
    //             string s2;cin>>s2;
    //             if (s2=="V")v.pop();
    //             nal.pop();
    //         }
    //     }
    //     while (!v.empty()) {
    //         cout<<v.front()<<"\n";
    //         v.pop();//先输出队首的内容
    // //再删掉队首，让下一个人变成队首
    //     }
    //     while (!nal.empty()) {
    //         cout<<nal.front()<<"\n";
    //         nal.pop();
    //
    //     }
    //
    //     return 0;
    //
    //
//}

//优先队列
    // int main() {
    //     ios::sync_whit_stdio(0),cin.tie(0),cout.tie(0);
    //     int n;cin>>n;
    //     // vector<int>v(n);
    //     // for(int i=0;i<n;i++){cin>>v[i];}
    //     // sort(v.begin(),v.end());
    //
    //     int sum=0;
    //
    // }



//回溯
    // int n=2;
    // vector<int>v;
    // void dfs() {
    //     if (v.size()==n)
    //     {
    //         for (int i=0;i<n;i++)cout<<v[i]<<" ";
    //          cout<<endl;  return;
    //     }
    //
    //
    //         v.push_back(0);
    //         dfs();
    //         v.pop_back();
    //
    //         v.push_back(1);
    //         dfs();
    //         v.pop_back();
    //
    //
    // }
    // int main() {
    //     dfs();
    //     return 0;
    // }

        // int n = 2;
        // vector<int> v;
        //
        // void dfs(int depth) {
        //     cout << "depth: " << depth << "  vec: ";
        //     for (int i = 0; i < v.size(); ++i)
        //         cout << v[i] << " ";
        //     cout << endl;
        //
        //     if (v.size() == n) {
        //         cout << "found: ";
        //         for (int i = 0; i < n; ++i)
        //             cout << v[i] << " ";
        //         cout << "\n" << endl;
        //         return;
        //     }
        //
        //     cout << "depth " << depth << " add 0\n";
        //     v.push_back(0);
        //     dfs(depth + 1);
        //     cout << "depth " << depth << " del 0\n";
        //     v.pop_back();
        //
        //     cout << "depth " << depth << " add 1\n";
        //     v.push_back(1);
        //     dfs(depth + 1);
        //     cout << "depth " << depth << " del 1\n";
        //     v.pop_back();
        // }
        //
        // int main() {
        //     dfs(1);
        //     return 0;
        // }

//全排列
    int n;
    vector<int>v;
    vector<bool> used;
    void dfs()
    {
        ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        //结束条件
        if (v.size()==n) {
            for (int i=0;i<n;i++){cout<<setw(5)<<v[i];}
            cout<<endl;
            return;
        }
        //dsf
        for (int i=1;i<=n;i++) {
            if (!used[i]) {
                //标记数字使用
                used[i]=true;
                v.push_back(i);
                dfs();
                v.pop_back();//回溯
                used[i]=false;
            }
    }
        }
    int main() {
        ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        cin>>n;
        used.resize(n+1,false);
        dfs();

    return 0;
    }

//P1443 马的遍历
    // int n,m,sx,sy,fx,fy;
    // int dx[8]={2,1,-1,-2,0,-1,1,2};
    // int dy[8]={1,2,0,1,-1,-2,0,-1};
    // int map[400][400];
    // int u[400][400];
    // int step=1;
    // int peth[][1][k];
    // int ans=0;
    //
    //
    // void dfs(int x,int y) {
    //     if (x==fx&&y==fy) {
    //         cout<<ans;
    //         return ;
    //     }
    //     u[x][y]=true;
    //     for (int i=0;i<8;i++) {
    //         int nx=x+dx[i];
    //         int ny=y+dy[i];
    //         if (nx>=1&&ny>=1&&nx<=n&&ny<=m&&!u[nx][ny])
    //             dfs(nx,ny);
    //     }
    //     u[x][y]=false;
    // }
    // int main() {
    //     ios::sync_whit_stdio(0),cin.tie(0),cout.tie(0);
    //     cin>>n>>m>>sx>>sy;
    //
    // }



//P1605 迷宫
    // int sx,sy,fx,fy,n,m,t;
    // int ans=0;
    // int p[10][10];
    // bool u[10][10];
    // int dx[4]={0,1,0,-1};
    // int dy[4]={1,0,-1,0};
    //
    // void dfs(int x,int y) {
    //     if (x==fx && y==fy) {ans++;return;}
    //     u[x][y]=true;
    //     for (int i=0;i<4;i++) {
    //         int nx=x+dx[i];
    //         int ny=y+dy[i];
    //         if (nx>=1&&ny>=1&&nx<=n&&ny<=m&&p[nx][ny]==0&&!u[nx][ny]) {
    //             dfs(nx,ny);
    //         }
    //
    //     }u[x][y]=false;
    // }
    //
    // int main() {
    //     ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
    //     cin>>n>>m>>t>>sx>>sy>>fx>>fy;
    //     for (int i=1;i<=n;i++) {
    //         for (int j=1;j<=m;j++)
    //             p[i][j]=0;
    //     }
    //     for (int i=0;i<t;i++) {
    //         int x,y;
    //         cin>>x>>y;
    //         p[x][y]=1;
    //     }
    //     dfs(sx,sy);
    //     cout<<ans;
    //     return 0;
    //
    // }

