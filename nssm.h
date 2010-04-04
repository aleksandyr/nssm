#ifndef NSSM_H
#define NSSM_H

#define _WIN32_WINNT 0x0500
#include <stdarg.h>
#include <stdio.h>
#include <windows.h>
#include "event.h"
#include "registry.h"
#include "service.h"
#include "gui.h"

int str_equiv(const char *, const char *);

#define NSSM "nssm"
#define NSSM_VERSION "2.2"
#define NSSM_DATE "2010-04-04"
#define NSSM_RUN "run"

#endif