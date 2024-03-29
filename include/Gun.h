#pragma once
#include <iostream>
#include <string>

class Gun
{
public:
    Gun(std::string type){
        this->m_bullet_count = 0;
        this->m_type = type;
    }

    void addBullet(int bullet_num);
    bool shoot();

private:
    int m_bullet_count;
    std::string m_type;

};