#include "graph.hpp"

void Graph::addNode(const Node& node) {
    node_list.insert({node.id,node});
    adjacency_list.insert({node.id,std::unordered_map<int,std::unordered_map<int,Edge>>()});
}

void Graph::addEdge(const Edge& edge) {
    edge_list.insert({edge.id,edge});
    adjacency_list[edge.u][edge.v].insert({edge.id,edge});
    if(!edge.oneway) adjacency_list[edge.v][edge.u].insert({edge.id,edge});
}

Edge Graph::removeEdge(int id) {
    Edge edge=edge_list[id];
    adjacency_list[edge.u][edge.v].erase(id);
    if(!edge.oneway) adjacency_list[edge.v][edge.u].erase(id);
    edge_list.erase(id);
    return edge;
}

Edge Graph::modifyEdge(int id, double length) {
    Edge& edge=edge_list[id];
    edge.length=length;
    adjacency_list[edge.u][edge.v][id].length=length;
    if(!edge.oneway) adjacency_list[edge.v][edge.u][id].length=length;
    return edge_list[id];
}