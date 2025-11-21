NAME := branchsim
BUILD_DIR := $(shell pwd)/build
OBJ_DIR := $(BUILD_DIR)/obj-$(NAME)
BINARY := $(BUILD_DIR)/$(NAME)

CXX := g++
LD := $(CXX)
CXXSRC += $(shell find src -type f -name "*.cpp" )
INC_PATH := include
INCLUDES = $(addprefix -I, $(INC_PATH))
OBJS := $(CXXSRC:%.cpp=$(OBJ_DIR)/%.o)
CXXFLAGS := -O2 -MMD -Wall -Werror -lm $(INCLUDES)

override ARGS ?= source/test.bin.bz2 10 8 20 4 10 4

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

clean: 
	rm -rf $(BUILD_DIR)