// SPDX-License-Identifier: Apache-2.0
// Copyright (C) 2024, Advanced Micro Devices, Inc. All rights reserved.

#ifndef _SHIMTEST_IO_PARAM_H_
#define _SHIMTEST_IO_PARAM_H_

// Global test parameters/configurations for all I/O test cases
struct {
#define IO_TEST_NO_PERF       0
#define IO_TEST_LATENCY_PERF  1
#define IO_TEST_THRUPUT_PERF  2
  int perf;
#define IO_TEST_NORMAL_RUN    0
#define IO_TEST_NOOP_RUN      1
#define IO_TEST_BAD_RUN       2
  int type;
  bool debug;
} io_test_parameters;

#endif // _SHIMTEST_IO_PARAM_H_
