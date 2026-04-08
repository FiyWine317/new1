#include<bits/stdc++.h>
using namespace std;

//全排列
    // int n;
    // vector<int>v;
    // vector<bool> u;
    // void dfs() {
    //     ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    //     //判断结束条件
    //     if (v.size()==n) {
    //         for (int i=0;i<n;i++) {
    //             cout<<setw(5)<<v[i];
    //         }
    //         cout<<endl;
    //         return;
    //     }
    //     //dfs
    //     for (int i=1;i<=n;i++) {
    //
    //         if(!u[i]) {
    //             u[i]=true;//标记已经使用
    //              v.push_back(i);
    //         dfs();
    //         v.pop_back();
    // u[i]=false;
    //         }
    //     }
    //
    // }
    // int main() {
    //     ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    //     cin>>n;
    //     u.resize(n+1,false);
    //     dfs();
    //     return 0;
    // }

//P1443 马的遍历
    // int a[410][410];
    // int p[16010][4];
    // int n,m,sx,sy;
    // int head,tail;
    // int dx[8] = {2, 2, -2, -2, 1, 1, -1, -1};
    // int dy[8] = {1, -1, 1, -1, 2, -2, 2, -2};
    // int k=1;
    //
    //
    // int main() {
    //     ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    //     cin>>n>>m>>sx>>sy;
    //     head=1;
    //     tail=1;
    //     p[1][1]=sx;
    //     p[1][2]=sy;
    //     p[1][3]=0;
    //
    //     //初始化地图，未访问
    //     for (int i=1;i<=n;i++)
    //         for (int j=1;j<=m;j++)
    //             a[i][j]=-1;
    //     // 起点步数
    //     a[sx][sy]=0;
    //     while (head<=tail) {
    //         for (int i=0;i<8;i++) {
    //             int nx=p[head][1]+dx[i];
    //             int ny=p[head][2]+dy[i];
    //             // 取出步数
    //             int step=p[head][3];
    //             if (nx>=1&&ny>=1&&nx<=n&&ny<=m&&a[nx][ny]==-1) {
    //                 tail++;
    //                 //存储坐标在p数组里
    //                 p[tail][1]=nx;
    //                 p[tail][2]=ny;
    //                 p[tail][3]=step+1;;
    //                 a[nx][ny]=step+1;
    //             }
    //
    //         }
    //         head++;
    //     }
    //     //输出结果
    //     for (int i=1;i<=n;i++) {
    //         for (int j=1;j<=m;j++) {
    //             cout<<a[i][j]<<" ";
    //         }
    //         cout<<endl;
    //     }
    //     return 0;
    // }



// P1605 迷宫
    // int n,m,t;
    // int sx,sy,fx,fy;
    // int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
    // int a[10][10];
    // bool u[30][30];
    // int ans=0;
    // void dfs(int x,int y) {
    //     if (x==fx && y==fy) {
    //         ans++; return;
    //     }
    //    //标记使用
    //     u[x][y]=true;
    //     for (int i=0;i<4;i++) {
    //         int nx=x+dx[i];
    //         int ny=y+dy[i];
    //         //判断越界，障碍
    //         if (nx>=1&&ny>=1&&nx<=n&&ny<=m&&u[nx][ny]==false&&a[nx][ny]==0) {
    //             dfs(nx,ny);
    //         }
    //
    //     }
    //     //for循环后重置状态
    //     u[x][y]=false;
    //
    // }
    // int main() {
    //     ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    //     cin>>n>>m>>t>>sx>>sy>>fx>>fy;
    //     //初始化地图
    //     for (int i=1;i<=n;i++) {
    //         for (int j=1;j<=m;j++) {
    //             a[i][j]=0;
    //         }
    //     }
    //     //布置障碍
    //     for (int i=0;i<t;i++) {
    //         int x,y;
    //         cin>>x>>y;
    //         a[x][y]=1;
    //         }
    //     //判断本身和终点是否为障碍
    //     if (a[sx][sy]==1||a[fx][fy]==1) {
    //         return 0;
    //     }
    //     dfs(sx,sy);
    //     cout<<ans;
    //     return 0;
    //     }

//P1746 离开中山路
// P2249 【深基13.例1】查找


//MT3463 图的遍历
    // const int  N=100010;
    // int n,m;
    // vector<int>v[N];
    // bool vis[N];
    //
    //
    // void bfs(int star) {
    //     queue<int>q;
    //     q.push(star);
    //     vis[star]=true;
    //
    //     while (!q.empty()) {
    //         int u=q.front();
    //         q.pop();
    //
    //         cout<<u<<" ";//输出当前节点
    //
    //         for (int i=0;i<v[u].size();i++) {
    //             int x=v[u][i];
    //             if (!vis[x]) {
    //                 vis[x]=true;
    //                 q.push(x);
    //             }
    //         }
    //     }
    // }
    //
    // int main() {
    //     ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    //     cin>>n>>m;
    //     //memset(vis,false,vis.size());
    //     for (int i=1;i<=m;i++) {
    //         int x,y;
    //         cin>>x>>y;
    //         v[x].push_back(y);
    //         v[y].push_back(x);
    //     }
    //     for (int i=1;i<=n;i++) {
    //         sort(v[i].begin(),v[i].end());
    //
    //     }
    //     bfs(1);
    //     return 0;
    // }

//P1803 凌乱的yyy / 线段覆盖
    // const int N=100000;
    // int n;
    // struct play {
    //     int l,r;
    // }s[N];
    // bool gmp(play a,play b) {
    //     return a.r<b.r;
    // }
    // int main() {
    //     ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    //     cin>>n;
    //     for (int i=0;i<n;i++) {
    //         cin>>s[i].l>>s[i].r;
    //     }
    //     sort(s,s+n,gmp);
    //     int ans=1;
    //     int last=s[0].r;
    //     for (int i=1;i<n;i++) {
    //         if (s[i].l>=last) {
    //             ans++;
    //             last=s[i].r;
    //         }
    //     }
    //     cout<<ans;
    //     return 0;
    // }


//P1873 [COCI 2011/2012 #5] EKO / 砍树

//P1048 [NOIP 2005 普及组] 采药
const int M=110;
const int T=1010;
int f[T][M]={0};
int value[M];//药草的价值
int times[M];//花费的时间
int m,t;//背包的容量m，可以使用的时间t
int dp[T]={0};//存储能得到的价值
// struct play {
//     int times,value;
// }s[M];

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>t>>m;
    //for (int i=1;i<=m;i++)cin>>s[i].times>>s[i].value;
    for (int i=1;i<=m;i++)cin>>times[i]>>value[i];

//     for (int i=1;i<=m;i++) {
//         for (int j=t;j>=times[i];j--) {
//             dp[j]=max(dp[j],dp[j-times[i]]+value[i]);
//         }
//         // if (t>=s[i].times) {
//         //     f[m][t]=max{f[m-1][t-s[i].times],f[m][t]};
//         }
//     cout <<dp[t]<<endl;
// return 0;
    for (int i=1;i<=m;i++) {//i为草药数量
        for (int j=1;j<=t;j++) {//j为时间
            if (j<times[i]) {
                f[j][i]=f[j][i-1];
            }
            else {
                f[j][i]=max(f[j][i-1],f[j-times[i]][i-1]+value[i]);
            }
        }
    }
    cout<<f[t][m]<<endl;
    return 0;
    }

