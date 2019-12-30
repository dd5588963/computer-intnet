#include"class.h"
void Graph_DG::delnode(int numb) {
	if (dis[numb - 1].exist == false)
	{
		cout << "此路由器不存在";
		return;
	}

	else {
		
		for (int i = 0; i < vexnum; i++) {
			arc[i][numb - 1] = INT_MAX;
			arc[numb - 1][i] = INT_MAX;
		}
	}
	
}