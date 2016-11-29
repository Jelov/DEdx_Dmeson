ifeq ($(strip $(UserCode/EnergyLossPID)),)
ALL_COMMONRULES += src_UserCode_EnergyLossPID_src
src_UserCode_EnergyLossPID_src_parent := UserCode/EnergyLossPID
src_UserCode_EnergyLossPID_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_UserCode_EnergyLossPID_src,src/UserCode/EnergyLossPID/src,LIBRARY))
UserCodeEnergyLossPID := self/UserCode/EnergyLossPID
UserCode/EnergyLossPID := UserCodeEnergyLossPID
UserCodeEnergyLossPID_files := $(patsubst src/UserCode/EnergyLossPID/src/%,%,$(wildcard $(foreach dir,src/UserCode/EnergyLossPID/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
UserCodeEnergyLossPID_BuildFile    := $(WORKINGDIR)/cache/bf/src/UserCode/EnergyLossPID/BuildFile
UserCodeEnergyLossPID_LOC_USE := self  TrackingTools/PatternTools Geometry/TrackerGeometryBuilder Geometry/CaloGeometry RecoPixelVertexing/PixelLowPtUtilities CalibTracker/SiPixelESProducers boost rootrflx root
UserCodeEnergyLossPID_ROOTDICTS  := y 
UserCodeEnergyLossPID_PRE_INIT_FUNC += $$(eval $$(call RootDict,UserCodeEnergyLossPID,src/UserCode/EnergyLossPID/src,LinkDef.h,$(SCRAMSTORENAME_LIB)))
UserCodeEnergyLossPID_EX_LIB   := UserCodeEnergyLossPID
UserCodeEnergyLossPID_EX_USE   := $(foreach d,$(UserCodeEnergyLossPID_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
UserCodeEnergyLossPID_PACKAGE := self/src/UserCode/EnergyLossPID/src
ALL_PRODS += UserCodeEnergyLossPID
UserCodeEnergyLossPID_CLASS := LIBRARY
UserCode/EnergyLossPID_forbigobj+=UserCodeEnergyLossPID
UserCodeEnergyLossPID_INIT_FUNC        += $$(eval $$(call Library,UserCodeEnergyLossPID,src/UserCode/EnergyLossPID/src,src_UserCode_EnergyLossPID_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
