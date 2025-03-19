#include"TRACK.HPP"


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	Track a;
	Track b(2);
	Track z(b);
	
	while (true)
	{
		std::string number;
		std::cout << "\t\t\tПлуйлист Пашка\n\n";
		std::cout << "1 - Мяу мяу мяу мяу \n2 - Матушка земля\n3 - До, Ре, Ми, Фа, Соль, Ля, Си \n0 - Закрыть\n\nЧто послушаем? ";
		std::cin >> number;
		system("cls");
		if (number == "0")
		{
			break;
		}
		else if (number == "1")
		{
			a.PlayTrack();
		}
		else if (number == "2")
		{
			b.PlayTrack();
		}
		else if (number == "3")
		{
			z.PlayTrack();
		}
		else
		{
			std::cout << "Ошибка ввода!!!!!!!!(-_-)";
		}

	}


	return 0;
}