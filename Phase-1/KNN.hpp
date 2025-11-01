#ifndef KNN_HPP
#define KNN_HPP

#include "Graph.hpp"
#include <vector>
#include <string>

class Result_KNN {
public:
    int id;
    std::vector<int> node_ids; 
};

class KNN {
public:
    Result_KNN findKNN(const Graph& graph, int id, double lat, double lon, const std::string& type, int k, const std::string& metric);

   
    std::vector<int> findKNN_Euclidean(const Graph& graph, double lat, double lon, const std::vector<int>& target_nodes, int k);
    
      
    std::vector<int> findKNN_ShortestPath(const Graph& graph, double lat, double lon, const std::vector<int>& candidate_nodes, int k);
};

#endif