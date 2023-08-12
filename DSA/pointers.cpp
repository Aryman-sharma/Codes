#include <iostream>
#include <vector>
using namespace std;
/*void solve(int arr[])
{
 cout<<"size inside function "<<sizeof(arr)<<endl;

}*/

/*void upadatedvalue(int *p)
{
 *p=*p+5;
 cout<<"value inside function is "<< *p <<endl;

}*/

/*void newa (int k )
{
  cout<<"addres of new k is "<<&k<<endl;
  k=k+20;
  cout<<"the new value inside k is "<< k<<endl;
}*/

void util(int*ptr)
{

  *ptr=*ptr+1;
}

int main()
{

  // int a=5; int b=5;
  // cout<<a<<" " << b << endl;
  // cout<<"--------"<<endl;
  // cout<<&a<<" "<<&b<<endl;

  //  int a = 5;

  //  int* ptr = &a;  // ptr is pointing to rthe addresss of a;

  //  cout<< *ptr <<endl;
  //  cout<< ptr<<endl;
  //  cout<< a <<endl;
  //  cout<<&a<<endl;
  //  cout << & ptr<<endl;
  //  cout<<"5555555555555555555"<<endl;

  //  cout<<sizeof(&ptr);
  // int arr[4]={55,32,6,5};
  // cout<<arr<<endl;
  // cout<<&arr<<endl;
  // cout<<&arr[0]<<endl;

  // cout<<&arr[1]<<endl;
  // cout<<&arr[2]<<endl;

  // cout<<&arr[3]<<endl;

  // int *ptr=arr;

  // cout<<ptr<<endl;
  // cout<<&ptr<<endl;

  // cout<<*arr<<endl;

  // cout<< *(arr+4);

  // cout<<sizeof(*ptr)<<endl;

  // cout<<*(ptr+2)<<endl;

  // cout<<*(arr+2)<<endl;

  // cout<<*(arr)<<endl;
  // cout<<*(arr+1)<<endl;
  // cout<<*(arr+2)<<endl;
  // cout<<*(arr+3)<<endl;
  // cout<<"------------------------------------"<<endl;

  // cout<<*(ptr)<<endl;
  // cout<<*(ptr+1)<<endl;
  // cout<<*(ptr+2)<<endl;
  // cout<<*(ptr+3)<<endl;

  //  char name [10]="babbar";
  //  char *c="babbar";
  //  cout<< name<<endl;
  //  cout<<c<<endl;

  /******************    ********************/

  ///////             pointer  with functions            //////

  // cout<<"***************************"<<endl;
  // int arr[10]={54,15,5,55};
  // cout<<"size inside main function "<<sizeof(arr)<<endl;
  // solve(arr);
  // cout<<endl;
  // cout<<"***************************"<<endl;

  // int a =5;

  // int *ptr=&a;
  // cout<<"val before updation "<< *ptr<<endl;
  // upadatedvalue(ptr);
  // cout<<"val after updation "<< *ptr <<endl;
  // cout<<a;

  // int k=50;
  // cout<<"old addres of k is "<<&k<<endl;
  // cout<<"vlaue isnside k is "<<k<<endl;

  // newa(k);

  // cout<<"value of k after updation is "<<k <<endl;

  //////////////////////////////////////////////////////////********************************************************////------------------------------------------------

  //////// SIEVE OF ERATOSTHENSIS ////////////////

  //// USE TO FIND THE TOTAL NUMBER OF PRIME NUMERS IN BETWEEN ONE TO  N;

//   int N;
//   cin >> N;

//   int count = 0;
//   vector<bool> arr(N, 1);

//   arr[0] = arr[1] = 0;



//   for (int i = 2; i < N; i++)
//   {
//     if (arr[i])
//     {
//       count++;

//       int j = 2 * i;

//       while (j < N)
//       {
//         arr[j] = 0;
//         j += i; /// j=j+i
//       }
//     }
//   }
//   cout<<count<<endl;


//    for(int i=0 ; i < N; i++)
//   {
//     cout<<arr[i]<<" ";
//   }
////////**************************************************************
 

// int a=5;
// int *ptr= &a;

// cout<<"before"<<endl;

// cout<<&a<<endl;
// cout<<a<<endl;
// cout<<ptr<<endl;
// cout<<*ptr<<endl;



// util(ptr);

// cout<<"after ******************************* "<<endl;

// cout<<&a<<endl;
// cout<<a<<endl;
// cout<<ptr<<endl;
// cout<<*ptr<<endl;
// return 0;

int  a=4;
  
  int *ptr=&a;
  
 int **ktr=&ptr;
 
 cout<<sizeof(ktr)<<endl<<sizeof(ptr)<<endl<<sizeof(a)<<endl;






  



} 
