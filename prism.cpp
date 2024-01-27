//#include <iostream>
//using namespace std;
//
// number of vertices in graph
//#define n 9
//
//print function
//void printMST(int start_e[], int end_e[], int weight[])
//{
//    cout << "edges" << "        " << "weight" << endl;
//
//    for (int i = 0; i < n - 1; i++) {
//        cout << "  " << start_e[i] << "-" << end_e[i] << "          ";
//        cout << weight[i] << endl;
//    }
//}
//
//create function
//void createMST(int G[n][n])
//{
//     total edges in spanning tree are n-1 
//    
//    int weight[n - 1];   // weight of each edge
//    int start_e[n - 1];  //start vertex of edge
//    int end_e[n - 1];    //end vertex of edge
//
//    for (int i = 0; i < n - 1; i++) {
//        weight[i] = 0;
//        start_e[i] = 0;
//        end_e[i] = 0;
//    }
//
//    int e;  // no. of edges
//
//     list of vertex in spanning tree
//    int selected_vertex[n];
//
//    for (int i = 0; i < n; i++) {
//        selected_vertex[i] = 0;
//    }
//
//    e = 0;
//
//     choose 0th vertex and make it true
//    selected_vertex[0] = true;
//
//    int x;  //  temp variable to hold start vertex
//    int y;  //  temp variable to hold end vertex
//
//    while (e < n - 1) { // for all n-1 edges
//
//        int min = 1000;
//        x = 0; // intitially start vertex is zero
//        y = 0; // intitially end vertex is zero
//
//        for (int i = 0; i < n; i++) {  // row wise graph iteration
//            if (selected_vertex[i]) {
//                for (int j = 0; j < n; j++) {  // column wise graph iteration
//                    if (!selected_vertex[j] && G[i][j]) {  // vetrex other than selected vertex and there is an edge between verteices in Graph G
//                        if (min > G[i][j]) { // calculate min distance 
//                            min = G[i][j];
//                            x = i;  // assigning start vertex
//                            y = j; // assigning end vertex
//                        }
//                    }
//                }
//            }
//        }
//
//        selected_vertex[y] = true;
//        start_e[e] = x; // assigning start vertex
//        end_e[e] = y;  // assigning end vertex
//        weight[e] = G[x][y];  // assigning weight to the edge
//
//        e++;
//    }
//    printMST(start_e, end_e, weight);  // print spanning tree
//}
//int main() {
//
//     create a 2d array of size 9x9
//for adjacency matrix to represent graph
//
//    int Graph[n][n] = {
//            {0, 9, 4, 0, 0, 0, 0, 0, 0},
//            {9, 0, 2, 1, 7, 0, 0, 0, 0},
//            {4, 2, 0, 4, 0, 3, 0, 0, 0},
//            {0, 1, 4, 0, 2, 5, 0, 0, 0},
//            {0, 7, 0, 2, 0, 6, 3, 0, 0},
//            {0, 0, 3, 5, 6, 0, 8, 5, 0},
//            {0, 0, 0, 0, 3, 8, 0, 1, 3},
//            {0, 0, 0, 0, 0, 5, 1, 0, 2},
//            {0, 0, 0, 0, 0, 0, 3, 2, 0}
//    };
//     create minimum spanning tree
//    createMST(Graph);
//    return 0;
//}
