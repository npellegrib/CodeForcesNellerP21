#include <bits\stdc++.h>

using namespace std;


int main()
{
	int n,amigo1,amigo2,amigo3;
	cin>>n;
	int cont1 = 0,cont2 = 0;

	for (int i = 0; i < n; ++i)
	{
		cin>>amigo1>>amigo2>>amigo3;
		if (amigo1 == 1)
		{
			cont1++;
		}

		if (amigo2 == 1)
		{
			cont1++;
		}

		if (amigo3 == 1)
		{
			cont1++;
		}

		if (cont1 >= 2)
		{
			cont2++;
			cont1 = 0;
		}else{
			cont1 = 0;
		}
	}

	cout<<cont2<<endl;

	return 0;
}
