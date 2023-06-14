#include <iostream>
using namespace std;

class seseorang {
public:
    virtual void pesan() = 0;
    // virtual void pesan(){
    //      cout <<"pesan dari seseorang"<<edl;
    // }
};

class joko : public seseorang {
public:
    void pesan() {
        cout << "Pesan dari Joko" << endl;

    }
};

class lia : public seseorang {
public:
    void pesan() {
        cout << "Pesan dari Lia" << endl;
    }
};



int main()
{
    seseorang* obyek;
    joko a;
    lia b;

    obyek = &a;
    obyek->pesan();
    obyek = &b;
    obyek->pesan();
    // a.seseorang::pesan();

    return 0;
}