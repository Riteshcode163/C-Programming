// #include <stdio.h>

// void array(int arr[],int n);

// void array(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf(" %d \t",arr[i]);
//     }
 
    
    
// }



// int main (){

//     int arr[6]={1,2,3,4,5,6};
//     int size = 6;

//     array(arr,size);
    
//     return 0;
//


                                        ///OR\\\\\//


#include <stdio.h>

 void array(int *arr,int n);

 void array(int *arr,int n){
     for (int i = 0; i < n; i++)
     {
         printf(" %d \t",arr[i]);
     }
 
    
     }



 int main (){

     int arr[6]={1,2,3,4,5,6};
     int size = 6;

     array(arr,size);
    
     return 0;

 }
