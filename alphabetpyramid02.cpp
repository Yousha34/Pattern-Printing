#include <iostream>
using namespace std ;
int main (){
	
	int n, a = 1, b = 1, stars = 1 ;
	char ch ;
	
	cout << "Enter a number : " ;
	cin >> n ;
	
	for( int i = 1; i <= n; i++ ){
		
		for( int j = 1; j <= n - i; j++ ){
			cout << " " ;
		}

		for( int k = 1; k <= stars; k++ ){
			b = a + 64 ;
			ch = ( char )b ;
			cout << ch ;
			a++ ;
		}
		
		
		stars += 2 ;
		cout << endl ;
		
	}
	
	return 0 ;
}
