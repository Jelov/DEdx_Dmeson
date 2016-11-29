import FWCore.ParameterSet.Config as cms

# Tracker local reco
from RecoLocalTracker.Configuration.RecoLocalTracker_cff import *

# Refitter
from RecoTracker.TrackProducer.TrackRefitters_cff import *

# Track refitter
from RecoTracker.TrackProducer.TrackRefitter_cfi import *
refitterForEnergyLoss     = TrackRefitter.clone()
refitterForEnergyLoss.src = 'generalTracks'

# Energy Loss
energyLossProducer   = cms.EDProducer("EnergyLossProducer",
  trackProducer      = cms.InputTag('refitterForEnergyLoss'),
  trajectoryProducer = cms.InputTag('refitterForEnergyLoss'),
  clusterShapes      = cms.InputTag('siPixelClusterShapeCache'),
  tag = cms.string('pPb2016')
)

# Paths
produceEnergyLoss = cms.Path(refitterForEnergyLoss *
                             energyLossProducer)

