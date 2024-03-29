#pragma once
#include <iostream>
#include "Gun.h"

class Soldier
{
public:
    Soldier(std::string name);
    ~Soldier();
    void addGun(Gun *ptr_gun);
    void addBulletToGun(int num);
    bool fire();

private:
    std::string m_name;
    Gun *m_ptr_gun;
};