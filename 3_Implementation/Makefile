# Name of the project
PROJECT_NAME = Movie_Ticket_Booking

# To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
	RM = del /q
	FixPath = $ (subst /.\,$1)
	EXEC = exe
else
	ifeq ($(shell uname),Linux)
		RM = rm -rf
		FixPath = $1
		EXEC = out
	endif
endif

# Output directory
BUILD = build

# All source code files
SRC = main.c\
src/movie_details.c\
src/cmovie.c\
src/login.c\
src/movie.c\
src/movie_details_.c\
src/price_edit.c\
src/reservation_tickets.c\
src/ticket_cancel.c\
src/ticket1.c\
src/ticket2.c\
src/ticket3.c



# All test source files
TEST_SRC = src/cmovie.c\
src/movie_details.c\
src/login.c\
src/movie_details_.c\
src/price_edit.c\
src/movie.c\
src/reservation_tickets.c\
src/ticket_cancel.c\
src/ticket1.c\
src/ticket2.c\
src/ticket3.c\
test/tetsmovie.c\
unity/unity.c

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).$(EXEC)

# All include folders with header files
INC	= -Iinc\
-Iunity

#Library Inlcudes
#INCLUDE_LIBS = 
INCLUDE_LIBS = -lcunit

# Project Output name
#PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME)

# Document files
#DOCUMENTATION_OUTPUT = documentation/html

# Default target built
#$(PROJECT_NAME):all

# Run the target even if the matching name exists
#.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	    gcc $(SRC) $(INC) -o $(call FixPath,$(PROJECT_NAME).$(EXEC) ) -lm

# Call `make run` to run the application
run:all
	    ./$(call FixPath,$(PROJECT_NAME).$(EXEC) )

# Document the code using Doxygen
#doc:
#	    make -C ./documentation

# Build and run the unit tests
build_test:
	gcc $(TEST_SRC) $(INC) $(INCLUDE_LIBS) -o $(call FixPath,$(PROJECT_NAME).$(EXEC) ) -lm


run_test:build_test
		./$(call FixPath,$(PROJECT_NAME).$(EXEC) )
	

    

analyze: test memcheck staticcheck coverage sanitize_check

staticcheck:
	    cppcheck --enable=all -iunity .

memcheck:
	    valgrind ./$(TEST_OUTPUT)

sanitize_check:
	gcc -fsanitize=address -fno-omit-frame-pointer $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)

coverage:$(TEST_SRC)
	gcc -fprofile-arcs -ftest-coverage $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)
	gcov -a ticketbook.c	

# Remove all the built files, invoke by `make clean`
clean:
#	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT) *.gcda *.gcno *.gcov
	$(RM) $(call FixPath,$(PROJECT_NAME).$(EXEC) )

# Create new build folder if not present
$(BUILD):
	    mkdir build
