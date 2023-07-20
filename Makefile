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

OBJECTDIR = /home/ahmadalikhani/vlsi_workspace/Astran_CMD
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
	${OFILESDIR}/src/gdslib/src/gdsCpp.o \
	${OFILESDIR}/src/gdslib/src/gdsForge.o \
	${OFILESDIR}/src/gdslib/src/gdsImport.o \
	${OFILESDIR}/src/gdslib/src/gdsParser.o \
	${OFILESDIR}/src/jsoncpp/src/json_writer.o \
	${OFILESDIR}/src/jsoncpp/src/json_value.o \
	${OFILESDIR}/src/jsoncpp/src/json_reader.o \
	${OFILESDIR}/main.o 
	


build/bin/Astran_CMD: ${OBJECTFILES}
	${MKDIR} -p bin/Debug
	g++ -o bin/Debug/Astran_CMD ${OBJECTFILES}
	
${OFILESDIR}/main.o: main.cpp
	${MKDIR} -p ${OFILESDIR}
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/main.cpp -I/usr/include  -o ${OFILESDIR}/main.o
	
${OFILESDIR}/src/execute_arg.o: src/execute_arg.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/execute_arg.cpp   -o ${OFILESDIR}/src/execute_arg.o	
	
${OFILESDIR}/src/interface.o: src/interface.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/interface.cpp   -o ${OFILESDIR}/src/interface.o
	
${OFILESDIR}/src/parser.o: src/parser.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/parser.cpp   -o ${OFILESDIR}/src/parser.o
	
${OFILESDIR}/src/autocell2.o: src/autocell2.cpp src/autocell2.h
	${MKDIR} -p ${OFILESDIR}/src
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/autocell2.cpp   -o ${OFILESDIR}/src/autocell2.o

${OFILESDIR}/src/cellnetlst.o: src/cellnetlst.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/cellnetlst.cpp   -o ${OFILESDIR}/src/cellnetlst.o

${OFILESDIR}/src/cif.o: src/cif.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/cif.cpp   -o ${OFILESDIR}/src/cif.o

${OFILESDIR}/src/circuit.o: src/circuit.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/circuit.cpp   -o ${OFILESDIR}/src/circuit.o

${OFILESDIR}/src/clayout.o: src/clayout.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/clayout.cpp   -o ${OFILESDIR}/src/clayout.o

${OFILESDIR}/src/compaction.o: src/compaction.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/compaction.cpp   -o ${OFILESDIR}/src/compaction.o

${OFILESDIR}/src/designmng.o: src/designmng.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/designmng.cpp   -o ${OFILESDIR}/src/designmng.o

${OFILESDIR}/src/draw.o: src/draw.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/draw.cpp   -o ${OFILESDIR}/src/draw.o

${OFILESDIR}/src/gds.o: src/gds.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/gds.cpp   -o ${OFILESDIR}/src/gds.o

${OFILESDIR}/src/lef.o: src/lef.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/lef.cpp   -o ${OFILESDIR}/src/lef.o

${OFILESDIR}/src/pathfinder.o: src/pathfinder.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/pathfinder.cpp   -o ${OFILESDIR}/src/pathfinder.o

${OFILESDIR}/src/pathfinder2.o: src/pathfinder2.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/pathfinder2.cpp   -o ${OFILESDIR}/src/pathfinder2.o

${OFILESDIR}/src/placer.o: src/placer.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/placer.cpp   -o ${OFILESDIR}/src/placer.o

${OFILESDIR}/src/router.o: src/router.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/router.cpp   -o ${OFILESDIR}/src/router.o

${OFILESDIR}/src/rules.o: src/rules.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/rules.cpp   -o ${OFILESDIR}/src/rules.o

${OFILESDIR}/src/spice.o: src/spice.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/spice.cpp   -o ${OFILESDIR}/src/spice.o

${OFILESDIR}/src/verilog.o: src/verilog.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/verilog.cpp   -o ${OFILESDIR}/src/verilog.o

${OFILESDIR}/src/gridrouter.o: src/gridrouter.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/gridrouter.cpp   -o ${OFILESDIR}/src/gridrouter.o

${OFILESDIR}/src/graphrouter.o: src/graphrouter.cpp
	${MKDIR} -p ${OFILESDIR}/src
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/graphrouter.cpp   -o ${OFILESDIR}/src/graphrouter.o
	
		
${OFILESDIR}/src/gdslib/src/gdsCpp.o: src/gdslib/src/gdsCpp.cpp
	${MKDIR} -p ${OFILESDIR}/src/gdslib/src/
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/gdslib/src/gdsCpp.cpp   -o ${OFILESDIR}/src/gdslib/src/gdsCpp.o
	
${OFILESDIR}/src/gdslib/src/gdsForge.o: src/gdslib/src/gdsForge.cpp
	${MKDIR} -p ${OFILESDIR}/src/gdslib/src/
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/gdslib/src/gdsForge.cpp   -o ${OFILESDIR}/src/gdslib/src/gdsForge.o
	
${OFILESDIR}/src/gdslib/src/gdsImport.o: src/gdslib/src/gdsImport.cpp
	${MKDIR} -p ${OFILESDIR}/src/gdslib/src/
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/gdslib/src/gdsImport.cpp   -o ${OFILESDIR}/src/gdslib/src/gdsImport.o
	
${OFILESDIR}/src/gdslib/src/gdsParser.o: src/gdslib/src/gdsParser.cpp
	${MKDIR} -p ${OFILESDIR}/src/gdslib/src/
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/gdslib/src/gdsParser.cpp   -o ${OFILESDIR}/src/gdslib/src/gdsParser.o
		
${OFILESDIR}/src/jsoncpp/src/json_reader.o: src/jsoncpp/src/json_reader.cpp
	${MKDIR} -p ${OFILESDIR}/src/jsoncpp/src/
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/jsoncpp/src/json_reader.cpp   -o ${OFILESDIR}/src/jsoncpp/src/json_reader.o
			
${OFILESDIR}/src/jsoncpp/src/json_value.o: src/jsoncpp/src/json_value.cpp
	${MKDIR} -p ${OFILESDIR}/src/jsoncpp/src/
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/jsoncpp/src/json_value.cpp   -o ${OFILESDIR}/src/jsoncpp/src/json_value.o 
			
${OFILESDIR}/src/jsoncpp/src/json_writer.o: src/jsoncpp/src/json_writer.cpp
	${MKDIR} -p ${OFILESDIR}/src/jsoncpp/src/
	${RM} 
	g++ -Wall -fexceptions -g -c  ${OBJECTDIR}/src/jsoncpp/src/json_writer.cpp   -o ${OFILESDIR}/src/jsoncpp/src/json_writer.o 
	
