#include"TRACK.HPP"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int number;
	std::cout << "\t\t\t�������� �����\n\n";
	std::cout << "1 - \n2 - ������� �����\n3 - \n0 - �������\n\n��� ���������? ";
	std::cin >> number;

	while (true)
	{
		if (number == 0)
		{
			break;
		}
		else if (number == 1)
		{
			Track a;
			system("cls");
		}
		else if (number == 2 || number == 3)
		{
			if (number == 3)
			{
				Track b(2);
				Track z(b);
				z.PlayTrack();
				system("cls");
			}
			Track b(2);
			system("cls");
		}
		else
		{
			std::cout << "������ �����!!!!!!!!(-_-)";
		}
	}


	return 0;
}