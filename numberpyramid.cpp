#include <iostream>
using namespace std ;
int main (){
	
	int n, stars = 1 ;
	
	cout << "Enter a number : " ;
	cin >> n ;
	
	for( int i = 1; i <= n; i++ ){
		
		for( int j = 1; j <= n - i; j++ ){
			cout << " " ;
		}

		for( int k = 1; k <= stars; k++ ){
			cout << k ;
		}
		
		stars += 2 ;
		cout << endl ;
		
	}
	
	return 0 ;
}
