#include <iostream>

int main(int argc, char **argv)
{
	int l;
	int q;

	l = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (l < argc)
		{
			q = 0;
			while (argv[l][q]) 
			{
				if (argv[l][q] >= 'a' && argv[l][q] <= 'z')
					std::cout << (argv[l][q] -= 32);
				else
					std::cout << argv[l][q];
				q++;
			}
			l++;
			if (l != argc)
				std::cout << " ";
		}
	}
	std::cout << std::endl;
	return (0);
}
