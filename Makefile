PROJ_NAME = Digital_Calculator
TEST_PROJ_NAME = Test_$(PROJ_NAME)
BUILD_DIR = Build

# All source code files
SRC = src/birth_calculator.c\
src/bmi.c\
src/CompoundInterest.c\
src/currency.c\
src/energy.c\
src/length.c\
src/linear_to_matrix.c\
src/mass.c\
src/matrix_addition.c\
src/matrix_division.c\
src/matrix_multiply.c\
src/matrix_substraction.c\
src/numberconv.c\
src/simple_calculator.c\
src/simple_scientific_calculator.c\
src/speed.c\
src/simpleinterest.c\
src/temperature.c\
src/timec.c\
src/trigonometric_function.c




# All test source files
TEST_SRC = test_main/main.c


# All include folders with header files
INC = -Iinc


#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
   IN=
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
	  IN=-lm
   endif
endif


all:$(BUILD_DIR)
	gcc $(SRC) $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC)) $(IN)

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)) $(IN)
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)) 

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

coverage: ${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(TEST_SRC) $(INC) -o -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC)) $(IN)
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(SRC)
	
cppcheck: $(SRC)
	cppcheck --enable=all $(TEST_SRC) $(SRC)
valgrind:
	valgrind $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	rmdir $(BUILD_DIR)