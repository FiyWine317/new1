#include <iostream>
#include<string>
#include<algorithm>
#include<cctype>
#include <vector>
using namespace std;

//淘淘摘苹果
// int main() {
//
//
//     // int ch[20] ;
//     // for(int i=0;i<10;i++) {
//     //     cin>>ch[i];
//     // }
//     // int a;cin>>a;
//     // int ans=0;
//     // for (int i=0;i<10;i++) {
//     //     if (ch[i]<=(a+30))
//     //         ans++;
//     // }
//     // cout<<ans;
//     // return 0;
// }


//校外的树
    // const int N=110;
    // struct segment {
    //     int l,r;
    //     bool operator<(const segment& s) const {
    //         return l<s.l;
    //     }
    // }seg[N];
    //
    // int main() {
    //     int n,m;
    //     cin>>n>>m;
    //     for (int i=0;i<m;i++) {
    //         cin>>seg[i].l>>seg[i].r;
    //     }
    //     sort(seg,seg+m);
    //     int sum=0;
    //     int L=seg[0].l,R=seg[0].r;
    //     for (int i=1;i<m;i++) {
    //         if (seg[i].l<R)
    //             R=max(seg[i].r,R);
    //         else {
    //             sum+=R-L+1;
    //             L=seg[i].l;R=seg[i].r;
    //         }
    //
    //     } sum+=R-L+1;
    //     cout<<n+1-sum<<endl;
    //     return 0;
    // }


//枚举
//三连击
//enum num{a=1,b=2,c=3};

//火柴棒等式

// MT2110
// 或许在某个平行宇宙，会存在一种语言，使用的字母和英语一样，但字典序不一样。
// 给出1个字典序和1个字符串，将字符串按新字典序排序。
// 输入格式：
// 第一行26个互不相同的小写字母，表示新型字典序；
// 第二行1个字符串，表示待排序字符串。
// 输出格式：
// 1个字符串代表答案。
// qwertyuiopvmnbcxzasdfghjkl
// peace
// eepca

// int main() {
//     int a;cin>>a;
//     vector<int> v;
//     for(int i=0;i<a;i++) {
//         int x;cin>>x;
//         v.push_back(x);
//     }
//     // stable_
//     sort(v.begin(),v.end());
//     for (int i=0;i<v.size();i++) {
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }


//P1093 [NOIP 2007 普及组] 奖学金
    // const int N=500;
    // struct Student {
    //     int sum,yw,sx,yy,num;
    // }s[N];
    // int main() {
    //     int n;cin>>n;
    //     for (int i=0;i<n;i++) {
    //         cin>>s[i].yw>>s[i].sx>>s[i].yy;
    //         s[i].sum=s[i].sx+s[i].yy+s[i].yw;
    //         s[i].num=i+1;;
    //     }
    //     sort(s,s+n,[](const Student &a,const Student &b) {
    //         if (a.sum!=b.sum) {
    //             return a.sum>b.sum;
    //         }
    //         else {
    //             if (a.yw!=b.yw) {
    //                 return a.yw>b.yw;
    //             }
    //             else {
    //                 return a.num<b.sum;
    //             }
    //         }
    //     });
    //     for (int i=0;i<5;i++) {
    //         cout<<s[i].num<<" "<<s[i].sum<<endl;
    //     }
    //     return 0;
    // }


//P1059 [NOIP 2006 普及组] 明明的随机数
    // int main() {
    //     int n;cin>>n;
    //
    // }


//MT2091竹鼠发瓜子（二）
    // int main( )
    // {
    //     int m,n;cin>>m>>n;
    //     vector<int>v(n);
    //     for(int i=0;i<n;i++){
    //         cin>>v[i];
    //     }
    //     int des=0,sum=0;
    //     for(int i=0;i<n;i++)
    //     {
    //         sum+=v[i];
    //     }
    //     des=sum-m;
    //     int avg=des/n;
    //     int sur=des%n;
    //     cout<<avg*avg*(n-sur)+(avg+1)*(avg+1)*sur;
    //     return 0;
    // }


//MT2093活动安排
    // struct tome{
    //     int start,end;
    //
    // }act[500000];
    // bool cmp(tome a,tome b)
    // {
    //     return a.end<b.end;
    // }
    // int main( )
    // {
    //     int n;cin>>n;
    //     for(int i=0;i<n;i++)cin>>act[i].start>>act[i].end;
    //     sort(act,act+n,cmp);
    //     int sum=1;
    //     int last=act[0].end;
    //     for(int i=1;i<n;i++){
    //         if(act[i].start>=last){
    //             sum++;
    //             last=act[i].end;
    //         }
    //     }
    //     cout<<sum;
    //     return 0;
    // }


//NP0064小码哥的二分查找
//     int seg(vector<int>&v,int x){
//         int left=0,right=v.size()-1;
//         int result=-1;
//         while (left<=right){
//             int mid=left+(right-left)/2;
//             if(v[mid]==x) {
//                 result=mid+1;
//                 left=mid+1;
//             }
//             else if(v[mid]>x){
//                 right=mid-1;
//             }
//             else
//                 left=mid+1;
//         }
//         return result;
//     }
//
//     int main( )
//     {
//         int n,m;cin>>n>>m;
//         vector<int>v(n);
//         for(int i=0;i<n;i++)cin>>v[i];
//         vector<int>v2(m);
//         for(int i=0;i<m;i++)cin>>v2[i];
//         sort(v.begin(),v.end());
//         int ans=0;
//         for (int i=0;i<m;i++) {
//             ans=seg(v,v2[i]);cout<<ans<<"\n";
//         }
//         return 0;
// }


//P1873 [COCI 2011/2012 #5] EKO / 砍树

// bool seg(vector<int>&a,int m,int mids) {
//     int sum=0;
//     for (int i=0;i<a.size();i++) {
//         if (a[i]>mids)sum+=(a[i]-mids);
//     }
//     return sum>=m;
// }
// 检查：切割高度为mid_height时，能否得到≥target_length的总木材
// bool seg(vector<int>& a, int target_length, int mid_height) {
//     long long sum = 0; // 用long long防止整数溢出
//     for (int i = 0; i < a.size(); i++) {
//         // 只有木材长度大于切割高度时，才会有剩余
//         if (a[i] > mid_height) {
//             sum += (a[i] - mid_height);
//         }
//     }
//     // 返回是否满足总长度要求
//     return sum >= target_length;
// }
// int main() {
//     int n,m;cin>>n>>m;
//     vector<int>v(n);
//     for(int i=0;i<n;i++)cin>>v[i];
//     int left=0,right=*max_element(v.begin(),v.end());
//     int ans=0;
//     while(left<=right) {
//          int mid=left+(right-left)/2;
//         if (seg(v,m,mid)) {
//             ans=mid;
//             left=mid+1;
//         }
//         else
//             right=mid-1;
//
//     }
//     cout<<ans<<endl;
//     return 0;
//
//
//
//
//
//}

//递归
    // int  jiec(int n) {
    //     if (n==1)return 1;
    //     return n*jiec(n-1);
    //
    // }
    // int main() {
    //     int a;cin>>a;
    //     cout<<jiec(a);
    //     return 0;
    // }


//二分查找
    // int main() {
    //     int data[200];
    //     ios ::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    //     int n;cin>>n;
    //     for (int i=0;i<200;i++)data[i]=4*i+6;
    //     // int bound=lower_bound(data,data+200,n)-data;
    //     int bound2=find(data,data+200,n)-data;
    //     cout<<bound2<<endl;
    //     return 0;
    //
    //
    // }

