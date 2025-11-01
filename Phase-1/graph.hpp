#ifndef GRPAH_HPP
#define GRAPH_HPP
#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>

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

class graph{
public:
    std::vector<Node> nodes;
    std::unordered_map<int, std::unordered_map<int, Edge>> adjaceny_list;

    void addNode(const Node& node);
    void addEdge(const Edge& edge);

    
};
#endif