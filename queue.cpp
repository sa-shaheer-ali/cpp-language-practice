#include <iostream>
#include <string>
#include <queue>

int main() {
    std::queue<std::string> q;
    q.push("roshandil");
    q.push("hamara hero");
    q.push("snow");

    // Iterate over the queue and print each element
    while (!q.empty()) {
        std::cout << q.front() << std::endl; // Output the front element
        q.pop(); // Remove the front element
    }

    return 0;
}
