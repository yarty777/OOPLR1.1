#include "vyrib.h"
void print(wyrib ob)
{
	cout << "Drue z funkcii: ";
	ob.printWybir();
}
int main()
{
	wyrib item;
	wyrib* item1 = new wyrib;
	wyrib Spis[2];
	item.setwybir("Coke", "A123", 50);
	item1->setwybir("Meth", "M456", 100);

	item1->printWybir();
	item.printWybir();

	delete item1;

	return 0;

}