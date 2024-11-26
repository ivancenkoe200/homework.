// homework.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

enum class MonsterType
{
	Orge,Goblin,Skeleton,Ork,Troll
};

struct Monster
{
	MonsterType type;
	string name;
	int health;
};

void printMonster(const Monster& monster)
{
	string typeStr;
	switch (monster.type)
	{
	case MonsterType::Orge:
		typeStr = "Orge";
		break;
	case MonsterType::Goblin:
		typeStr = "Goblin";
		break;
	case MonsterType::Skeleton:
		typeStr = "Skeleton";
		break;
	case MonsterType::Ork:
		typeStr = "Orc";
		break;
	case MonsterType::Troll:
		typeStr = "Troll";
		break;
	}
	cout << "This" << typeStr << "is named" << monster.name << "and has" << monster.health << "health." << endl;
}

int main()
{
	int choice;
	cout << "Choose a monster type:" << endl;
	cout << "1-Orge" << endl;
	cout << "2-Goblin" << endl;
	cout << "3-Skeleton" << endl;
	cout << "4-Orc" << endl;
	cout << "5-Troll" << endl;
	cin >> choice;

	Monster goblin = { MonsterType::Goblin,"Svetlin",150 };
	Monster orc = { MonsterType::Ork,"Korgin",70 };
	Monster orge = { MonsterType::Orge, "Lera", 250 };
	Monster skeleton = { MonsterType::Skeleton,"Gosha",400 };
	Monster troll = { MonsterType::Troll,"Anton",140 };

	if (choice == 1)
	{
		printMonster(orge);
	}
	else if (choice == 2)
	{
		printMonster(goblin);
	}
	else if (choice == 3)
	{
		printMonster(skeleton);
	}
	else if (choice == 4)
	{

		printMonster(orc);
	}
	else if (choice == 5)
	{
		printMonster(troll);
	}
	return 0;
}