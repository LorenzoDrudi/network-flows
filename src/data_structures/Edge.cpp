#include "Edge.h"

#include <iostream>

namespace data_structures {
    Edge::Edge(const int head, const int tail, const int capacity, const int cost) :
        head(head),
        tail(tail),
        capacity(capacity),
        cost(cost) {}


    int Edge::GetHead() {
        return this->head;
    }

    int Edge::GetTail() {
        return this->tail;
    }

    int Edge::GetCapacity() {
        return this->capacity;
    }

    int Edge::GetCost() {
        return this->cost;
    }

    void Edge::ToString() {
        printf("Edge: head = %d, tail = %d, capacity = %d, cost = %d", head, tail, capacity, cost);
    }

    bool Edge::operator==(const Edge& other) const {
        if (this == &other) {
            return true;
        }
        if (this == nullptr || &other == nullptr) {
            return false;
        }
        return head == other.head && tail == other.tail && capacity == other.capacity && cost == other.cost;
    }

    bool Edge::operator!=(const Edge& other) const {
        return !(*this == other);
    }
}