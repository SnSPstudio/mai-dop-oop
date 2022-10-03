#include <iostream>
 
class MySingleton {
public:
    // Функция-член для доступа к единственному экземпляру
    static MySingleton* getInstance() {
        if (instance == nullptr) {
            instance = new MySingleton;
        }        
        return instance;
    }
 
    // Наполняем полезным функционалом, как и любой другой класс
    void test() {
        std::cout << "Singleton test" << std::endl;
    }
 
private:
    // Объявляем конструктор закрытым, чтобы нельзя было
    // создавать экземпляры класса извне
    MySingleton() { }

    static MySingleton* instance;
};

MySingleton* MySingleton::instance = nullptr;
 
int main() {
    // Используем Синглтон
    MySingleton::getInstance()->test();
 
    // А это работать не будет, поскольку конструктор - закрытый
    // MySingleton singleton;
 
    return 0;
}