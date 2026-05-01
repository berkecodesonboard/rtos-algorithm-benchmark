#pragma once

#include <vector>

#include "core/task.hpp"
#include "core/job.hpp"

class SimulationEngine
{
public:
    SimulationEngine(const std::vector<Task>& tasks, int simulation_time_ms);

    void run();

private:
    void release_jobs(int current_time_ms);

private:
    std::vector<Task> tasks_;
    std::vector<Job> ready_jobs_;
    int simulation_time_ms_;
};