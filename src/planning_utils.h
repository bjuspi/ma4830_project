#ifndef MA4830_PROJECT_PLANNING_UTILS_H
#define MA4830_PROJECT_PLANNING_UTILS_H
#include <stdbool.h>
#include "data_structure.h"

/**
 * A function to check if a trajectory is collision-free.
 * @param launchConfig represents the mortar's launch configuration.
 * @param terrain represents the obstacle information.
 * @return whether the trajectory is free from collision or not.
 */
bool is_collision_free_trajectory(const LaunchConfig *launchConfig, const ObstacleInfo *terrain);

/**
 * A function to compute the trajectory angle to hit a target.
 * @param launchConfig represents the mortar's launch configuration.
 * @param distance of the target from the mortar.
 * @param angles contains an array of feasible angles.
 * @return the status of the function result.
 */
FunctionStatus compute_trajectory_angle_to_hit_target(const LaunchConfig *launchConfig, double distance,
                                                      double *angles);

/**
 * A function to get all trajectories that are feasible to hit the target.
 * @param launchConfigArr represents the launch configuration whose angle to be computed to hit the target.
 * @param lengthOfArr represents the length of the launch configuration array.
 * @param distance of the target from the mortar.
 * @return the status of the function result.
 */
FunctionStatus get_all_trajectories_that_hit_target_by_speed(LaunchConfig* launchConfigArr, int lengthOfArr,
                                                             double distance);

/**
 * A function to get collision-free trajectories from the launch configurations given.
 * @param launchConfigArr represents an array of launch configurations.
 * @param lengthOfArr represents the size of the launch configuration array.
 * @param terrain represents the obstacle information.
 * @return the status of the function result.
 */
FunctionStatus get_collision_free_trajectories(LaunchConfig *launchConfigArr, int lengthOfArr, const ObstacleInfo *terrain);
#endif
