##
## A Makefile for simple testing
##

## ###### ###### ##

PATSCC=$(PATSHOME)/bin/patscc
PATSOPT=$(PATSHOME)/bin/patsopt

## ###### ###### ##

RMF=rm -f

## ###### ###### ##

all::
regress::
cleanall::

## ###### ###### ##
#
all:: \
prelude
prelude: \
prelude.dats \
prelude_bool.dats \
prelude_char.dats \
prelude_integer.dats \
prelude_string.dats \
prelude_list.dats \
prelude_list_vt.dats \
prelude_array.dats \
prelude_arrayref.dats \
prelude_stream.dats \
prelude_stream_vt.dats \
; $(PATSCC) -D_GNU_SOURCE -DATS_MEMALLOC_LIBC -O2 -o $@ $<
#
regress:: prelude; ./$<
cleanall:: ; $(RMF) prelude
#
## ###### ###### ##

testall:: all
testall:: regress
testall:: cleanall

## ###### ###### ##

clean:: ; $(RMF) *~
clean:: ; $(RMF) *_?ats.c

## ###### ###### ##

cleanall:: clean

## ###### ###### ##

## ###### end of [Makefile] ###### ##
