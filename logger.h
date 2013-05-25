
/**
 * logger.h
 *
 * Copyright (c) 2013 Joseph Werle <joseph@werle.io>
 */

#ifndef LOGGER_H
#define LOGGER_H

/**
 * `log_msg_t` struct type
 */

typedef struct {

	char *msg;

} log_msg_t;


/**
 * `logger_t` struct type
 */

typedef struct  {

	char *name;

	// functions
	void (*log)(char *message);
	void (*info)(char *message);
	void (*debug)(char *message);
	void (*warn)(char *message);
	void (*error)(char *message);
} logger_t;



/**
 * prototypes
 */

logger_t *
logger_new (char *name);

void
logger_log(char *message);

void
logger_info (char *message);

void
logger_debug (char *message);

void
logger_warn (char *message);

void
logger_error (char *message);

void
logger_free (logger_t *logger);

#endif