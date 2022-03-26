
DIRS=01 02 03 04 05 06

all:
	for dir in $(DIRS); do \
		make -C $$dir; \
        done;
clean:
	for dir in $(DIRS); do \
		make -C $$dir clean; \
	done
