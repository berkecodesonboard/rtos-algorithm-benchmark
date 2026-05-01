#pragma once

#include <string>

#include "core/task.hpp"
#include "core/types.hpp"

struct Job
{
    int task_id;
    std::string task_name;
    int release_time_ms;
    int absolute_deadline_ms;
    int remaining_time_ms;
    int priority;
    TaskState state;

    Job(const Task& task, int job_release_time_ms)
        : task_id(task.id),
          task_name(task.name),
          release_time_ms(job_release_time_ms),
          absolute_deadline_ms(job_release_time_ms + task.relative_deadline_ms),
          remaining_time_ms(task.wcet_ms),
          priority(task.priority),
          state(TaskState::Ready)
    {
    }
};