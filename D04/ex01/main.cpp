/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:56 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/10 21:37:52 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "AWeapon.hpp"
# include "PlasmaRifle.hpp"
# include "PowerFist.hpp"
# include "Enemy.hpp"
# include "SuperMutant.hpp"
# include "RadScorpion.hpp"
# include "Character.hpp"

class FlameThrower : public AWeapon
{
	public :

		FlameThrower(void);
		FlameThrower(const FlameThrower &src);
		FlameThrower &operator=(const FlameThrower &rhs);
		virtual ~FlameThrower(void);

    	virtual void        attack(void) const;
};

FlameThrower::FlameThrower(void) : AWeapon("Flame Thrower", 20, 100)
{
	return ;
}

FlameThrower::FlameThrower(const FlameThrower &src)
{
	*this = src;
	return ;
}

FlameThrower	&FlameThrower::operator=(const FlameThrower &rhs)
{
	this->_name = rhs._name;
    this->_apcost = rhs._apcost;
    this->_damage = rhs._damage;
	return (*this);
}

FlameThrower::~FlameThrower(void)
{
	return ;
}

void	FlameThrower::attack(void) const
{
    std::cout << "* PSCHHHHHHHHHH *" << std::endl;
}

class T_Rex : public Enemy
{

public:

	T_Rex(void);
	T_Rex(const T_Rex &src);
	T_Rex &operator=(const T_Rex &rhs);
	~T_Rex(void);

	virtual void		takeDamage(int damage);
};

T_Rex::T_Rex(void) : Enemy(250, "T-Rex")
{
    std::cout << "GROOOAAAAR !" << std::endl;
    return ;
}

T_Rex::T_Rex(const T_Rex &src)
{
    *this = src;
    return ;
}

T_Rex	&T_Rex::operator=(const T_Rex &rhs)
{
    this->_type = rhs._type;
    this->_hp = rhs._hp;
    return (*this);
}

T_Rex::~T_Rex(void)
{
    std::cout << " * zzZ zZz ZZz Zzz zZz *" << std::endl;
    return ;
}

void	T_Rex::takeDamage(int damage)
{
	damage -= 10;
	if (damage >= 0)
    {
    	this->_hp -= damage;
    	if (this->_hp < 0)
        	this->_hp = 0;
	}
}

static void		extraTests(void)
{
	Character	*mc = new Character("Master Chief");
	Enemy		*a = new SuperMutant;
	Enemy		*b = new T_Rex;
	Enemy		c(*b);
	AWeapon		*ft = new FlameThrower;

	std::cout << *mc;
	mc->attack(a);
	mc->equip(ft);
	std::cout << *mc;
	mc->attack(a);
	mc->attack(a);
	std::cout << *mc;

	mc->attack(b);
	std::cout << *mc;

	mc->recoverAP();
	mc->recoverAP();
	std::cout << *mc;
	mc->attack(b);
	std::cout << *mc;

	mc->recoverAP();
	mc->recoverAP();
	mc->recoverAP();
	mc->recoverAP();
	mc->recoverAP();
	mc->recoverAP();
	std::cout << *mc;

	mc->attack(b);
	mc->attack(b);
	mc->recoverAP();
	mc->recoverAP();
	mc->recoverAP();
	mc->recoverAP();

	mc->attack(&c);
	mc->attack(&c);

	delete (mc);
	delete (ft);
}

static void		mainTests(void)
{
	Character *me = new Character("me");

	std::cout << *me;

	Enemy *b = new RadScorpion();

	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	delete (me);
	delete (pr);
	delete (pf);
}

int				main(void)
{
	mainTests();
	std::cout << std::endl;
	extraTests();

	return (0);
}

