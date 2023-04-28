#ifndef MINIMUM_COST_FLOWS_PROBLEM_GRAPHBASEALGORITHMS_H
#define MINIMUM_COST_FLOWS_PROBLEM_GRAPHBASEALGORITHMS_H

#include "data_structures/graph/Graph.h"
#include "dto/BellmanFord/BellmanFordResult.h"

namespace algorithms {
    /**
     * Class containing the following graph base algorithms:
     * - BFS (Breadth-first search) -> used to find the path from source to sink.
     * - Bellman-Ford -> used to get the shortest path from source to any other node,
     *                   also it is used to detect negative cycles.
     */
    class GraphBaseAlgorithms {
    public:
        /**
         * BFS algorithm.
         * Breadth-first search (BFS) is an algorithm for traversing
         * or searching tree or graph data structures.
         * Return true if there is a path from source to sink, false otherwise.
         * Also it fills the parent array with the path from source to sink.
         *
         * https://en.wikipedia.org/wiki/Breadth-first_search
         *
         * @param graph  the graph to solve
         * @param source the source node
         * @param sink   the sink node
         * @param parent the parent of each node (used to reconstruct the path)
         * 
         * @return true if there is a path from source to sink, false otherwise
         */
        static bool BFS(std::shared_ptr<data_structures::graph> graph, int source, int sink, std::shared_ptr<std::vector<int>> parent);

        /**
         * Bellman-Ford algorithm used to detect negative cycles.
         * Bellman-Ford algorithm is an algorithm that computes shortest paths from a single source vertex.
         * Return the the distance from source to every other node and the parent array if there is no 
         * negative cycle, else return the negative cycle.
         *
         * (see https://en.wikipedia.org/wiki/Bellman%E2%80%93Ford_algorithm)
         *
         * @param graph  the graph to solve
         * @param source the source node
         * 
         * @return the result of the algorithm (see BellmanFordResult.h
         */
        static std::shared_ptr<dto::BellmanFordResult> BellmanFord(std::shared_ptr<data_structures::graph> graph, int source);
    };
}

#endif //MINIMUM_COST_FLOWS_PROBLEM_GRAPHBASEALGORITHMS_H
