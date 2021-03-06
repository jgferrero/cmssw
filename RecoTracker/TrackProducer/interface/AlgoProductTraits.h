#ifndef RecoTrackerTrackProducerAlgoProductTraits_H
#define RecoTrackerTrackProducerAlgoProductTraits_H

#include "DataFormats/TrajectorySeed/interface/PropagationDirection.h"
#include <vector>
class Trajectory;


template <class T>
class AlgoProductTraits {
public:
  using TrackCollection=std::vector<T>;
  struct  AlgoProduct {
    Trajectory * trajectory;
    T * track;
    PropagationDirection pDir;
    int indexInput;
  };
  using AlgoProductCollection = std::vector< AlgoProduct >;
};
#endif  //AlgoProductTraits_H
