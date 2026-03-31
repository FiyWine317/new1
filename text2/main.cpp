#include <iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// TIP 要<b>Run</b>代码，请按 <shortcut actionId="Run"/> 或点击装订区域中的 <icon src="AllIcons.Actions.Execute"/> 图标。
int main() {
    // cout<<setw(5)<<setiosflags(ios::left)<<455<<" "<<455<<endl;
    // cout<<setw(5)<<setiosflags(ios::right)<<-123<<" "<<-123<<endl;
    // cout<<setw(5)<<setiosflags(ios::right)<<987654<<" "<<987654<<endl;
    // return 0;

//     double a = 3.1415926, b = 22.3456;
//     cout << fixed << setprecision(6);
//     cout << left << setw(14) << a << " " << a << endl;
//     cout << resetiosflags(ios::left);
//     cout << b ;
//     cout<<right<<setw(14)<< b << endl;
//     return 0;

    // double i=3.1415926,j=12345678.123456789;
    // // 第一行：小数格式(6位) + 指数格式(6位)
    // cout << fixed << setprecision(6) << i << " "
    //      << scientific << setprecision(6) << i << endl;
    //
    // // 第二行：先恢复小数格式，再输出小数+指数
    // cout.unsetf(ios::scientific);  // 清除指数格式
    // cout << fixed << setprecision(6) << j << " "
    //      << scientific << setprecision(6) << j << endl;
    //
    // return 0;

    // cout<<dec<<202<<" "<<"0"<<oct<<202<<" "<<"0X"<<hex<<202<<endl;
    // cout <<dec<<117<<" "<<"0"<<oct<<117<<" "<<"0X"<<hex<<117<<endl;
    // cout<<dec<<70<<" "<<"0"<<oct<<70<<" "<<"0X"<<hex<<70<<endl;
    // cout<<dec<<130<<" "<<"0"<<oct<<130<<" "<<"0X"<<hex<<130<<endl;
    // int a=10;
    // printf("%o",a);
    // return 0;

    // char a,b;
    // scanf("%c,%c",&a,&b);
    // printf("%d,%d",a,b);
    // return 0;

    //vector <int>vec;
    // for (int i=0;i<10;i++) {
    //     int n;
    //     cin>>n;
    //     vec.push_back(n);
    // }


    // vector<int> vec(10);
    // for (int i=0;i<10;i++) {
    //     cin>>vec[i];
    // }
    // cout<<"\n";
    // int a;
    // cin>>a;
    // vector <int>it;
    // for (int i=0;i<vec.size();i++) {
    //     if (vec[i]<=a||vec[i]<=(a+30)) {
    //         it.push_back(vec[i]) ;
    //     }
    // }
    // cout<<it.size();
    // return 0;

    // vector<int>v(10);
    // for(int i=0;i<10;i++)
    // {
    //     cin>>v[i];
    // }
    // for(int i=v.size()-1;i>=0;i--)
    // {
    //     cout<<v[i]<<" ";
    // }
    // return 0;

    // vector<int>v(10);
    // for(int i=0;i<10;i++)
    // {
    //     cin>>v[i];
    // }
    // cout<<"\n";
    // int a;
    // cin>>a;
    // auto n=find(v.begin(),v.end(),a);
    // if (n!=v.end())
    //     cout<<n-v.begin();
    // else
    //     cout<<"No";
    // return 0;


    // vector<int>v;
    // int  n;
    // cin>>n;
    // if (n==0)
    //     cout<<"0"<<endl;
    // while(n>0) {
    //     int x=n%10;
    //     v.push_back(x);
    //     n=n/10;
    // }
    // for (int i=0;i<v.size();i++) {
    //     cout<<v[i];
    // }
    // return 0;

   string s;
    getline(cin,s);
    int n=0;
    for (char c:s) {
if (c!=' '&&c!='\n')
    n++;
    }
    cout<<n;
    return 0;
}