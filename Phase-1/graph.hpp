#ifndef GRPAH_HPP
#define GRAPH_HPP
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

class Node{
public:
    int id;
    double lat, lon;
    std::vector<std::string> pois;
};

class Edge{
public:
    int id;
    int u, v;
    double length, average_time;
    std::vector<double> speed_profile;
    bool oneway;
    std::string road_type;
};

class Graph{
    std::unordered_map<int,Node> node_list;
    std::unordered_map<int,std::unordered_map<int,Edge>> adjacency_list;
    std::unordered_map<int,Edge> edge_list;

    void addNode(const Node& node);
    void addEdge(const Edge& edge);
    Node removeNode(int id);
    Edge removeEdge(int id);
    Edge modifyEdge();
};
#endif