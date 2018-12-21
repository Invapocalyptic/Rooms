#include "Item.h"
/*class Character{
private:
	int health;
	
};


class Room{
private:
    string description;
    string options;
    int DoorNum;
public:
    void enter(){
        cout << "You are in " << desription << endl;
    };
    void exit();
};
*/
int main(int argc, char **argv)
{
	Item i0001(true, 10, "test Item", false)
	cout << i0001.getWeight() << endl;
	return 0;
}
