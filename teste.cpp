#include <iostream>

using namespace std;
int main(){
	
	int matriz[10][10];
	
	
	for(int i=0; i<10; i++){
		
		for(int j=0; j<10; j++){
			matriz[i][j]=0;	
            matriz[j][j]=1;

			cout<<matriz[i][j];		
		
		}
			cout<<"\n";
		
	}
	system("pause");
	return (0);
}