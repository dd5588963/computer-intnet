#include"class.h"
void Graph_DG::out_excel() //���ָ��·������·�ɱ�
{
	ofstream fout("3.txt");
	fout << "Ŀ�������" << '\t' << "��һ����·������ţ�" << endl;
	for (int i = 0; i < vexnum; i++) {
		if (dis[i].path.length() == 7)fout << i + 1 << ".x.x.x" << '\t' << '\t' << dis[i].path.at(6) << endl;
		if (dis[i].path.length() > 7) {
			if (dis[i].path.at(7) == '-')fout << i + 1 << ".x.x.x" << '\t' << '\t' << dis[i].path.at(6) << endl;
			else fout << i + 1 << ".x.x.x" << '\t' << '\t' << dis[i].path.at(6) << dis[i].path.at(7) << endl;
		}
		/*fout << i + 1 << ".x.x.x" << '\t' << '\t' << dis[i].path.at(6) << endl;*/
	}
}