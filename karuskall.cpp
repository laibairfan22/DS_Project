//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//#define v 5
//class karuskal_algo
//{
//public:
//	int src;
//	int dest;
//	int weight;
//
//	int* result = new int[v - 1];
//};
//bool compare(karuskal_algo k1, karuskal_algo k2)
//{
//	return k1.weight < k2.weight;
//}
//int find(int vertices, int* p)
//{
//	if (p[vertices] == vertices)
//	{
//		return vertices;
//	}
//	return find(p[vertices], p);
//}
//void karuskal(karuskal_algo* data, int vertices, int E)
//{
//	sort(data, data + E, compare);
//	karuskal_algo* result = new karuskal_algo[vertices - 1];
//	int* p = new int[vertices];
//	for (int i = 0; i < vertices; i++)
//	{
//		p[i] = i;
//	}
//	int c = 0, i = 0;
//	while (c != vertices - 1)
//	{
//		karuskal_algo current = data[i];
//		int sp = find(current.src, p);
//		int dp = find(current.dest, p);
//
//		if (sp != dp)
//		{
//			result[c] = current;
//			c++;
//			p[sp] = dp;
//		}
//		i++;
//	}
//	cout << "  Vertices \t                   Weight\n";
//	cout << "----------------------------------------------------------------------\n\n";
//	for (int i = 0; i < v - 1; i++)
//	{
//		cout << "     Source        Destination \n";
//		cout << "     "<<result[i].src << "             " << result[i].dest << "                                 " << result[i].weight << endl;
//	}
//}
//int main()
//{
//
//	cout << "Enter vertices : "; int n; cin >> n;
//	cout << "Enter Edges : "; int e; cin >> e;
//	karuskal_algo* data = new karuskal_algo[e];
//	int sr, de, we;
//	for (int i = 0; i < e; i++)
//	{
//		cout << "--------------------------------------------\n";
//		cout << "Enter data for Edge " << i + 1 << endl;
//		cout << "Enter source: ";
//		cin >> sr;
//		cout  << "Enter dest : ";
//		cin >> de;
//		cout << "Enter weight : ";
//		cin >> we;
//
//		data[i].src = sr;
//		data[i].dest = de;
//		data[i].weight = we;
//	}
//
//	karuskal(data,n, e);
//}