src_UserCode_EnergyLossPID_scripts_files := $(filter-out \#% %\#,$(notdir $(wildcard $(foreach dir,$(LOCALTOP)/src/UserCode/EnergyLossPID/scripts,$(dir)/*))))
$(eval $(call Src2StoreCopy,src_UserCode_EnergyLossPID_scripts,src/UserCode/EnergyLossPID/scripts,$(SCRAMSTORENAME_BIN),*))
