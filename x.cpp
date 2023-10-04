#include </Users/aj/v.h>
//#include <bits/stdc++.h>
using namespace std;


int main()
{
 
    int* ptr = NULL;
    int n, i;
    cout << "Enter the length of array : " ;
    cin >> n ;
 
        printf("Memory successfully allocated using calloc.\n");
 
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }
 
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
        cout<< endl << "Enter the ney length : " ;
        cin >> n ;
        printf("\n\nEnter the new size of the array: %d\n", n);
 
        ptr = (int*)realloc(ptr, n * sizeof(int));
 
        
        printf("Memory successfully re-allocated using realloc.\n");
 
        for (i = 5; i < n; ++i) {
            ptr[i] = i + 1;
        }
 
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
 
        free(ptr);
 
    return 0;
}