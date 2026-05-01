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
        release_jobs(current_time_ms);
    }
}

void SimulationEngine::release_jobs(int current_time_ms)
{
    for (const Task& task : tasks_)
    {
        if (current_time_ms % task.period_ms == 0)
        {
            Job job(task, current_time_ms);

            ready_jobs_.push_back(job);

            std::cout << "t=" << current_time_ms
                      << " RELEASE " << job.task_name
                      << " deadline=" << job.absolute_deadline_ms
                      << "\n";
        }
    }
}