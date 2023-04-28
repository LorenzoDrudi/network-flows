#include "EdmondsKarpResult.h"

namespace dto {
    EdmondsKarpResult::EdmondsKarpResult(std::shared_ptr<data_structures::graph> graph, int max_flow) {
        this->graph = graph;
        this->max_flow = max_flow;
    }

    std::shared_ptr<data_structures::graph> EdmondsKarpResult::getGraph() const {
        return this->graph;
    }

    int EdmondsKarpResult::getMaxFlow() const {
        return this->max_flow;
    }
}