#include<iostream>
#include<set>
#include<unordered_map>
//#include<algorithm>
using namespace std;

typedef struct nodes {
    std::string name;
    std::string dest;
    int cost;
    int heuristic;
}node;

class Graph {
    int n;
    std::unordered_map<std::string, node>* nodesMap;
    std::vector<std::string>* edges;
private:

public:
    Graph() {
        n = 0;
    }

    Graph(int nodeCount) {
        n = nodeCount;
        nodesMap = new unordered_map<std::string, node>;
        edges = new std::vector<std::string>;
    }

    void showList()
    {
        std::vector<std::string> tempvector = *edges;
        unordered_map<std::string, node> tempMap = *nodesMap;
        for (int i = 0; i < tempvector.size(); i++)
        {
            // std::cout << tempMap[tempvector[i]].cost << ' ';
            cout << "(" << tempvector[i] << ")---(" << tempMap[tempvector[i]].name << "|" << tempMap[tempvector[i]].dest << "|" << tempMap[tempvector[i]].cost << "|" << tempMap[tempvector[i]].heuristic << ") " << std::endl;
        }





    }
    /*void showList() {
        unordered_map<std::string, node> tempMap = *nodesMap;
        unordered_map<std::string, node> ::iterator i;
        node tempNode;

        for (i = tempMap.begin(); i != tempMap.end(); i++) {
            tempNode = i->second;
            cout << "(" << i->first << ")---(" << tempNode.name << "|" << tempNode.dest << "|" << tempNode.cost << "|" << tempNode.heuristic << ") "<<std::endl;
        }
        cout << endl;
    }*/
    void addEdge(std::string source, std::string dest, int cost, int hueristic) {
        //std::vector<std::string> edges;
        std::string nodeName;
        node newNode;
        newNode.dest = dest;
        newNode.cost = cost;
        newNode.heuristic = hueristic;
        newNode.name = source;
        nodeName = source + dest;
        //nodesMap[source] = node{ dest, cost, hueristic };
        edges->push_back(nodeName);
        nodesMap->insert({ nodeName, newNode });
    }

    friend void AStar(Graph g, int* dist, int start);
    friend void paths(Graph g, std::string node, int* dist, std::vector<std::string>* Q);
};
void paths(Graph g, std::string node, int* dist, std::vector<std::string>* Q)
{
    int totalDistance = 999;

    int totalWDistance = 999;
    int tempDist = 0;
    int tempWDist = 0;
    std::string shortestedge;

    std::unordered_map<std::string, int> RANKS;

    for (int i = 0; i < (*g.edges).size(); i++)
    {
        //cout << "looking for " << a[j] << " in " << (*g.nodesMap)[(*g.edges)[i]].name << endl;

        if ((*g.nodesMap)[(*g.edges)[i]].name == node)
        {
            int tempDist = 0;
            int tempWDist = 0;
            // std::cout << node << "  is in " << ((*g.edges)[i]) << endl;
            cout << "the distance from " << (*g.nodesMap)[(*g.edges)[i]].name << " to " << (*g.nodesMap)[(*g.edges)[i]].dest << " is ";
            tempDist += (*g.nodesMap)[(*g.edges)[i]].cost;
            tempWDist = tempDist + (*g.nodesMap)[(*g.edges)[i]].heuristic;
            if (tempWDist < totalWDistance)
            {
                cout << " i am here with values " << tempDist;
                totalDistance = tempDist;
                totalWDistance = tempWDist;
                shortestedge = (*g.edges)[i];
            }
            cout << tempDist << " and the w dist is " << tempWDist;
        }
    }
    cout << "the shortes distance is " << totalDistance << " and the w is " << totalWDistance << " at edge " << shortestedge << endl;
    *dist += totalDistance;
    Q->push_back((*g.nodesMap)[shortestedge].dest);
}
void AStar(Graph g, int* dist, int start)
{
    // std::vector<std::string> tempvector = *g.edges;
    std::vector<std::string> Q;
    const static int size = g.n;
    std::vector<std::string> a = { "S","A","B","C","D","E" };
    Q.push_back(a[0]);
    for (int i = 0; i < size && Q[Q.size() - 1] != a[size - 1]; i++)
    {
        paths(g, Q[i], dist, &Q);
    }
    /*paths(g, Q[0], dist, &Q);
    paths(g, Q[1], dist, &Q);
    paths(g, Q[2], dist, &Q);*/
    cout << endl << "the size of the q is " << Q.size() << endl << endl;
    cout << "the shortest path is ";
    for (int k = 0; k < Q.size(); k++)
    {
        cout << Q[k] << " ";

    }
    cout << "with total distance " << *dist << endl;


}

void main() {
    const int n = 6;
    Graph g(n);
    int dist=0;
    int start = 0;

    g.addEdge("S", "A", 1, 3);
    g.addEdge("S", "E", 10, 0);
    g.addEdge("A", "B", 4, 4);
    g.addEdge("A", "C", 1, 2);
    g.addEdge("B", "D", 5, 6);
    g.addEdge("C", "D", 3, 6);
    g.addEdge("C", "E", 4, 0);
    g.addEdge("D", "E", 2, 0);

    AStar(g, &dist, start);
    g.showList();
   /* for (int i = 0; i < n; i++)
        if (i != start)
            cout << start << " to " << i << ", Cost: " << dist[i] << " Previous: " << prev[i] << endl;*/
}