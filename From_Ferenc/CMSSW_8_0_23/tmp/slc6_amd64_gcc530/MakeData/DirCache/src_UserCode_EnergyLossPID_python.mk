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
