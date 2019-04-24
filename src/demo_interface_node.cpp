#include "panda_pbd/demo_interface.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "demo_interface_node");
  DemoInterface node;

  // The MultiThreadedSpinner allows for multiple callbacks at the same time
  // TODO: this makes the node NOT thread safe
  ros::MultiThreadedSpinner spinner(4);
  spinner.spin();
}