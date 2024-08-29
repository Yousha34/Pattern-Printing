#include<iostream>
using namespace std ;
int main(){

    int n, stars = 1 ;

    cout << "Enter no : " ;
    cin >> n ;

    int a = (n*2)+1 ;

    for( int j = 1; j <= a; j++ ){
            cout << j ;
        }
    cout << endl ;

    for( int i = 1; i <= n; i++ ){

        int a = 1 ;

        for( int j = 1; j <= n-i+1; j++ ){
            cout << a ;
            a++ ;
        }

        for( int k = 1; k <= stars; k++){
            cout << " " ;
            a++ ;
        }

        for( int j = 1; j <= n-i+1; j++ ){
            cout << a ;
            a++ ;
        }

        stars += 2 ;
        cout << endl ;

    }

    return 0 ;
}