#pragma once

#include <string>

struct Task
{
    int id;
    std::string name;
    int period_ms;
    int wcet_ms;
    int relative_deadline_ms;
    int priority;

    Task(
        int task_id,
        const std::string& task_name,
        int task_period_ms,
        int task_wcet_ms,
        int task_relative_deadline_ms,
        int task_priority
    )
        : id(task_id),
          name(task_name),
          period_ms(task_period_ms),
          wcet_ms(task_wcet_ms),
          relative_deadline_ms(task_relative_deadline_ms),
          priority(task_priority)
    {
    }
};