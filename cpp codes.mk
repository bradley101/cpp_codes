##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=cpp codes
ConfigurationName      :=Debug
WorkspacePath          :="E:/work/cpp codes"
ProjectPath            :="E:/work/cpp codes"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=bradley
Date                   :=22/10/2016
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="cpp codes.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
LinkOptions            :=  -O0
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch). $(LibraryPathSwitch)Debug 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -g -Wall $(Preprocessors)
CFLAGS   :=   $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/learn_stl1.cpp$(ObjectSuffix) $(IntermediateDirectory)/learn_stl2.cpp$(ObjectSuffix) $(IntermediateDirectory)/New folder_sum.cpp$(ObjectSuffix) $(IntermediateDirectory)/A-small-practise.cpp$(ObjectSuffix) $(IntermediateDirectory)/aibohp.cpp$(ObjectSuffix) $(IntermediateDirectory)/Asya & Beautiful Strings.cpp$(ObjectSuffix) $(IntermediateDirectory)/ASYA2.cpp$(ObjectSuffix) $(IntermediateDirectory)/beautiful triplets.cpp$(ObjectSuffix) $(IntermediateDirectory)/Can you answer these queries I.cpp$(ObjectSuffix) $(IntermediateDirectory)/chef and calculation.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/Chef and Inequality.cpp$(ObjectSuffix) $(IntermediateDirectory)/circular array rotation.cpp$(ObjectSuffix) $(IntermediateDirectory)/dividing machine.cpp$(ObjectSuffix) $(IntermediateDirectory)/hard sum.cpp$(ObjectSuffix) $(IntermediateDirectory)/hardsum.cpp$(ObjectSuffix) $(IntermediateDirectory)/hello.cpp$(ObjectSuffix) $(IntermediateDirectory)/horrible queries.cpp$(ObjectSuffix) $(IntermediateDirectory)/Hotels Along the Croatian Coast.cpp$(ObjectSuffix) $(IntermediateDirectory)/lazy jem.cpp$(ObjectSuffix) $(IntermediateDirectory)/mahasena.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/minimum index difference.cpp$(ObjectSuffix) $(IntermediateDirectory)/Number Lock.cpp$(ObjectSuffix) $(IntermediateDirectory)/segtree_learn.cpp$(ObjectSuffix) $(IntermediateDirectory)/spiral diagonals.cpp$(ObjectSuffix) $(IntermediateDirectory)/string processing.cpp$(ObjectSuffix) $(IntermediateDirectory)/subarrays.cpp$(ObjectSuffix) $(IntermediateDirectory)/The Lost Arithmetic Sequences.cpp$(ObjectSuffix) $(IntermediateDirectory)/Two squares or not two squares.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/learn_stl1.cpp$(ObjectSuffix): learn/stl1.cpp $(IntermediateDirectory)/learn_stl1.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/learn/stl1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/learn_stl1.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/learn_stl1.cpp$(DependSuffix): learn/stl1.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/learn_stl1.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/learn_stl1.cpp$(DependSuffix) -MM learn/stl1.cpp

$(IntermediateDirectory)/learn_stl1.cpp$(PreprocessSuffix): learn/stl1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/learn_stl1.cpp$(PreprocessSuffix)learn/stl1.cpp

$(IntermediateDirectory)/learn_stl2.cpp$(ObjectSuffix): learn/stl2.cpp $(IntermediateDirectory)/learn_stl2.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/learn/stl2.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/learn_stl2.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/learn_stl2.cpp$(DependSuffix): learn/stl2.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/learn_stl2.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/learn_stl2.cpp$(DependSuffix) -MM learn/stl2.cpp

$(IntermediateDirectory)/learn_stl2.cpp$(PreprocessSuffix): learn/stl2.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/learn_stl2.cpp$(PreprocessSuffix)learn/stl2.cpp

$(IntermediateDirectory)/New folder_sum.cpp$(ObjectSuffix): New folder/sum.cpp $(IntermediateDirectory)/New folder_sum.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/New folder/sum.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/New folder_sum.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/New folder_sum.cpp$(DependSuffix): New folder/sum.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/New folder_sum.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/New folder_sum.cpp$(DependSuffix) -MM "New folder/sum.cpp"

$(IntermediateDirectory)/New folder_sum.cpp$(PreprocessSuffix): New folder/sum.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/New folder_sum.cpp$(PreprocessSuffix)"New folder/sum.cpp"

$(IntermediateDirectory)/A-small-practise.cpp$(ObjectSuffix): A-small-practise.cpp $(IntermediateDirectory)/A-small-practise.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/A-small-practise.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/A-small-practise.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/A-small-practise.cpp$(DependSuffix): A-small-practise.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/A-small-practise.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/A-small-practise.cpp$(DependSuffix) -MM A-small-practise.cpp

$(IntermediateDirectory)/A-small-practise.cpp$(PreprocessSuffix): A-small-practise.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/A-small-practise.cpp$(PreprocessSuffix)A-small-practise.cpp

$(IntermediateDirectory)/aibohp.cpp$(ObjectSuffix): aibohp.cpp $(IntermediateDirectory)/aibohp.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/aibohp.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/aibohp.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/aibohp.cpp$(DependSuffix): aibohp.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/aibohp.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/aibohp.cpp$(DependSuffix) -MM aibohp.cpp

$(IntermediateDirectory)/aibohp.cpp$(PreprocessSuffix): aibohp.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/aibohp.cpp$(PreprocessSuffix)aibohp.cpp

$(IntermediateDirectory)/Asya & Beautiful Strings.cpp$(ObjectSuffix): Asya & Beautiful Strings.cpp $(IntermediateDirectory)/Asya & Beautiful Strings.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/Asya & Beautiful Strings.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Asya & Beautiful Strings.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Asya & Beautiful Strings.cpp$(DependSuffix): Asya & Beautiful Strings.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Asya & Beautiful Strings.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Asya & Beautiful Strings.cpp$(DependSuffix) -MM "Asya & Beautiful Strings.cpp"

$(IntermediateDirectory)/Asya & Beautiful Strings.cpp$(PreprocessSuffix): Asya & Beautiful Strings.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Asya & Beautiful Strings.cpp$(PreprocessSuffix)"Asya & Beautiful Strings.cpp"

$(IntermediateDirectory)/ASYA2.cpp$(ObjectSuffix): ASYA2.cpp $(IntermediateDirectory)/ASYA2.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/ASYA2.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ASYA2.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ASYA2.cpp$(DependSuffix): ASYA2.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ASYA2.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ASYA2.cpp$(DependSuffix) -MM ASYA2.cpp

$(IntermediateDirectory)/ASYA2.cpp$(PreprocessSuffix): ASYA2.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ASYA2.cpp$(PreprocessSuffix)ASYA2.cpp

$(IntermediateDirectory)/beautiful triplets.cpp$(ObjectSuffix): beautiful triplets.cpp $(IntermediateDirectory)/beautiful triplets.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/beautiful triplets.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/beautiful triplets.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/beautiful triplets.cpp$(DependSuffix): beautiful triplets.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/beautiful triplets.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/beautiful triplets.cpp$(DependSuffix) -MM "beautiful triplets.cpp"

$(IntermediateDirectory)/beautiful triplets.cpp$(PreprocessSuffix): beautiful triplets.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/beautiful triplets.cpp$(PreprocessSuffix)"beautiful triplets.cpp"

$(IntermediateDirectory)/Can you answer these queries I.cpp$(ObjectSuffix): Can you answer these queries I.cpp $(IntermediateDirectory)/Can you answer these queries I.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/Can you answer these queries I.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Can you answer these queries I.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Can you answer these queries I.cpp$(DependSuffix): Can you answer these queries I.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Can you answer these queries I.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Can you answer these queries I.cpp$(DependSuffix) -MM "Can you answer these queries I.cpp"

$(IntermediateDirectory)/Can you answer these queries I.cpp$(PreprocessSuffix): Can you answer these queries I.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Can you answer these queries I.cpp$(PreprocessSuffix)"Can you answer these queries I.cpp"

$(IntermediateDirectory)/chef and calculation.cpp$(ObjectSuffix): chef and calculation.cpp $(IntermediateDirectory)/chef and calculation.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/chef and calculation.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/chef and calculation.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/chef and calculation.cpp$(DependSuffix): chef and calculation.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/chef and calculation.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/chef and calculation.cpp$(DependSuffix) -MM "chef and calculation.cpp"

$(IntermediateDirectory)/chef and calculation.cpp$(PreprocessSuffix): chef and calculation.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/chef and calculation.cpp$(PreprocessSuffix)"chef and calculation.cpp"

$(IntermediateDirectory)/Chef and Inequality.cpp$(ObjectSuffix): Chef and Inequality.cpp $(IntermediateDirectory)/Chef and Inequality.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/Chef and Inequality.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Chef and Inequality.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Chef and Inequality.cpp$(DependSuffix): Chef and Inequality.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Chef and Inequality.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Chef and Inequality.cpp$(DependSuffix) -MM "Chef and Inequality.cpp"

$(IntermediateDirectory)/Chef and Inequality.cpp$(PreprocessSuffix): Chef and Inequality.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Chef and Inequality.cpp$(PreprocessSuffix)"Chef and Inequality.cpp"

$(IntermediateDirectory)/circular array rotation.cpp$(ObjectSuffix): circular array rotation.cpp $(IntermediateDirectory)/circular array rotation.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/circular array rotation.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/circular array rotation.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/circular array rotation.cpp$(DependSuffix): circular array rotation.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/circular array rotation.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/circular array rotation.cpp$(DependSuffix) -MM "circular array rotation.cpp"

$(IntermediateDirectory)/circular array rotation.cpp$(PreprocessSuffix): circular array rotation.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/circular array rotation.cpp$(PreprocessSuffix)"circular array rotation.cpp"

$(IntermediateDirectory)/dividing machine.cpp$(ObjectSuffix): dividing machine.cpp $(IntermediateDirectory)/dividing machine.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/dividing machine.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/dividing machine.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/dividing machine.cpp$(DependSuffix): dividing machine.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/dividing machine.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/dividing machine.cpp$(DependSuffix) -MM "dividing machine.cpp"

$(IntermediateDirectory)/dividing machine.cpp$(PreprocessSuffix): dividing machine.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/dividing machine.cpp$(PreprocessSuffix)"dividing machine.cpp"

$(IntermediateDirectory)/hard sum.cpp$(ObjectSuffix): hard sum.cpp $(IntermediateDirectory)/hard sum.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/hard sum.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/hard sum.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/hard sum.cpp$(DependSuffix): hard sum.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/hard sum.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/hard sum.cpp$(DependSuffix) -MM "hard sum.cpp"

$(IntermediateDirectory)/hard sum.cpp$(PreprocessSuffix): hard sum.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/hard sum.cpp$(PreprocessSuffix)"hard sum.cpp"

$(IntermediateDirectory)/hardsum.cpp$(ObjectSuffix): hardsum.cpp $(IntermediateDirectory)/hardsum.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/hardsum.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/hardsum.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/hardsum.cpp$(DependSuffix): hardsum.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/hardsum.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/hardsum.cpp$(DependSuffix) -MM hardsum.cpp

$(IntermediateDirectory)/hardsum.cpp$(PreprocessSuffix): hardsum.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/hardsum.cpp$(PreprocessSuffix)hardsum.cpp

$(IntermediateDirectory)/hello.cpp$(ObjectSuffix): hello.cpp $(IntermediateDirectory)/hello.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/hello.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/hello.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/hello.cpp$(DependSuffix): hello.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/hello.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/hello.cpp$(DependSuffix) -MM hello.cpp

$(IntermediateDirectory)/hello.cpp$(PreprocessSuffix): hello.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/hello.cpp$(PreprocessSuffix)hello.cpp

$(IntermediateDirectory)/horrible queries.cpp$(ObjectSuffix): horrible queries.cpp $(IntermediateDirectory)/horrible queries.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/horrible queries.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/horrible queries.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/horrible queries.cpp$(DependSuffix): horrible queries.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/horrible queries.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/horrible queries.cpp$(DependSuffix) -MM "horrible queries.cpp"

$(IntermediateDirectory)/horrible queries.cpp$(PreprocessSuffix): horrible queries.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/horrible queries.cpp$(PreprocessSuffix)"horrible queries.cpp"

$(IntermediateDirectory)/Hotels Along the Croatian Coast.cpp$(ObjectSuffix): Hotels Along the Croatian Coast.cpp $(IntermediateDirectory)/Hotels Along the Croatian Coast.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/Hotels Along the Croatian Coast.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Hotels Along the Croatian Coast.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Hotels Along the Croatian Coast.cpp$(DependSuffix): Hotels Along the Croatian Coast.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Hotels Along the Croatian Coast.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Hotels Along the Croatian Coast.cpp$(DependSuffix) -MM "Hotels Along the Croatian Coast.cpp"

$(IntermediateDirectory)/Hotels Along the Croatian Coast.cpp$(PreprocessSuffix): Hotels Along the Croatian Coast.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Hotels Along the Croatian Coast.cpp$(PreprocessSuffix)"Hotels Along the Croatian Coast.cpp"

$(IntermediateDirectory)/lazy jem.cpp$(ObjectSuffix): lazy jem.cpp $(IntermediateDirectory)/lazy jem.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/lazy jem.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/lazy jem.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/lazy jem.cpp$(DependSuffix): lazy jem.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/lazy jem.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/lazy jem.cpp$(DependSuffix) -MM "lazy jem.cpp"

$(IntermediateDirectory)/lazy jem.cpp$(PreprocessSuffix): lazy jem.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/lazy jem.cpp$(PreprocessSuffix)"lazy jem.cpp"

$(IntermediateDirectory)/mahasena.cpp$(ObjectSuffix): mahasena.cpp $(IntermediateDirectory)/mahasena.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/mahasena.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/mahasena.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/mahasena.cpp$(DependSuffix): mahasena.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/mahasena.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/mahasena.cpp$(DependSuffix) -MM mahasena.cpp

$(IntermediateDirectory)/mahasena.cpp$(PreprocessSuffix): mahasena.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/mahasena.cpp$(PreprocessSuffix)mahasena.cpp

$(IntermediateDirectory)/minimum index difference.cpp$(ObjectSuffix): minimum index difference.cpp $(IntermediateDirectory)/minimum index difference.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/minimum index difference.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/minimum index difference.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/minimum index difference.cpp$(DependSuffix): minimum index difference.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/minimum index difference.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/minimum index difference.cpp$(DependSuffix) -MM "minimum index difference.cpp"

$(IntermediateDirectory)/minimum index difference.cpp$(PreprocessSuffix): minimum index difference.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/minimum index difference.cpp$(PreprocessSuffix)"minimum index difference.cpp"

$(IntermediateDirectory)/Number Lock.cpp$(ObjectSuffix): Number Lock.cpp $(IntermediateDirectory)/Number Lock.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/Number Lock.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Number Lock.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Number Lock.cpp$(DependSuffix): Number Lock.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Number Lock.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Number Lock.cpp$(DependSuffix) -MM "Number Lock.cpp"

$(IntermediateDirectory)/Number Lock.cpp$(PreprocessSuffix): Number Lock.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Number Lock.cpp$(PreprocessSuffix)"Number Lock.cpp"

$(IntermediateDirectory)/segtree_learn.cpp$(ObjectSuffix): segtree_learn.cpp $(IntermediateDirectory)/segtree_learn.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/segtree_learn.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/segtree_learn.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/segtree_learn.cpp$(DependSuffix): segtree_learn.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/segtree_learn.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/segtree_learn.cpp$(DependSuffix) -MM segtree_learn.cpp

$(IntermediateDirectory)/segtree_learn.cpp$(PreprocessSuffix): segtree_learn.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/segtree_learn.cpp$(PreprocessSuffix)segtree_learn.cpp

$(IntermediateDirectory)/spiral diagonals.cpp$(ObjectSuffix): spiral diagonals.cpp $(IntermediateDirectory)/spiral diagonals.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/spiral diagonals.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/spiral diagonals.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/spiral diagonals.cpp$(DependSuffix): spiral diagonals.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/spiral diagonals.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/spiral diagonals.cpp$(DependSuffix) -MM "spiral diagonals.cpp"

$(IntermediateDirectory)/spiral diagonals.cpp$(PreprocessSuffix): spiral diagonals.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/spiral diagonals.cpp$(PreprocessSuffix)"spiral diagonals.cpp"

$(IntermediateDirectory)/string processing.cpp$(ObjectSuffix): string processing.cpp $(IntermediateDirectory)/string processing.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/string processing.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/string processing.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/string processing.cpp$(DependSuffix): string processing.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/string processing.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/string processing.cpp$(DependSuffix) -MM "string processing.cpp"

$(IntermediateDirectory)/string processing.cpp$(PreprocessSuffix): string processing.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/string processing.cpp$(PreprocessSuffix)"string processing.cpp"

$(IntermediateDirectory)/subarrays.cpp$(ObjectSuffix): subarrays.cpp $(IntermediateDirectory)/subarrays.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/subarrays.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/subarrays.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/subarrays.cpp$(DependSuffix): subarrays.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/subarrays.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/subarrays.cpp$(DependSuffix) -MM subarrays.cpp

$(IntermediateDirectory)/subarrays.cpp$(PreprocessSuffix): subarrays.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/subarrays.cpp$(PreprocessSuffix)subarrays.cpp

$(IntermediateDirectory)/The Lost Arithmetic Sequences.cpp$(ObjectSuffix): The Lost Arithmetic Sequences.cpp $(IntermediateDirectory)/The Lost Arithmetic Sequences.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/The Lost Arithmetic Sequences.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/The Lost Arithmetic Sequences.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/The Lost Arithmetic Sequences.cpp$(DependSuffix): The Lost Arithmetic Sequences.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/The Lost Arithmetic Sequences.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/The Lost Arithmetic Sequences.cpp$(DependSuffix) -MM "The Lost Arithmetic Sequences.cpp"

$(IntermediateDirectory)/The Lost Arithmetic Sequences.cpp$(PreprocessSuffix): The Lost Arithmetic Sequences.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/The Lost Arithmetic Sequences.cpp$(PreprocessSuffix)"The Lost Arithmetic Sequences.cpp"

$(IntermediateDirectory)/Two squares or not two squares.cpp$(ObjectSuffix): Two squares or not two squares.cpp $(IntermediateDirectory)/Two squares or not two squares.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/work/cpp codes/Two squares or not two squares.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Two squares or not two squares.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Two squares or not two squares.cpp$(DependSuffix): Two squares or not two squares.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Two squares or not two squares.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Two squares or not two squares.cpp$(DependSuffix) -MM "Two squares or not two squares.cpp"

$(IntermediateDirectory)/Two squares or not two squares.cpp$(PreprocessSuffix): Two squares or not two squares.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Two squares or not two squares.cpp$(PreprocessSuffix)"Two squares or not two squares.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


