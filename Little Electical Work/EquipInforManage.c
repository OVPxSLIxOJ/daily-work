#include<stdio.h>
struct Application
{
	char name[20];
	int W;
	int V;
	int num;
};
int TotalPower(struct Application* o, struct Application* p, struct Application* q)
{
	int total = 0;
	total += o->W * o->num;
	total += p->W * p->num;
	total += q->W * q->num;
	return total;
}
int main()
{
	struct Application app1 = { "空调", 2000, 220, 2 };
	struct Application app2 = { "冰箱", 150, 220, 1 };
	struct Application app3 = { "电脑", 300, 220, 3 };
	struct Application* o = &app1;
	struct Application* p = &app2;
	struct Application* q = &app3;
	printf("%dW\n", TotalPower(o, p, q));
	printf("设备名称 : %s    功率 : %dW   电压 : %dV  数量 : %d\n", (*o).name, (*o).W, (*o).V, (*o).num);
	printf("设备名称 : %s    功率 : %dW   电压 : %dV  数量 : %d\n", (*p).name, (*p).W, (*p).V, (*p).num);
	printf("设备名称 : %s    功率 : %dW   电压 : %dV  数量 : %d\n", (*q).name, (*q).W, (*q).V, (*q).num);
	return 0;
}