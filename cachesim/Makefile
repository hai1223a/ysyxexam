NAME := cachesim
BUILD_DIR := $(shell pwd)/build
OBJ_DIR := $(BUILD_DIR)/obj-$(NAME)
BINARY := $(BUILD_DIR)/$(NAME)

CXX := g++
LD := $(CXX)
CXXSRC += $(shell find src -type f -name "*.cpp" )
OBJS := $(CXXSRC:%.cpp=$(OBJ_DIR)/%.o)
CXXFLAGS := -O2 -MMD -Wall -Werror

override ARGS ?= 

$(OBJ_DIR)/%.o: %.cpp
	@echo + CXX $<
	@mkdir -p $(dir $@)
	@$(CXX) $(CXXFLAGS) -c -o $@ $<

# Depencies
-include $(OBJS:.o=.d)

$(BINARY):: $(OBJS)
	@echo + LD $@
	@$(LD) -o $@ $(OBJS) $(LDFLAGS)

run: $(BINARY)
	@$(BINARY) $(ARGS)