#include <iostream>
#include <string>
#include <math.h>


int sum(std::string A, std::string B)
{

	int length;
	bool flag = false;
	int memor = 0;
	std::string res;
	if (A.length() < B.length())
	{
		length = B.length();
		flag = true;
	}
	else
	{
		length = A.length();
	}

	for (int i = 0; i < std::abs(int(A.length() - B.length())); i++)
	{
		if (flag)
		{
			A = '0' + A;
		}
		else
		{
			B = '0' + B;
		}
	}

	for (int i = 0; i < length; i++)
	{
		int lastfst = std::stoi(B.substr(length - 1 - i, 1));
		int lastsnd = std::stoi(A.substr(length - 1 - i, 1));
		if (flag)
		{
			int lastfst = std::stoi(A.substr(length - 1 - i, 1));
			int lastsnd = std::stoi(B.substr(length - 1 - i, 1));
		}
		int temp = lastfst + lastsnd + memor;
		memor = temp % 10;
		res = std::to_string(memor) + res;
		memor = temp / 10;
		A[length - 1 - i] = '\0';
		B[length - 1 - i] = '\0';
	}
	res = std::to_string(memor) + res;
	return std::stoi(res);
}


int main()
{
	std::string fst = "12";
	std::string snd = "10";
	
	int res1 = 0;
	for (int i = 0; i < std::stoi(snd); i++)
	{
		res1 = sum(std::to_string(res1), fst);
	}
	std::cout << res1;
	return 0;
}
