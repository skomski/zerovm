NAME_1=generator.uint32_t
NAME_2=sort_uint_proper_with_args
NAME_3=tester.uint32_t
INCLUDE_FLAGS=-I ~/git/zerovm
MACROS_FLAGS=-D USER_SIDE
NACL_TOOLCHAIN_PATH=~/nacl_sdk/pepper_16/toolchain/linux_x86


all: $(NAME_1).o $(NAME_2).o $(NAME_3).o
	$(NACL_TOOLCHAIN_PATH)/bin/x86_64-nacl-gcc -o $(NAME_1).nexe -s -static -T \
	$(NACL_TOOLCHAIN_PATH)/x86_64-nacl/lib64/ldscripts/elf64_nacl.x.static -melf64_nacl -m64 \
	$(DEBUG) $(NAME_1).o ~/git/zerovm/api/zvm.o
	$(NACL_TOOLCHAIN_PATH)/bin/x86_64-nacl-gcc -o $(NAME_2).nexe -s -static -T \
	$(NACL_TOOLCHAIN_PATH)/x86_64-nacl/lib64/ldscripts/elf64_nacl.x.static -melf64_nacl -m64 \
	$(DEBUG) $(NAME_2).o ~/git/zerovm/api/zvm.o
	$(NACL_TOOLCHAIN_PATH)/bin/x86_64-nacl-gcc -o $(NAME_3).nexe -s -static -T \
	$(NACL_TOOLCHAIN_PATH)/x86_64-nacl/lib64/ldscripts/elf64_nacl.x.static -melf64_nacl -m64 \
	$(DEBUG) $(NAME_3).o ~/git/zerovm/api/zvm.o
	
	./run_test.sh

$(NAME_1).o:
	$(NACL_TOOLCHAIN_PATH)/bin/x86_64-nacl-gcc -o $(NAME_1).o -Wall \
	$(INCLUDE_FLAGS) $(MACROS_FLAGS) $(DEBUG) -c -Wno-long-long -O2 -msse4.1 -m64 $(NAME_1).c

$(NAME_2).o:
	$(NACL_TOOLCHAIN_PATH)/bin/x86_64-nacl-gcc -o $(NAME_2).o -Wall \
	$(INCLUDE_FLAGS) $(MACROS_FLAGS) $(DEBUG) -c -Wno-long-long -O2 -msse4.1 -m64 $(NAME_2).c

$(NAME_3).o:
	$(NACL_TOOLCHAIN_PATH)/bin/x86_64-nacl-gcc -o $(NAME_3).o -Wall \
	$(INCLUDE_FLAGS) $(MACROS_FLAGS) $(DEBUG) -c -Wno-long-long -O2 -msse4.1 -m64 $(NAME_3).c

clean:
	rm -f $(NAME_1).nexe $(NAME_1).o $(NAME_2).nexe $(NAME_2).o $(NAME_3).nexe $(NAME_3).o *.log *.data
