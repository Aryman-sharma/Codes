#include <iostream>
using namespace std;
#include<string>
#include<vector>
#include<map>

void printvector(vector<pair<int,int>>vec)
{
    for(int i=0; i<vec.size(); i++)
    {
      cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }
    
}


int main()
{   

//     // PAIRS 

//     pair<int, string> p;

//     // p = make_pair(2, "call");
//     // cout << p.first << p.second << endl;

//     p = {22, "home"};
//     cout << p.first << p.second << endl;
    
//     pair<int,string>p1;

//     p1=p;
//     p1.first=23;
    
//     cout << p1.first << p1.second << endl;

//     /// arrray of pairs // 

//     pair<int,int>arr[3];
    
//     arr[0]={3,7};
//     arr[1]={4,7};
//     arr[2]={5,7};
    
//     for(int i=0; i<3;i++)
//     {
//         cout<<arr[i].first<<","<<arr[i].second<<endl;
//     }


// //  vector 

// vector<int>v(10,3);

// printvector(v);

// copying of vector  // Time complexity is O(N) //

// cout<<"t/hello woerld"<<endl;
// vector<int>v1=v;

// printvector(v1);



// int n;
// cin>>n;
// vector<pair<int,int> >v2;


// for(int i =0; i< n ;i++)
// {   
//   int firstValue, secondValue;
//         cin >> firstValue >> secondValue;
//         v2.push_back(pair<int, int>(firstValue, secondValue));
// }

// cout<<endl;  

// printvector(v2);

////// vetcor of arr ////////////
 
// vector<int>arr[3];

// for(int i=0; i<3; i++)
// {
//   int n;
//   cin>>n;

//   for(int j=0;j<n;j++)
//   {
//       int x;
//       cin>>x;
//       arr[i].push_back(x);
//   }
// }

// for(int i =0; i< 3; i++)
// {
//   printvector(arr[i]);
//   cout<<endl;
// }

// vector<vector<int>>vec;
// int k;
// cin>>k;
// for(int i=0 ; i<k ; i++)
// {
//   vector<int>evec;
//   int l;
//   cin>>l;

//   for(int j =0 ; j< l; j++)
//   {
//      int val;
//      cin>>val;
//      evec.push_back(val);
//   }

// vec.push_back(evec);
// }
 
// for(int i =0 ; i < vec.size() ; i++)
// {
//   printvector(vec[i]);
//   cout<<endl;
// }
// int n;
// cin>>n;

// vector<pair<int,int>>cool;

// for(int i=0;i<n;i++)
// {
//   pair<int,int>pool;
  
//   int x , y;
//   cin>>x>>y;
//   pool={x,y};

//  cool.push_back(pool);

// }


// printvector(cool);

// -------------------------------------iterators --------------------------------------------------------------------------------

 
vector<int>v={1,3,5,9,6};

// vector<int> :: iterator it;
// for(it= v.begin();it != v.end();it++)
// {
//   cout<<(*it);
// }

// cout<<endl;
// // range based loops 

// for( auto cr :v)
// {
//   cout << cr; 
// }

// map<int,string>m;
// int n;
// cin>>n;

// for(int i=0; i < n ; i++)
// {
//   int a;
//   cin>>a;
//   string b;
//   cin>>b;
//   m.insert({a,b});
// }

// cout<<"*-----------------------------------------------"<<endl;

// for(auto pr:m)
// {
//   cout<<pr.first<<" "<< pr.second <<" "<<endl;
// }

// auto it = m.find(8);

// cout<<(*it).first<< (*it).second<<endl;





}