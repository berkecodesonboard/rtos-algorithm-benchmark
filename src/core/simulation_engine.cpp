#include "core/simulation_engine.hpp"

#include <iostream>

SimulationEngine::SimulationEngine(const std::vector<Task>& tasks, int simulation_time_ms)
    : tasks_(tasks),
      simulation_time_ms_(simulation_time_ms)
{
}

void SimulationEngine::run()
{
    std::cout << "Simulation starting...\n";

    for (int current_time_ms = 0; current_time_ms <= simulation_time_ms_; ++current_time_ms)
    {
        std::cout << "t=" << current_time_ms << "\n";
    }
}