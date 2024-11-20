#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

//This Code for Ascendiong order Sort.
void printsortedarray(int arr[],int n){ //This function for printing sorted array.
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
}
void countsort(int arr[],int n){ //This function for sorting the array.
  int maxvalue= -99999999;
  int minvalue = 9999999;
  for(int i=0; i<n; i++){
    maxvalue = max(maxvalue,arr[i]);
    minvalue = min(minvalue,arr[i]);
  }
  //1st step store the frequency
  int offset = -minvalue; //making positive value of negavetive value

  vector<int> freq(maxvalue-minvalue+1,0);

  for(int i=0; i<n; i++){
    freq[arr[i]+offset]++;
  }
  // placing the value at main array in correct order
  int j =0;
  for(int i=minvalue; i<=maxvalue; i++){
    while(freq[i+offset]>0){
      arr[j] = i;
      freq[i+offset]--;
      j++;
    }
  }
  printsortedarray(arr,n);
}
int main(){
  int arr[]= {5,4,1,2,3,-99};
  int n=sizeof(arr)/sizeof(int);
  countsort(arr,n);
  return 0;
}

__________________________________________________________________________________________
__________________________________________________________________________________________

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

//This Code for descending order Sort.
void printsortedarray(int arr[],int n){ //This function for printing sorted array.
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
}
void countsort(int arr[],int n){ //This function for sorting the array.
  int maxvalue= -99999999;
  int minvalue = 9999999;
  for(int i=0; i<n; i++){
    maxvalue = max(maxvalue,arr[i]);
    minvalue = min(minvalue,arr[i]);
  }
  //1st step store the frequency
  int offset = -minvalue; //making positive value of negavetive value

  vector<int> freq(maxvalue-minvalue+1,0);

  for(int i=0; i<n; i++){
    freq[arr[i]+offset]++;
  }
  // placing the value at main array in correct order
  int j =0;
  for(int i=maxvalue; i>=minvalue; i--){
    while(freq[i+offset]>0){
      arr[j] = i;
      freq[i+offset]--;
      j++;
    }
  }
  printsortedarray(arr,n);
}
int main(){
  int arr[]= {5,4,1,2,3,-99};
  int n=sizeof(arr)/sizeof(int);
  countsort(arr,n);
  return 0;
}
