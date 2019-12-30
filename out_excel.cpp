#include"class.h"
void Graph_DG::out_excel(int numb) //输出指定路由器的路由表
{
	/*ofstream fout("3.txt");*/
	if (dis[numb - 1].exist == false) {
		cout << "此路由器不存在"<<endl; return;
	}
	cout << "目的网络号" << '\t' << "下一跳（路由器序号）" << endl;
	if (numb < 10) {
		if (dis[numb - 1].exist == false) {
			for (int i = 0; i < vexnum; i++) {
				cout << i + 1 << ".x.x.x" << '\t' << '\t' << "-" << endl;
			}
		}
		else {
			for (int i = 0; i < vexnum; i++) {

				if (dis[i].path.length() == 7)
				{

					if (dis[i].exist == false)cout << i + 1 << ".x.x.x" << '\t' << '\t' << "-" << endl;
					else if (dis[i].path.at(6) - '0' == numb)cout << i + 1 << ".x.x.x" << '\t' << '\t' << "自己" << endl;
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
	}
	else {
		if (dis[numb - 1].exist == false) {
			for (int i = 0; i < vexnum; i++) {
				cout << i + 1 << ".x.x.x" << '\t' << '\t' << "-" << endl;
			}
		}
		else {
			for (int i = 0; i < vexnum; i++) {
				if(dis[i].value==INT_MAX){ cout << i + 1 << ".x.x.x" << '\t' << '\t' << "-" << endl; }

				else if (dis[i].path.length() == 8)
				{

					if (dis[i].exist == false)cout << i + 1 << ".x.x.x" << '\t' << '\t' << "-" << endl;
					else if (dis[i].path.at(7) - '0' == numb)cout << i + 1 << ".x.x.x" << '\t' << '\t' << "自己" << endl;
					else cout << i + 1 << ".x.x.x" << '\t' << '\t' << dis[i].path.at(7) << endl;
				}
				else if (dis[i].path.length() > 8) {
					if (dis[i].exist == false)cout << i + 1 << ".x.x.x" << '\t' << '\t' << "-" << endl;
					else if (dis[i].path.at(8) == '-')cout << i + 1 << ".x.x.x" << '\t' << '\t' << dis[i].path.at(7) << endl;
					else cout << i + 1 << ".x.x.x" << '\t' << '\t' << dis[i].path.at(7) << dis[i].path.at(8) << endl;
				}
				/*fout << i + 1 << ".x.x.x" << '\t' << '\t' << dis[i].path.at(6) << endl;*/
			}
		}
	}
}