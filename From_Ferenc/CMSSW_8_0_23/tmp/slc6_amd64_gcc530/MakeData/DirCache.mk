ALL_SUBSYSTEMS+=UserCode
subdirs_src_UserCode = src_UserCode_EnergyLossPID
ALL_PACKAGES += UserCode/EnergyLossPID
subdirs_src_UserCode_EnergyLossPID := src_UserCode_EnergyLossPID_out src_UserCode_EnergyLossPID_interface src_UserCode_EnergyLossPID_plugins src_UserCode_EnergyLossPID_scripts src_UserCode_EnergyLossPID_test src_UserCode_EnergyLossPID_src src_UserCode_EnergyLossPID_data src_UserCode_EnergyLossPID_python
ifeq ($(strip $(PyUserCodeEnergyLossPID)),)
PyUserCodeEnergyLossPID := self/src/UserCode/EnergyLossPID/python
src_UserCode_EnergyLossPID_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/UserCode/EnergyLossPID/python)
PyUserCodeEnergyLossPID_files := $(patsubst src/UserCode/EnergyLossPID/python/%,%,$(wildcard $(foreach dir,src/UserCode/EnergyLossPID/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyUserCodeEnergyLossPID_LOC_USE := self  
PyUserCodeEnergyLossPID_PACKAGE := self/src/UserCode/EnergyLossPID/python
ALL_PRODS += PyUserCodeEnergyLossPID
PyUserCodeEnergyLossPID_INIT_FUNC        += $$(eval $$(call PythonProduct,PyUserCodeEnergyLossPID,src/UserCode/EnergyLossPID/python,src_UserCode_EnergyLossPID_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyUserCodeEnergyLossPID,src/UserCode/EnergyLossPID/python))
endif
ALL_COMMONRULES += src_UserCode_EnergyLossPID_python
src_UserCode_EnergyLossPID_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_UserCode_EnergyLossPID_python,src/UserCode/EnergyLossPID/python,PYTHON))
src_UserCode_EnergyLossPID_scripts_files := $(filter-out \#% %\#,$(notdir $(wildcard $(foreach dir,$(LOCALTOP)/src/UserCode/EnergyLossPID/scripts,$(dir)/*))))
$(eval $(call Src2StoreCopy,src_UserCode_EnergyLossPID_scripts,src/UserCode/EnergyLossPID/scripts,$(SCRAMSTORENAME_BIN),*))
ALL_COMMONRULES += src_UserCode_EnergyLossPID_test
src_UserCode_EnergyLossPID_test_parent := UserCode/EnergyLossPID
src_UserCode_EnergyLossPID_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_UserCode_EnergyLossPID_test,src/UserCode/EnergyLossPID/test,TEST))
