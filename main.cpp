#include "include/Gun.h"
#include "include/Soldier.h"

#ifdef _WIN32
    #include <windows.h>
#else
    #include <ctime>

#endif // !_WIN32

void main_entry()
{
    Soldier sanduo("xusanduo");
    sanduo.addGun(new Gun("AK47"));
    sanduo.addBulletToGun(20);
    sanduo.fire();
}

int main()
{
    int tmp = 1;

    // 声明变量存储当前时间
#ifdef _WIN32
    SYSTEMTIME currentTime;
#else
    time_t now;
#endif

#ifdef _WIN32
    // Windows系统下获取当前系统时间
    GetLocalTime(&currentTime);
    std::string str;
    str.append(std::to_string(currentTime.wYear));
    str.append("/");
    str.append(std::to_string(currentTime.wMonth));
    str.append("/");
    str.append(std::to_string(currentTime.wDay));
    str.append(" ");
    str.append(std::to_string(currentTime.wHour));
    str.append(":");
    str.append(std::to_string(currentTime.wMinute));
    str.append(":");
    str.append(std::to_string(currentTime.wSecond));

    std::cout << "Windows Current time is:" << str << std::endl;
#else
    // Linux系统下获取当前时间戳
    time(&now);

    // 使用 ctime 函数将时间戳转换为字符串格式
    char* currentTime = ctime(&now);

    // 打印当前时间
    std::cout << "Current time in Linux: " << currentTime;
#endif

    std::cout << "测试的a值为：" << tmp << std::endl;
    main_entry();
    return 0;
}