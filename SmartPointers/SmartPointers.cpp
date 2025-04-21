#include <iostream>
#include <memory>

int g = 10;

template<typename T>

struct smart_ptr {
    smart_ptr() = default;
    smart_ptr(T* p) {
        this->p = p;
    }
    ~smart_ptr() {
        delete p;
    }

    T* operator &() { return p; }
    T dereference() { return *p; }
    T& operator * () { return *p; }

    T* p = nullptr;
};

int main(){

    int i = 5;
    int* p = &i;

    {
        smart_ptr<int> sptr{new int(10)};
        //std::cout << *sptr << std::endl;
        *sptr = 20;

        smart_ptr<double> sptr1{new double(3.14159265358979323846264338327950f) };
        //std::cout << sptr1.dereference() << std::endl;
        std::cout << &sptr1 << std::endl;

    }
    std::unique_ptr<int> uptr = std::make_unique<int>(5);
    std::cout << *uptr << std::endl;

    //std::unique_ptr<int> uptr2 = uptr;

    std::shared_ptr<int> sharedptr = std::make_shared<int>(69);
    std::cout << sharedptr.use_count() << std::endl;
    std::shared_ptr<int> sharedptr2 = sharedptr;
    std::cout << sharedptr.use_count() << std::endl;
    std::shared_ptr<int> sharedptr3 = sharedptr;
    std::cout << sharedptr.use_count() << std::endl;
}
