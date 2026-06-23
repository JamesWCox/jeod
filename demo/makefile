

# Required environment variables
# ------------------------------
# The following environment variables must be set to use JEOD in conjunction
# with the Trick simulation environment.
# 
#   JEOD_HOME             The JEOD_HOME environment variable must point to the
#                         top-level JEOD directory (i.e., the directory that
#                         contains this README_jeod file).
# 
#   TRICK_CFLAGS          The TRICK_CFLAGS & TRICK_CXXFLAGS environment variables
#   TRICK_CXXFLAGS        must add the JEOD models directory to the include path
#                         list. The variable must contain "-I${JEOD_HOME}/models".
# 
#   TRICK_HOME            The adjacent list of three additional Trick environment
#   TRICK_VER             variables is just a partial list of those required by
#   TRICK_HOST_CPU        Trick. Please refer to Trick documentation for details.


TRICK_HOME=$(HOME)/trick
export TRICK_HOME #=$(TRICK_HOME) 
TRICK_VER=19
TRICK_SOURCE=$(TRICK_HOME)/trick_source
TRICK_CFLAGS=
ER7_UTILS_HOME=$(TRICK_SOURCE)/er7_utils
$(info TRICK_HOME=$(TRICK_HOME))
$(info TRICK_SOURCE=$(TRICK_SOURCE))
$(info ER7_UTILS_HOME=$(ER7_UTILS_HOME))
#--------

JEOD_HOME ?= $(realpath $(CURDIR)/../jeod/)

# Generalized S_override.mk file
# Sets trick compilation flags and builds ephemeris binary files
#include $(JEOD_HOME)/bin/jeod/generic_S_overrides.mk
TRICK_CFLAGS += -g
TRICK_CXXFLAGS += -g

#JEOD_HOME=$(HOME)/jeod/jeod
export JEOD_HOME
#include $(JEOD_HOME)/bin/jeod/generic_S_overrides.mk
JEOD_LIBDIR=$(JEOD_HOME)/lib
JEOD_MODELS=$(JEOD_HOME)/models
$(info JEOD_HOME=$(JEOD_HOME))
$(info JEOD_LIBDIR=$(JEOD_LIBDIR))
$(info JEOD_MODELS=$(JEOD_MODELS))

#include $(JEOD_HOME)/bin/jeod/unit_test.mk
DEFS:=
DEFS+=-DJEOD_UNIT_TEST

CONFIG_CFLAGS=
COMMON_CFLAGS = $(TRICK_CFLAGS) 
#COMMON_CFLAGS += $(ER7_UTILS_HOME)
GCOV_CFLAGS = 
COMPILE_FLAGS = -I$(JEOD_HOME) -I$(JEOD_MODELS) -I$(JEOD_HOME)/tools \
				$(CONFIG_CFLAGS) $(COMMON_CFLAGS) #$(GCOV_CFLAGS)
LINK_LIBS = -L$(JEOD_LIBDIR) 
#LINK_LIBS += -ljeod -lpthread 
BUILD_OPTS = $(COMPILE_FLAGS) $(LINK_LIBS)

.PHONY: all demo 
all: demo

demo:
	g++  main.cpp  -o bin/demo $(BUILD_OPTS)
#	g++  main.cpp dynamics_init_only.h vehicle_basic.h -o demo $(BUILD_OPTS)


