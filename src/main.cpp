#include <iostream>
#include <vector>

#include "core/task.hpp"

void print_task_summary(const Task& task)
{
    std::cout << task.name
              << " period=" << task.period_ms
              << " wcet=" << task.wcet_ms
              << " deadline=" << task.relative_deadline_ms
              << " priority=" << task.priority
              << "\n";
}

int main()
{
    std::vector<Task> tasks = {
        Task(1, "SensorTask", 10, 2, 10, 3),
        Task(2, "ControlTask", 20, 5, 20, 2),
        Task(3, "TelemetryTask", 50, 8, 50, 1)
    };

    std::cout << "Loaded tasks:\n";

    for (const Task& task : tasks)
    {
        print_task_summary(task);
    }

    return 0;
}