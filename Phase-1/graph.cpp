#include "graph.hpp"

void Graph::addNode(const Node& node) {
    node_list.insert({node.id,node});
    adjacency_list.insert({node.id,std::unordered_map<int,Edge>()});
}

void Graph::addEdge(const Edge& edge) {
    edge_list.insert({edge.id,edge});
    adjacency_list[edge.u].insert({edge.v,edge});
}

Edge Graph::removeEdge(int id) {
    Edge edge=edge_list[id];
    adjacency_list[edge.u].erase(edge.v);
    edge_list.erase(id);
}