#include <vector>

#include "core/task.hpp"
#include "core/simulation_engine.hpp"

int main()
{
    std::vector<Task> tasks = {
        Task(1, "SensorTask", 10, 2, 10, 3),
        Task(2, "ControlTask", 20, 5, 20, 2),
        Task(3, "TelemetryTask", 50, 8, 50, 1)
    };

    SimulationEngine engine(tasks, 50);

    engine.run();

    return 0;
}