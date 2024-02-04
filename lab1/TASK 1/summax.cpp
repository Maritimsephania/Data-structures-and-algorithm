#include <iostream>
using namespace std;

//Function to find maximum

int findMaximum( int arr[],int n){
    
int maximum = arr[0];
for(int i=1; i<n; i++){
    if (arr[i]>maximum){
        maximum = arr[i];
    }

}
return maximum;
}

//function to find sum

int findSum(int arr[], int n){
int sum = 0;
   for(int i = 0; i<n; i++){
       sum = sum + arr[i];
    }
    return sum;
}



int main(){
  const int x=10;
 // cin>>x;
  int array[x];
   int n;
    //declare the number of digits in the array
    cout<<"Enter the number of digits in the array\n";
    cin >> n;
    int* dynamicArray = new int[n];

    //iterate  till all the array is full
    for(int i=0; i < n; i++) {
        cout<<"enter the "<< i+1 <<"digit of the array";
        cin>> dynamicArray[i];
    }
    int max = findMaximum(dynamicArray, n);
    int sum = findSum(dynamicArray, n);
    cout<<"The sum and maximum are " << sum <<" and "<< max <<" respectively";
    delete[] dynamicArray;
    return 0;
}

