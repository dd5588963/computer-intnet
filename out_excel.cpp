#include"class.h"
void Graph_DG::out_excel(int numb) //���ָ��·������·�ɱ�
{
	/*ofstream fout("3.txt");*/
	cout << "Ŀ�������" << '\t' << "��һ����·������ţ�" << endl;
	for (int i = 0; i < vexnum; i++) {
		if (dis[i].path.length() == 7)
		{

			if (dis[i].exist==false)cout << i + 1 << ".x.x.x" << '\t' << '\t' << "-" << endl;
			else if(dis[i].path.at(6)-'0'==numb)cout<< i + 1 << ".x.x.x" << '\t' << '\t' << "�Լ�" << endl;
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