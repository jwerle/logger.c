
/**
 * test.c
 *
 * Copyright (c) 2013 Joseph Werle <joseph@werle.io>
 */

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "logger.h"

int
main () {
	logger_t *test_logger = logger_new("test");
	assert(test_logger);
	assert(test_logger->name == "test");
	test_logger->log("log");
	test_logger->info("info");
	test_logger->debug("debug");
	test_logger->error("error");
	logger_free(test_logger);
}