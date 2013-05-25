logger.c
========

super simple C logger

## install

with [cpm](https://github.com/visionmedia/cpm):

```sh
$ cpm install jwerle/logger.c
```

from source:

```sh
$ git clone git@github.com:jwerle/logger.c.git
```

## usage

```c
#include "logger.h"

int
main (void) {
  logger_t *logger = logger_new("logger");
  logger->log("log");
  logger->info("info");
  logger->debug("debug");
  logger->warn("warn");
  logger->error("error");
}
```

## api

```c
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
```

## license

MIT