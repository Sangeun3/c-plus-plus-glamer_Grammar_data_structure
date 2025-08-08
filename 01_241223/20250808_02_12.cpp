#include <iostream>

class Warrior {
public:
	int hp = 100;
	int attackpoint = 20;

};
class Magicion {
public:
	int hp = 100;
	int attackpoint = 30;
};
class Archer {
public:
	int hp = 100;
	int attackpoint = 10;
};
class Party {
private:
	Warrior* warrior;
	Magicion* magicion;
	Archer* archer;
public:
	void setParty(Warrior* w_, Magicion* m_, Archer* a_)
	{
		warrior = w_;
		magicion = m_;
		archer = a_;
	}
	void printParty() {
		std::cout << "Warrior : HP (" << (*warrior).hp << ") Att(" << warrior->attackpoint << ")\n";
		std::cout << "magicion : HP (" << (*magicion).hp << ") Att(" << magicion->attackpoint << ")\n";
		std::cout << "archer : HP (" << (*archer).hp << ") Att(" << archer->attackpoint << ")\n";
	}
};

int main()
{
	Warrior w;
	Magicion m;
	Archer a;
	
	Party papapa;
	papapa.setParty(&w, &m, &a);
	papapa.printParty();
	return 0;
}