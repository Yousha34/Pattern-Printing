#include <iostream>
using namespace std ;
int main (){
	
	int n ;
	
	cout << "Enter a number : " ;
	cin >> n ;
	
	for( int i = 1; i <= n; i++ ){
		
		for( int j = 1; j <= n - i; j++ ){
			cout << " " ;
		}

		for( int k = 1; k <= i; k++ ){
			char ch = (char)(k+64) ;
			cout << ch ;
		}
		
		int a = i - 1 ;
		
		for( int j = 1; j <= i - 1; j++ ){
			char ch = (char)(a+64) ;
			cout << ch ;
			a-- ;
			
		}
		
		cout << endl  ;
		
	}
	
	return 0 ;
}
