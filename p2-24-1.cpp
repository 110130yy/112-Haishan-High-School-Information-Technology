#include <iostream>
using namespace std;

int main(){
    int i,key,n=9,S=-1,m,right=8,left=0;
    int a[n] = {1,2,3,4,5,6,7,8,9};
    cout <<"陣列a為";
    for (i=0;i<9;i++)
        cout <<a[i]<<" ";
    cout << "\n請輸入欲找的鍵值：";
    cin >> key;
     while (right>=left){
         m=(right+left)/2;
      if (a[m] < key) 
          left=m+1;
      else if (a[m]>key)
        right=m-1;
      else{
         S=m;
         break;
      }
  }
  if (S != -1)
      cout << "發現搜尋目標" << key << ",位於陣列中第" << S << "個位置";
  else
      cout << "無法找到搜尋目標"<< S+1;
    
    return 0;
}
