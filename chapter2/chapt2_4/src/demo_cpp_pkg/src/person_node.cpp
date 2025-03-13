#include<iostream>
#include <string>
#include "rclcpp/rclcpp.hpp"

using namespace std;


class PersonNode : public rclcpp::Node
{
private:
    string name;
    int age;

public:
    PersonNode(const string &node_name, 
        const string &name, 
        const int &age)
        : Node(node_name), name(name), age(age)
    {
        RCLCPP_INFO(this->get_logger(), "Name: %s, Age: %d", name.c_str(), age);
    };

    void eat(const string &food)
    {
        RCLCPP_INFO(this->get_logger(), "%s is eating %s", name.c_str(), food.c_str());
    };
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = make_shared<PersonNode>("person_node", "Alice", 25);
    node->eat("apple");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
