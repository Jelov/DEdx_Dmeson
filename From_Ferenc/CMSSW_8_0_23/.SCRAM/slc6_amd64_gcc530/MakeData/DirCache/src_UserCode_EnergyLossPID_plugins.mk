ifeq ($(strip $(UserCodeEnergyLossPIDPlugins)),)
UserCodeEnergyLossPIDPlugins := self/src/UserCode/EnergyLossPID/plugins
PLUGINS:=yes
UserCodeEnergyLossPIDPlugins_files := $(patsubst src/UserCode/EnergyLossPID/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/UserCode/EnergyLossPID/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/UserCode/EnergyLossPID/plugins/$(file). Please fix src/UserCode/EnergyLossPID/plugins/BuildFile.))))
UserCodeEnergyLossPIDPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/UserCode/EnergyLossPID/plugins/BuildFile
UserCodeEnergyLossPIDPlugins_LOC_USE := self  UserCode/EnergyLossPID
UserCodeEnergyLossPIDPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,UserCodeEnergyLossPIDPlugins,UserCodeEnergyLossPIDPlugins,$(SCRAMSTORENAME_LIB),src/UserCode/EnergyLossPID/plugins))
UserCodeEnergyLossPIDPlugins_PACKAGE := self/src/UserCode/EnergyLossPID/plugins
ALL_PRODS += UserCodeEnergyLossPIDPlugins
UserCode/EnergyLossPID_forbigobj+=UserCodeEnergyLossPIDPlugins
UserCodeEnergyLossPIDPlugins_INIT_FUNC        += $$(eval $$(call Library,UserCodeEnergyLossPIDPlugins,src/UserCode/EnergyLossPID/plugins,src_UserCode_EnergyLossPID_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
UserCodeEnergyLossPIDPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,UserCodeEnergyLossPIDPlugins,src/UserCode/EnergyLossPID/plugins))
endif
ALL_COMMONRULES += src_UserCode_EnergyLossPID_plugins
src_UserCode_EnergyLossPID_plugins_parent := UserCode/EnergyLossPID
src_UserCode_EnergyLossPID_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_UserCode_EnergyLossPID_plugins,src/UserCode/EnergyLossPID/plugins,PLUGINS))
