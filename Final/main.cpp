#include <iostream>

#include "graph.cpp"

int main() {

    int Vertices = 6;
    Graph g(Vertices); // how to dynamically update vertices once more are created ?? change vertices to match number of vertices ??

    g.addVertex("Home"); // id 0
    g.addVertex("Store"); // id 1
    g.addVertex("School"); // id 2...
    g.addVertex("Gym");
    g.addVertex("Work");
    g.addVertex("Park");
    

    // g.addVertex("Cafe");
    // g.addVertex("Restaurant");
    // g.addVertex("Pool");

/*
    g.addEdge("Home", "Store", 30);
    g.addEdge("Home", "Gym", 10);
    g.addEdge("Gym", "Store", 20);
    g.addEdge("Store", "School", 10);
    g.addEdge("Work", "School", 40);
*/

    g.addEdge("Home", "Store", 20);
    g.addEdge("Home", "School", 50);
    g.addEdge("Home", "Gym", 30);
    g.addEdge("School", "Work", 50);
    g.addEdge("Work", "Gym", 20);
    g.addEdge("Gym", "Park", 60);
    g.addEdge("Store", "Park", 70);
    
    g.print();

    g.shortestPath("Home");

    return 0;
}
