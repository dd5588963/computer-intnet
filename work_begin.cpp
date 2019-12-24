#include"class.h"
void Graph_DG::work_begin(int begin) {
	int i;
	for (i = 0; i < this->vexnum; i++) {
		//设置当前的路径
		dis[i].path = "v" + to_string(begin) + "-->v" + to_string(i + 1);
		dis[i].value = arc[begin - 1][i];
		dis[i].visit = false;
	}
	//设置起点路由器的到末点路由器的路径为0
	dis[begin - 1].value = 0;
	dis[begin - 1].visit = true;
}