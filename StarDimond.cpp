// star dimond

#include <iostream>
using namespace std ;
int main (){
    
    int n ;
    
    cout << "Enter no : " ;
    cin >> n ;

    int middle_line = (n/2)+1 ;
    int stars = 1 ;
    int spaces = n/2 ;


    for( int i = 1; i <= n; i++ ){

        for( int j = 1; j <= spaces; j++ ){
            cout << " " ;
        }
        
        for( int k = 1; k <= stars; k++ ){
            cout << "*" ;
        }
        
        if( i < middle_line ){
            stars += 2 ;
            spaces -- ;
        }

        else{
            stars -= 2 ;
            spaces ++;
        }

        cout << endl ;
    }

    return 0 ;  

}