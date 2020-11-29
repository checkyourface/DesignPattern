#include "Observer.h"
#include "AllyCenter.h"

int main()
{
	// ����һ��ս��
	AllyCenterController* controller = new AllyCenterController();

	// ����4����ң�������ս��
	Player* Jungle = new Player("Jungle");
	Player* Single = new Player("Single");
	Player* Jianmengtu = new Player("������");
	Player* SillyDog = new Player("ɵ�ӹ�");
	controller->join(Jungle);
	controller->join(Single);
	controller->join(Jianmengtu);
	controller->join(SillyDog);

	printf("\n\n");

	// Jungle�������ʣ����ж���
	Jungle->call(RESOURCE, controller);

	printf("\n\n");

	// ɵ�ӹ�����Σ�գ���ȶ���
	SillyDog->call(HELP, controller);

	printf("\n\n");
	system("pause");

	delete controller;
	delete Jungle;
	delete Single;
	delete Jianmengtu;
	delete SillyDog;

	return 0;
}