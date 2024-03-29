#include "../include/Gun.h"


void Gun::addBullet(int bullet_num)
{
    this->m_bullet_count += bullet_num;
}

bool Gun::shoot()
{
    if(this->m_bullet_count <= 0)
    {
        std::cout << "this is no bullet!" << std::endl;
        return false;
    }

    this->m_bullet_count--;
    std::cout << "shoot successfully!" << std::endl;
    return true;
}