#include<iostream>
using namespace std ;
int main(){

    int n, stars = 1 ;

    cout << "Enter no : " ;
    cin >> n ;

    int a = (n*2)+1 ;

    int c = 1, d = 1 ;
	char ch ;
 
    for( int j = 1; j <= a; j++ ){
            d = c + 64 ;
			ch = ( char )d ;
			cout << ch ;
			c++ ;
        }
    cout << endl ;

    for( int i = 1; i <= n; i++ ){

        int a = 1 ;

        int c1 = 1, d1 = 1 ;
	    char ch1 ;


        for( int j = 1; j <= n-i+1; j++ ){
            d1 = c1 + 64 ;
			ch1 = ( char )d1 ;
			cout << ch1 ;
			c1++ ;
        }

        for( int k = 1; k <= stars; k++){
            cout << " " ;
            a++ ;
    		c1++ ;

        }

        for( int j = 1; j <= n-i+1; j++ ){
            d1 = c1 + 64 ;
			ch1 = ( char )d1 ;
            cout << ch1 ;
			c1++ ;
        }

        stars += 2 ;
        cout << endl ;

    }

    return 0 ;
}