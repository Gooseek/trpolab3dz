#include <iostream> 
#include <math.h> 
#include <cstdlib> 
using namespace std;
int main()
{
	int n;
	cout << "kol-vo levels:";
	cin >> n;
	int* a = new int[n];
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		a[i] = 1;
		cout << '\n' << "level" << ' ' << i + 1 << '\n';
		cout << a[i];
		for (int j = i - 1; j >= 0; j--)
		{
			a[j] = (rand() % 2);
			cout << a[j];
		}
		{int Value = 0;
		for (int k = 0; k < n; k++)
			if (a[k] == 1) Value += pow(2, k);
		int Value1;
		cout << '\n';
		cout << "vvedite znachenie" << '\n';
		cin >> Value1;
		if (Value1 == Value) { cout << "true" << '\n'; result++; }
		else cout << "false" << '\n';
		}
	} cout << "verno:" << result << '\n';
	cout << "in procent:" << result * 100 / n <<endl;
	system("PAUSE");
	return 0;
}