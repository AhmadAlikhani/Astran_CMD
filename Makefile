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
OFILESDIR = ${OBJECTDIR}/obj/Debug

# Object Files
OBJECTFILES= \
	${OFILESDIR}/src/autocell2.o \
	${OFILESDIR}/src/cellnetlst.o \
	${OFILESDIR}/src/cif.o \
	${OFILESDIR}/src/circuit.o \
	${OFILESDIR}/src/clayout.o \
	${OFILESDIR}/src/compaction.o \
	${OFILESDIR}/src/designmng.o \
	${OFILESDIR}/src/draw.o \
	${OFILESDIR}/src/gds.o \
	${OFILESDIR}/src/graphrouter.o \
	${OFILESDIR}/src/gridrouter.o \
	${OFILESDIR}/src/lef.o \
	${OFILESDIR}/src/placer.o \
	${OFILESDIR}/src/router.o \
	${OFILESDIR}/src/rules.o \
	${OFILESDIR}/src/verilog.o \
	${OFILESDIR}/src/execute_arg.o \
	${OFILESDIR}/src/interface.o \
	${OFILESDIR}/src/parser.o \
	${OFILESDIR}/main.o 
	


build/bin/Astran: ${OBJECTFILES}
	${MKDIR} -p bin/Debug
	${LINK.cc} -o bin/Debug/Astran ${OBJECTFILES}
	
${OFILESDIR}/main.o: main.cpp
	${MKDIR} -p ${OFILESDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OFILESDIR}/main.o main.cpp
	
${OFILESDIR}/src/execute_arg.o: src/execute_arg.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OFILESDIR}/src/execute_arg.o src/execute_arg.cpp	
	
${OFILESDIR}/src/interface.o: src/interface.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OFILESDIR}/src/interface.o src/interface.cpp
	
${OFILESDIR}/src/parser.o: src/parser.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OFILESDIR}/src/parser.o src/parser.cpp
	
${OFILESDIR}/src/autocell2.o: src/autocell2.cpp src/autocell2.h
	${MKDIR} -p ${OFILESDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OFILESDIR}/src/autocell2.o src/autocell2.cpp

${OFILESDIR}/src/cellnetlst.o: src/cellnetlst.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OFILESDIR}/src/cellnetlst.o src/cellnetlst.cpp

${OFILESDIR}/src/cif.o: src/cif.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OFILESDIR}/src/cif.o src/cif.cpp

${OFILESDIR}/src/circuit.o: src/circuit.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OFILESDIR}/src/circuit.o src/circuit.cpp

${OFILESDIR}/src/clayout.o: src/clayout.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OFILESDIR}/src/clayout.o src/clayout.cpp

${OFILESDIR}/src/compaction.o: src/compaction.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OFILESDIR}/src/compaction.o src/compaction.cpp

${OFILESDIR}/src/designmng.o: src/designmng.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OFILESDIR}/src/designmng.o src/designmng.cpp

${OFILESDIR}/src/draw.o: src/draw.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OFILESDIR}/src/draw.o src/draw.cpp

${OFILESDIR}/src/gds.o: src/gds.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OFILESDIR}/src/gds.o src/gds.cpp

${OFILESDIR}/src/lef.o: src/lef.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OFILESDIR}/src/lef.o src/lef.cpp

${OFILESDIR}/src/pathfinder.o: src/pathfinder.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OFILESDIR}/src/pathfinder.o src/pathfinder.cpp

${OFILESDIR}/src/pathfinder2.o: src/pathfinder2.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OFILESDIR}/src/pathfinder2.o src/pathfinder2.cpp

${OFILESDIR}/src/placer.o: src/placer.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OFILESDIR}/src/placer.o src/placer.cpp

${OFILESDIR}/src/router.o: src/router.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OFILESDIR}/src/router.o src/router.cpp

${OFILESDIR}/src/rules.o: src/rules.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OFILESDIR}/src/rules.o src/rules.cpp

${OFILESDIR}/src/spice.o: src/spice.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OFILESDIR}/src/spice.o src/spice.cpp

${OFILESDIR}/src/verilog.o: src/verilog.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OFILESDIR}/src/verilog.o src/verilog.cpp

${OFILESDIR}/src/gridrouter.o: src/gridrouter.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OFILESDIR}/src/gridrouter.o src/gridrouter.cpp

${OFILESDIR}/src/graphrouter.o: src/graphrouter.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OFILESDIR}/src/graphrouter.o src/graphrouter.cpp

