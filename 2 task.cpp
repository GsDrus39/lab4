#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int inst[n][3];
    for (int i=0; i<n; i++){
        string a;
        int b;
        cin>>b;
        inst[i][0] = 0;
        inst[i][2] = b;
        int max = 0;
        if (b > 9){
	        while (b > 0){
	        	
	        	inst[i][0] = inst[i][0] + b % 10;
	        	if (b % 10 > max){
	        		max = b % 10;
				}
				b = b / 10;
			}
			inst[i][1] = max;
		}
		else{
			inst[i][0] = b;
			inst[i][1] = b;
		}
		
    }
    int temp[3];
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (inst[j][0] > inst[j + 1][0]) {
                temp[0] = inst[j][0];
                temp[1] = inst[j][1];
                temp[2] = inst[j][2];
                inst[j][0] = inst[j + 1][0];
                inst[j][1] = inst[j + 1][1];
                inst[j][2] = inst[j + 1][2];
                inst[j + 1][0] = temp[0];
                inst[j + 1][1] = temp[1];
                inst[j + 1][2] = temp[2];
            }
            else if (inst[j][0] == inst[j + 1][0]){
	            if (inst[j][1] > inst[j + 1][1]) {
	                temp[0] = inst[j][0];
	                temp[1] = inst[j][1];
	                temp[2] = inst[j][2];
	                inst[j][0] = inst[j + 1][0];
	                inst[j][1] = inst[j + 1][1];
	                inst[j][2] = inst[j + 1][2];
	                inst[j + 1][0] = temp[0];
	                inst[j + 1][1] = temp[1];
	                inst[j + 1][2] = temp[2];
	            }	
	            else if (inst[j][1] == inst[j + 1][1]){
	            	if (inst[j][2] > inst[j + 1][2]) {
		                temp[0] = inst[j][0];
		                temp[1] = inst[j][1];
		                temp[2] = inst[j][2];
		                inst[j][0] = inst[j + 1][0];
		                inst[j][1] = inst[j + 1][1];
		                inst[j][2] = inst[j + 1][2];
		                inst[j + 1][0] = temp[0];
		                inst[j + 1][1] = temp[1];
		                inst[j + 1][2] = temp[2];
		            }	
	            }
			}
        }
    }
	for (int i = 0; i < n; i++){
		cout<<inst[i][0];
		cout<<' ';
		cout<<inst[i][1];
		cout<<' ';
		cout<<inst[i][2];
		cout<<' ';
		cout<<'\n';
	}
    

    return 0;
}


