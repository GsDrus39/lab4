#include <iostream>
#include <vector>

class Abonent
{
private:
	unsigned int m_id;
	std::string m_name;

public:
	Abonent(int id, std::string name)
	{
		m_id = id;
		m_name = name;
	}

	std::string Name()
	{
		return m_name;
	}
};

class Provider
{
private:
	unsigned int m_id;
	std::string m_name;
	std::vector<Abonent*> m_abonents;

public:
	Provider(int id, std::string name)
	{
		m_id = id;
		m_name = name;
	}

	void AddPatient(Abonent* abonent)
	{
		m_abonents.push_back(abonent);
	}

	void PrintPatient()
	{
		for (size_t i = 0; i < m_abonents.size(); i++)
			std::cout << m_abonents[i]->Name() << std::endl;
	}
};

int main()
{
	Provider* provider = new Provider(0, "Rostelekom");

	provider->PrintPatient();

	Abonent* abonent1 = new Abonent(0, "Oleg");
	Abonent* abonent2 = new Abonent(1, "Vasya");

	provider->AddPatient(abonent1);
	provider->AddPatient(abonent2);

	provider->PrintPatient();

	delete provider;
	delete abonent1;

	return 0;
}
