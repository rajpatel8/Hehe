#include </Users/aj/v.h> 

using namespace std ;

# define start main 

int start (){

    string s  = "Rajkumar";

    int arr[26] = { 0} ;

    for(int i = 0 ;i < s.size();i++){
        if(s[i]>=65 && s[i] <= 90){
            s[i] += 32 ;
        }
        arr[s[i]-'a']++;
    }

    for(int i = 0 ; i < s.size() ; i ++){
        if(arr[s[i]-'a']!=0){
            cout << s[i] << arr[s[i]-'a'] ;
            arr[s[i]-'a'] = 0 ;
        }
    }

    return 0 ; 
}
