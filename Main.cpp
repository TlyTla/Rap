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
		std::cout << "\t\t\t�������� �����\n\n";
		std::cout << "1 - ��� ��� ��� ��� \n2 - ������� �����\n3 - ��, ��, ��, ��, ����, ��, �� \n0 - �������\n\n��� ���������? ";
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
			std::cout << "������ �����!!!!!!!!(-_-)";
		}

	}


	return 0;
}