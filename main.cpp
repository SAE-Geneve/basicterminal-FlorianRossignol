#include <iostream>

int main ()
{
	std::cout<<"un vaisseau ennemi entre dans votre champ de vision\n\n";
	std::cout << "combiens de d\x82\gats lui inflige vous ? (maximum 4)\n\n";
	int pv = 2;
	std::cin >> pv ,"\n\n";
	if (pv <= 2)
	{
		std::cout << "perdu le vaisseau avait plus de pv \n\n";
	}
	if (pv >2)
	{
		std::cout << "gagn\x82\ le vaisseau est battu " "\n\n";
	}
	return 0;
}
