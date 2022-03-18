#include <string>
#ifndef PERSONA_H
#define PERSONA_H

using namespace std;

class persona
{
    public:
        persona();
        void menu();
		void insertA();
		void display();
    protected:

    private:
        string id,name,phone,college,address;

};

#endif // PERSONA_H
