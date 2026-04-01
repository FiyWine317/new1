#include <iostream>
#include <algorithm>
#include<vector>
#include<cctype>
#include <stack>
using namespace std;

// TIP 要<b>Run</b>代码，请按 <shortcut actionId="Run"/> 或点击装订区域中的 <icon src="AllIcons.Actions.Execute"/> 图标。
int main() {
    //SetConsoleOutputCp(CP_UTF8);
    // int n,m;
    // cin>>n>>m;
    // vector <int>v(n+1);
    // for (int i=1;i<=n;i++) {
    //     cin>>v[i];
    // }
    // for (int i=1;i<=m;i++) {
    //     int x;
    //     cin>>x;
    //     cout<<v[x];
    //     cout<<"\n";
    //
    //
    // }
    // return 0;

    // int n;
    // cin>>n;
    // vector<int> v(n+1);
    // for(int i=1;i<=n;i++) {
    //     cin>>v[i];
    // }
    // int a[n];
    // a[1]=v[1];
    // cout<<0<<" ";
    // int ans=0;
    // for(int i=2;i<=n;i++) {
    //     ans=0;
    //     for (int j=i-1;j>=1;j--) {
    //         if (v[i]>=v[j]) {
    //             ans++;
    //         }
    //     }
    // cout<<ans<<" ";
    // }
    //
    // return 0;


//校外的树
    //     int l, m;
    //     cin >> l >> m;
    //     vector<pair<int, int>> segs;
    //     for (int i = 0; i < m; ++i) {
    //         int u, v;
    //         cin >> u >> v;
    //         if (u > v) swap(u, v); // 保证u <= v
    //         segs.emplace_back(u, v);
    //     }
    //     // 按左端点排序
    //     sort(segs.begin(), segs.end());
    //     // 合并区间
    //     vector<pair<int, int>> merged;
    //     for (auto &s : segs) {
    //         if (merged.empty()) {
    //             merged.push_back(s);
    //         } else {
    //             auto &last = merged.back();
    //             if (s.first <= last.second) {
    //                 // 重叠或相邻，合并
    //                 last.second = max(last.second, s.second);
    //             } else {
    //                 merged.push_back(s);
    //             }
    //         }
    //     }
    //     // 计算移除总数
    //     int remove = 0;
    //     for (auto &p : merged) {
    //         remove += p.second - p.first + 1;
    //     }
    //     // 剩余树木
    //     cout << (l + 1) - remove << endl;
    //     return 0;
    // }



    // string s;  int sum=0;
    // getline(cin,s);
    // for (int i=0;i<s.size();i++) {
    //
    //     if (s[i]!=' '&&s[i]!='\n') {
    //         sum++;
    //     }
    // }
    // cout<<sum<<endl;
    // return 0;


//统计单词出现位置，以及出现了几次
    // string s1,s2;
    // getline(cin,s1);
    // getline(cin,s2);
    // for (int i=0;i<s1.length();i++) {
    //     if (s1[i]>='A'&&s1[i]<='Z')
    //         s1=s1[i]-'A'+'a';
    // }
    // for (int i=0;i<s2.length();i++) {
    //     if (s2[i]>='A'&&s2[i]<='Z')
    //         s2=s2[i]-'A'+'a';
    // }
    // string s22=' '+s22+' ';
    // string s11=' '+s11+' ';
    // int sum=0;
    // auto ans=s22.find(s11,0);
    // auto por=ans;
    // while(ans!=-1) {
    //     sum++;
    //     ans=s22.find(s11,ans+1);
    // }
    // if (sum==0)
    //     cout<<-1;
    // else
    //     cout<<sum;
    // return 0;

//火车进站
    // int n;
    // cin>>n;
    // stack<int >stk;
    // int m=1;
    // for(int i=0;i<n;++i) {
    //    int x;cin>>x;
    //     stk.push(x);
    //     while(!stk.empty()&&stk.top()==m&&m<=n) {
    //         stk.pop();
    //         m++;
    //     }
    // }
    // if (m==n+1)
    //     cout<<"YES"<<endl;
    // else
    //     cout<<"NO"<<endl;
    // return 0;

//括号匹配
    // int n,ans=1;cin>>n;
    // string str;
    // cin>>str;
    // stack<char> s;
    // for(int i=0;i<n;++i) {
    //
    //
    //     //左括号
    //     if (str[i]=='{'||str[i]=='['||str[i]=='(') {
    //         s.push(str[i]);
    // }
    //     //右括号
    //     else {
    //         //栈为空，没有左括号与之匹配
    //         if (s.empty()) {
    //                  ans=0;
    //         break;
    //         }
    //         //检查栈顶左括号与数组里右括号是否匹配
    //         if ((s.top()=='['&&str[i]==']')||(s.top()=='{'&&str[i]=='}')||
    //             (s.top()=='('&&str[i]==')'))
    //         {
    //             s.pop();
    //         }
    //         else {
    //             ans=0;
    //             break;
    //         }
    //     }
    //     }
    // if (!s.empty()) {
    //     ans=0;
    // }
    // if (ans==0) {
    //     cout<<"NO"<<endl;
    //
    // }
    // else {
    //     cout<<"YES"<<endl;
    // }
    // return 0;


}