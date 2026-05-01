#pragma once

#include <vector>

#include "core/task.hpp"

class SimulationEngine
{
public:
    SimulationEngine(const std::vector<Task>& tasks, int simulation_time_ms);

    void run();

private:
    std::vector<Task> tasks_;
    int simulation_time_ms_;
};