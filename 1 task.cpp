#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int comp(const void *, const void *);

int main()
{
    int n;
    bool Flag = true;
    cin>>n;
    int inst[n];
    for (int i=0; i<n; i++){
        string a;
        int b;
        cin>>b;
        inst[i] = b;
        int counter = 2;
        bool Flag2 = true;
        if (b > 9){
	        while (b > 0){
	        	if ((b % (counter * 10)) != (b % ((counter - 1) * 10))){
	        		Flag2 = false;
				}
				b = b / 10;
			}
			if (Flag2 == true){
				Flag = false;
			}
		}
    }
    if (Flag){
    	qsort(inst, n, sizeof(int), comp);
	}
	for (int i = 0; i < n; i++){
		cout<<inst[i];
		cout<<' ';
	}
    

    return 0;
}


int comp(const void *i, const void *j)
{
  return *(int *)j - *(int *)i;
}
