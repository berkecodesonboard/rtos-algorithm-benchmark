#include <iostream>

#include "core/task.hpp"
#include "core/job.hpp"

void print_task(const Task& task)
{
    std::cout << "Task\n";
    std::cout << "  ID: " << task.id << "\n";
    std::cout << "  Name: " << task.name << "\n";
    std::cout << "  Period: " << task.period_ms << " ms\n";
    std::cout << "  WCET: " << task.wcet_ms << " ms\n";
    std::cout << "  Relative Deadline: " << task.relative_deadline_ms << " ms\n";
    std::cout << "  Priority: " << task.priority << "\n";
}

void print_job(const Job& job)
{
    std::cout << "Job\n";
    std::cout << "  Task ID: " << job.task_id << "\n";
    std::cout << "  Task Name: " << job.task_name << "\n";
    std::cout << "  Release Time: " << job.release_time_ms << " ms\n";
    std::cout << "  Absolute Deadline: " << job.absolute_deadline_ms << " ms\n";
    std::cout << "  Remaining Time: " << job.remaining_time_ms << " ms\n";
    std::cout << "  Priority: " << job.priority << "\n";
}

int main()
{
    std::cout << "RTOS Algorithm Benchmark Lab\n";
    std::cout << "Core model test starting...\n\n";

    Task sensor_task(1, "SensorTask", 10, 2, 10, 1);

    Job sensor_job(sensor_task, 20);

    print_task(sensor_task);

    std::cout << "\n";

    print_job(sensor_job);

    return 0;
}