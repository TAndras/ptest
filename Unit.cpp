#include "Unit.h"


void Unit::setHealth(const int& in)
{
	Unit::health = in;
}
/*
void Unit::setDamage(const int& in)
{
	Unit::damage = in;
}
*/

int Unit::attack(Unit& target)
{

	std::cout << getName() << " -> " << target.getName() << std::endl;

	if (target.getHealth() > getDamage())
	{
		target.setHealth(target.getHealth() - getDamage());
		

		std::cout << target;
	}
	else
	{
		target.setHealth(0);


		std::cout << target.getName() << " died. " << getName() << " wins.";
	}
	return 0;
}

std::ostream& operator<<(std::ostream& os, const Unit& out)
{
	os << out.getName() << ": HP: " << out.getHealth() << " DMG: " << out.getDamage() << std::endl;

	return os;
}