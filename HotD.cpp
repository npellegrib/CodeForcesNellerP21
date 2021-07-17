#include<iostream>

using namespace std;

int main()
{
	int n,m,temperatura,temperaturalimite,valor,costo;
	int minimo = 0;
	int buses = 1;
	bool dividir = true;
	cin>>n>>m;

	for (int i = 0; i < n; i++)
	{
		cin>>temperatura>>temperaturalimite>>valor>>costo;
		if (temperatura + (m/buses) > temperaturalimite)
		{
			if ((valor * m) < costo || dividir == false)
			{
				minimo += (valor * m);
				minimo += (costo * buses);
				dividir = false;	
			}else if(dividir){
				int resta = temperaturalimite - temperatura;
				int dividir = m / resta;
				buses = dividir;
				minimo += (costo * buses);
				dividir = false;
			}
		}else{

			minimo += (costo * buses); 

		}
	}
	cout<<minimo<<endl;

	return 0;
}
