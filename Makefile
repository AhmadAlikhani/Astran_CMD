# Environment

MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
AS=as

OBJECTDIR = /home/ahmad/Desktop/astran-new-cmd

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/src/autocell2.o \
	${OBJECTDIR}/src/cellnetlst.o \
	${OBJECTDIR}/src/cif.o \
	${OBJECTDIR}/src/circuit.o \
	${OBJECTDIR}/src/clayout.o \
	${OBJECTDIR}/src/compaction.o \
	${OBJECTDIR}/src/designmng.o \
	${OBJECTDIR}/src/draw.o \
	${OBJECTDIR}/src/gds.o \
	${OBJECTDIR}/src/graphrouter.o \
	${OBJECTDIR}/src/gridrouter.o \
	${OBJECTDIR}/src/lef.o \
	${OBJECTDIR}/src/placer.o \
	${OBJECTDIR}/src/router.o \
	${OBJECTDIR}/src/rules.o \
	${OBJECTDIR}/src/verilog.o \
	${OBJECTDIR}/src/execute_arg.o \
	${OBJECTDIR}/src/interface.o \
	${OBJECTDIR}/src/parser.o \
	${OBJECTDIR}/main.o 
	


build/bin/Astran: ${OBJECTFILES}
	${MKDIR} -p bin/Debug
	${LINK.cc} -o bin/Debug/Astran ${OBJECTFILES}

${OBJECTDIR}main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.cpp
	
${OBJECTDIR}/src/execute_arg.o: src/execute_arg.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/execute_arg.o src/execute_arg.cpp	
	
${OBJECTDIR}/src/interface.o: src/interface.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/interface.o src/interface.cpp
	
${OBJECTDIR}/src/parser.o: src/parser.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/parser.o src/parser.cpp
	
${OBJECTDIR}/src/autocell2.o: src/autocell2.cpp src/autocell2.h
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/autocell2.o src/autocell2.cpp

${OBJECTDIR}/src/cellnetlst.o: src/cellnetlst.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/cellnetlst.o src/cellnetlst.cpp

${OBJECTDIR}/src/cif.o: src/cif.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/cif.o src/cif.cpp

${OBJECTDIR}/src/circuit.o: src/circuit.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/circuit.o src/circuit.cpp

${OBJECTDIR}/src/clayout.o: src/clayout.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/clayout.o src/clayout.cpp

${OBJECTDIR}/src/compaction.o: src/compaction.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/compaction.o src/compaction.cpp

${OBJECTDIR}/src/designmng.o: src/designmng.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/designmng.o src/designmng.cpp

${OBJECTDIR}/src/draw.o: src/draw.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/draw.o src/draw.cpp

${OBJECTDIR}/src/gds.o: src/gds.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/gds.o src/gds.cpp

${OBJECTDIR}/src/lef.o: src/lef.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/lef.o src/lef.cpp

${OBJECTDIR}/src/pathfinder.o: src/pathfinder.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/pathfinder.o src/pathfinder.cpp

${OBJECTDIR}/src/pathfinder2.o: src/pathfinder2.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/pathfinder2.o src/pathfinder2.cpp

${OBJECTDIR}/src/placer.o: src/placer.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/placer.o src/placer.cpp

${OBJECTDIR}/src/router.o: src/router.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/router.o src/router.cpp

${OBJECTDIR}/src/rules.o: src/rules.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/rules.o src/rules.cpp

${OBJECTDIR}/src/spice.o: src/spice.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/spice.o src/spice.cpp

${OBJECTDIR}/src/verilog.o: src/verilog.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/verilog.o src/verilog.cpp

${OBJECTDIR}/src/gridrouter.o: src/gridrouter.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/gridrouter.o src/gridrouter.cpp

${OBJECTDIR}/src/graphrouter.o: src/graphrouter.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/graphrouter.o src/graphrouter.cpp
	
