ALL_COMMONRULES += src_UserCode_EnergyLossPID_test
src_UserCode_EnergyLossPID_test_parent := UserCode/EnergyLossPID
src_UserCode_EnergyLossPID_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_UserCode_EnergyLossPID_test,src/UserCode/EnergyLossPID/test,TEST))
