#include <iostream>
#include <string>


int main()
{
	std::string A = "999";
	std::string B = "999";
	int length;
	bool flag = false;
	int memor = 0;
	std::string res;
	if (A.length() < B.length())
	{
		length = A.length();
		flag = true;
	}
	else
	{
		length = B.length();
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
	std::cout << std::stoi(res);
	return 0;
}
