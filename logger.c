
/**
 * logger.c
 *
 * Copyright (c) 2013 Joseph Werle <joseph@werle.io>
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <term.h>
#include "logger.h"

/**
 * creates a new `logger_t`
 */
logger_t *
logger_new (char *name) {
	// create a new logger_t
	logger_t *self = malloc(sizeof(logger_t));
	// set logger name
	self->name = name;

	self->log = logger_log;
	self->info = logger_info;
	self->debug = logger_debug;
	self->warn = logger_warn;
	self->error = logger_error;
	return self;
}

void
logger_log (char *message) {
  printf("  ");
  term_reset();
  puts(message);
}

void
logger_info (char *message) {
	term_color("cyan");
  printf("  info: ");
  term_reset();
  puts(message);
}

void
logger_debug (char *message) {
	term_color("yellow");
  printf("  debug: ");
  term_reset();
  puts(message);
}

void
logger_warn (char *message) {
	term_color("yellow");
  printf("  warn: ");
  term_reset();
  puts(message);
}

void
logger_error (char *message) {
	term_color("red");
  printf("  error: ");
  term_reset();
  puts(message);
}

/**
 * free a logger
 */
void
logger_free (logger_t *logger) {
	free(logger);
}