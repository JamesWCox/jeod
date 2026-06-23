#!/bin/bash 

.PHONY: all demo git-init git-update
all: demo

demo:
	cd demo && make demo

git-init: 
	git submodule update --init --recursive 

git-update:
	git submodule update --recursive
