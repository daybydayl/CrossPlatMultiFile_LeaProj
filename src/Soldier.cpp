#include "../include/Soldier.h"

Soldier::Soldier(std::string name)
{
    this->m_name = name;
    this->m_ptr_gun = nullptr;
}

void Soldier::addGun(Gun *ptr_gun)
{
    this->m_ptr_gun = ptr_gun;
}

void Soldier::addBulletToGun(int num)
{
    this->m_ptr_gun->addBullet(num);
}

bool Soldier::fire()
{
    return this->m_ptr_gun->shoot();
}

Soldier::~Soldier()
{
    if(this->m_ptr_gun == nullptr)
    {
        return;
    }
    delete this->m_ptr_gun;
    this->m_ptr_gun = nullptr;
}