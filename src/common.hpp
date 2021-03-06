#ifndef _INCLUDE_COMMON_HPP
#define _INCLUDE_COMMON_HPP

#include <mpi.h>

#include <signal.h>

#include <cstdio>

#include <mutex>
#include <condition_variable>
#include <thread>
#include <chrono>
#include <random>

#include <queue>
#include <vector>
#include <map>

using namespace std;

typedef enum {
  WINDMILL = 0,
  HORSE
} Resource;

unsigned random_unsigned(unsigned from, unsigned to);
void random_sleep(unsigned min_ms, unsigned max_ms);

#define DEBUG 1
#define RESOURCE(r) (r == WINDMILL ? "Windmill" : "Horse")
#define BOOLEAN(b) (b ? "true" : "false")

#endif
