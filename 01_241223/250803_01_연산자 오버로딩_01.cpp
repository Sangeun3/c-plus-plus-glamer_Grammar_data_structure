#include <iostream>

class Clothing {// 옷 클래스
public:
	int hp; //체력
	int mp; //마력
	int agi; // 민첩성
	int luk; //행운

	//생성자를 써서 Clothing 함수를 만드세요.
	Clothing()
		:hp(15)
		, mp(10)
		, agi(3)
		, luk(1)
	{

	}

	Clothing(int hp_, int mp_, int agi_, int luk_)
		:hp(hp_)
		,mp(mp_)
		,agi(agi_)
		,luk(luk_)
	{

	}
	int GetHP() { return hp; }
	int GetMP() { return mp; }
	int GetAGI() { return agi; }
	int GetLUK() { return luk; }

	Clothing operator+= (const Clothing& other)
	{
		return Clothing(hp += other.hp, 
			mp += other.mp,
			agi += other.agi,
			luk += other.luk);
	}
	Clothing operator-= (const Clothing& other)
	{
		return Clothing(hp -= other.hp,
			mp -= other.mp,
			agi -= other.agi,
			luk -= other.luk);
	}
};

class Shoes {
public:
	int hp; //체력
	int mp; //마력
	int agi; // 민첩성
	int luk; //행운

	//생성자를 써서 Shoes 함수를 만드세요.
	Shoes()
		:hp(15)
		, mp(10)
		, agi(3)
		, luk(1)
	{

	}
	Shoes(int hp_, int mp_, int agi_, int luk_)
		: hp(hp_)
		, mp(mp_)
		, agi(agi_)
		, luk(luk_)
	{

	}
	int GetHP() { return hp; }
	int GetMP() { return mp; }
	int GetAGI() { return agi; }
	int GetLUK() { return luk; }
	Shoes operator+= (const Shoes& other)
	{
		return Shoes(hp += other.hp,
			mp += other.mp,
			agi += other.agi,
			luk += other.luk);
	}
	Shoes operator-= (const Shoes& other)
	{
		return Shoes(hp -= other.hp,
			mp -= other.mp,
			agi -= other.agi,
			luk -= other.luk);
	}
};

class Cloak {
public:
	int hp; //체력
	int mp; //마력
	int agi; // 민첩성
	int luk; //행운


	//생성자를 써서 Cloak 함수를 만드세요.
	Cloak()
		:hp(15)
		, mp(10)
		, agi(3)
		, luk(1)
	{

	}

	Cloak(int hp_, int mp_, int agi_, int luk_)
		:hp(hp_)
		, mp(mp_)
		, agi(agi_)
		, luk(luk_)
	{

	}
	int GetHP() { return hp; }
	int GetMP() { return mp; }
	int GetAGI() { return agi; }
	int GetLUK() { return luk; }

	Cloak operator+= (const Cloak& other)
	{
		return Cloak(hp += other.hp,
			mp += other.mp,
			agi += other.agi,
			luk += other.luk);
	}
	Cloak operator-= (const Cloak& other)
	{
		return Cloak(hp -= other.hp,
			mp -= other.mp,
			agi -= other.agi,
			luk -= other.luk);
	}
};

class Accessory {
 
public:
	int hp; //체력
	int mp; //마력
	int agi; // 민첩성
	int luk; //행운


	//생성자를 써서 Accessory 함수를 만드세요.
	Accessory()
		:hp(15)
		, mp(10)
		, agi(3)
		, luk(1)
	{

	}

	Accessory(int hp_, int mp_, int agi_, int luk_)
		:hp(hp_)
		, mp(mp_)
		, agi(agi_)
		, luk(luk_)
	{

	}

	int GetHP() { return hp; }
	int GetMP() { return mp; }
	int GetAGI() { return agi; }
	int GetLUK() { return luk; }

	Accessory operator+= (const Accessory& other)
	{
		return Accessory(hp += other.hp,
			mp += other.mp,
			agi += other.agi,
			luk += other.luk);
	}
	Accessory operator-= (const Accessory& other)
	{
		return Accessory(hp -= other.hp,
			mp -= other.mp,
			agi -= other.agi,
			luk -= other.luk);
	}
};

class EquipmentSlot
{
public:
	Clothing* clothing;
	Shoes* shoes;
	Cloak* cloak;
	Accessory* accessory;

	void EquipClothing(Clothing* item) { clothing = item; }
	void EquipShoes(Shoes* item) { shoes = item; }
	void EquipCloak(Cloak* item){ cloak = item; }
	void EquipAccessory(Accessory* item) { accessory = item; }

	void printEquipmentSlot() {
		std::cout << "=== Equipped Items === [HP] == [MP] == [AGI] == [LUK]" << std::endl;
		std::cout << "clothing  :             " << clothing->hp << "      " << clothing->mp << "      " << clothing->agi << "        " << clothing->luk << std::endl;
		std::cout << "shoes     :             " << shoes->hp << "      " << shoes->mp << "      " << shoes->agi << "        " << shoes->luk << std::endl;
		std::cout << "cloak     :             " << cloak->hp << "      " << cloak->mp << "      " << cloak->agi << "        " << cloak->luk << std::endl;
		std::cout << "accessory :             " << accessory->hp << "      " << accessory->mp << "      " << accessory->agi << "        " << accessory->luk << std::endl;
	}
};

int main()
{
	EquipmentSlot player1;
	Clothing clo10;
	Shoes shoes10;
	Cloak cloak10;
	Accessory acc10;

	player1.EquipClothing(&clo10);
	player1.EquipShoes(&shoes10);
	player1.EquipCloak(&cloak10);
	player1.EquipAccessory(&acc10);
	player1.printEquipmentSlot();

	Clothing clo5(2, 2, 1, 1);
	Shoes shoes5(2, 2, 1, 1);
	Cloak cloak15(3, 3, 2, 2);
	Accessory acc15(3, 3, 2, 2);

	clo10 -= clo5;
	shoes10 -= shoes5;
	cloak10 += cloak15;
	acc10 += acc15;


	player1.EquipClothing(&clo10);
	player1.EquipShoes(&shoes10);
	player1.EquipCloak(&cloak10);
	player1.EquipAccessory(&acc10);
	player1.printEquipmentSlot();
}