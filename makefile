MAIN = hw07.o

coolptr.out: $(MAIN)
	$(LINK.cc) $^ -o $@

$(MAIN): coolptr.h CS1C.h
