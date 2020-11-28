#include<iostream>
#include<string>
using namespace std;
bool c(char a, char* b, int c);
int nos(int n);
int main() {
	int n, k;
	int a1 = 0;
	cin >> n >> k;                                                   
	char* nm;
	nm = new char[n];
	char* cs;
	cs = new char[k];
	for (int i = 0; i < n; i++)
		cin >> nm[i];
	for (int i = 0; i < k; i++)
		cin >> cs[i];
	int* aa = new int[n];                      
    for (int i = 0; i < n; i++) 
		aa[i] = 0;
	int ai = 0;
    for (int i = 0; i < n; i++)
		{
			if (!c(nm[i], cs, k))
		 	{
				ai++;
				continue;
			}
		aa[ai]++;
		}
	for (int i = 0; i < n; i++)                            
		a1 += nos(aa[i]);
	cout << a1 << endl;
	delete[] cs;
	delete[] nm;
	delete[] aa;
}
int nos(int n)
{                                          
	return ((n * (n + 1) / 2));
}
bool c(char a, char* b, int c) 
{ 
	for (int i = 0; i < c; i++) {
		if (a == b[i]){
			return true;
		}
	}
	return false;
}
