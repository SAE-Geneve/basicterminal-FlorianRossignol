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
		return 0;
	}
	if (pv >2 && pv ==4)

	{
		std::cout << "gagn\x82\ le vaisseau est battu " "\n\n";
	}
	if (pv >4)
	{
		std::cout << "on ne peux pas tricher !\n\n";
		return 0;
	}
	std::cout << "un deuxieme vaisseau est en approche le combattez-vous ?(oui = 1 ou non = 2)\n\n";
	int questions;
	 std::cin >> questions;
		if (questions == 1)
	{
			std::cout << "tres bien on continue\n\n";
	}
	if (questions == 2)
	{
		std::cout << "vous etes faible!\n\n";
		return 0;
	}
	if (questions >2)
	{
		std::cout << "vous etes un peu con\n\n";
		return 0;
	}
	std::cout << "le vaisseau ennemie est sur le point d'attaquer combiens de degats lui inflige vous ? (maximum 8)\n\n";
	int pv2;
	pv2 = 7;
	std::cin >> pv2,"\n\n";
	if (pv2 <= 8)
	{
		std::cout << "bravo vous devenez de plus en plus fort !\n\n";
	}
		if (pv2 >8 && pv2 ==8)
		{
			std::cout << "dommage, on recommence ?\n\n";
			return 0;
		}
	if (pv2>8)
	{
		std::cout << "je peux plus rien pour vous maintenant\n\n";
		return 0;
	}
	return 0;
}
