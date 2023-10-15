#include <iostream>
#include <vector>

struct Task {
    std::string name;
    bool completed;
};

void printTasks(const std::vector<Task>& tasks) {
    std::cout << "Tasks:\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << i + 1 << ". " << (tasks[i].completed ? "[X]" : "[ ]") << " " << tasks[i].name << "\n";
    }
}

int main() {
    std::vector<Task> tasks;

    while (true) {
        std::cout << "Task Manager Menu:\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. Mark Task as Completed\n";
        std::cout << "3. List Tasks\n";
        std::cout << "4. Exit\n";

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            std::string taskName;
            std::cout << "Enter the task name: ";
            std::cin.ignore();  // Ignore newline character in the input buffer.
            std::getline(std::cin, taskName);
            tasks.push_back({taskName, false});
        } else if (choice == 2) {
            printTasks(tasks);
            int taskIndex;
            std::cout << "Enter the task number to mark as completed: ";
            std::cin >> taskIndex;
            if (taskIndex > 0 && taskIndex <= tasks.size()) {
                tasks[taskIndex - 1].completed = true;
            } else {
                std::cout << "Invalid task number!\n";
            }
        } else if (choice == 3) {
            printTasks(tasks);
        } else if (choice == 4) {
            break;
        } else {
            std::cout << "Invalid choice!\n";
        }
    }

    return 0;
}
