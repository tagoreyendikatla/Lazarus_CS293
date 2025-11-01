#ifndef GRPAH_HPP
#define GRAPH_HPP
#include<iostream>
#include<vector>
#include<string>

class Node{
    int id;
    double lat, lon;
    std::vector<std::string> pois;
};

class Edge{
    int id;
    int u, v;
    double length, average_time;
    std::vector<double> speed_profile;
    bool oneway;
    std::string road_type;
};

class graph{
    std::vector<Node> nodes;
    std::vector<std::vector<Edge>> adjaceny_list;

    void addNode(const Node& node);
    void addEdge(const Edge& edge);
};
#endif