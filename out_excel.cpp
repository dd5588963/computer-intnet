#include"class.h"
void Graph_DG::out_excel(int numb) //输出指定路由器的路由表
{
	/*ofstream fout("3.txt");*/
	cout << "目的网络号" << '\t' << "下一跳（路由器序号）" << endl;
	for (int i = 0; i < vexnum; i++) {
		if (dis[i].path.length() == 7)
		{

			if (dis[i].exist==false)cout << i + 1 << ".x.x.x" << '\t' << '\t' << "-" << endl;
			else if(dis[i].path.at(6)-'0'==numb)cout<< i + 1 << ".x.x.x" << '\t' << '\t' << "自己" << endl;
			else cout << i + 1 << ".x.x.x" << '\t' << '\t' << dis[i].path.at(6) << endl;
		}
		if (dis[i].path.length() > 7) {
			if (dis[i].exist == false)cout << i + 1 << ".x.x.x" << '\t' << '\t' << "-" << endl;
			else if (dis[i].path.at(7) == '-')cout << i + 1 << ".x.x.x" << '\t' << '\t' << dis[i].path.at(6) << endl;
			else cout << i + 1 << ".x.x.x" << '\t' << '\t' << dis[i].path.at(6) << dis[i].path.at(7) << endl;
		}
		/*fout << i + 1 << ".x.x.x" << '\t' << '\t' << dis[i].path.at(6) << endl;*/
	}
}