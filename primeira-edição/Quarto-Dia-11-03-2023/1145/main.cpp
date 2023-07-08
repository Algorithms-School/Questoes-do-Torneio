#include <iostream>

using namespace std;

int main(){
	   int qtdvalores,valorfinal,i,o=0;
	   cin >> qtdvalores >> valorfinal;
	   
	   for(i=1; i<=valorfinal; i++){
	   	o++;
		   if(qtdvalores==o){
        cout << i << endl;
			   o=0;
		   }else{
        cout << i << " ";
		   }	   
	   }
	
	return 0;
	
}