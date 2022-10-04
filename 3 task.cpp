#include <iostream>

using namespace std;

int comp(const void *, const void *);

int main()
{
    int n, m;
    cin>>n>>m;
    int matrix[n][m];
    int sums[n];
    for (int i = 0; i < n; i++){
    	int a;
	    for (int j = 0; j < m; j++){
	    	cin>>a;
	    	matrix[i][j] = a;
	    	sums[i] = sums[i] + a;
		}
		cout<<"---\n";
	}
	int max = 0;
	int pos = -1;
	for (int i = 0; i < n; i++){
		if (sums[i] > max){
			max = sums[i];
			pos = i;
		}
	}
	for (int i = 0; i < m; i++){
		matrix[pos][i]++;
	}
	for (int i = 0; i < n; i++){
	    for (int j = 0; j < m; j++){
	    	cout<<matrix[i][j]<<' ';
		}
		cout<<'\n';
	}
}
