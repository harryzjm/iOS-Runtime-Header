//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PNPersonPromoterProfile : NSObject
{
    double _interestingPersonMomentsNormalDistributionSigmaFactor;
    double _interestingPersonMomentsCumulativeNormalDistributionUpperTail;
    double _interestingPersonFacesNormalDistributionSigmaFactor;
    double _interestingPersonFacesCumulativeNormalDistributionUpperTail;
    double _interestingPersonTimeNormalDistributionSigmaFactor;
    double _interestingPersonTimeCumulativeNormalDistributionUpperTail;
    double _interestingPersonLastSeenNormalDistributionSigmaFactor;
    double _interestingPersonLastSeenCumulativeNormalDistributionLowerTail;
    double _interestingPersonLastSeenCumulativeNormalDistributionUpperTail;
    double _highlyInterestingPersonMomentsCumulativeNormalDistributionUpperTail;
    double _highlyInterestingPersonFacesCumulativeNormalDistributionUpperTail;
    double _highlyInterestingPersonTimeCumulativeNormalDistributionUpperTail;
    double _highlyInterestingPersonLastSeenCumulativeNormalDistributionLowerTail;
    double _highlyInterestingPersonLastSeenCumulativeNormalDistributionUpperTail;
    unsigned long long _interestingPersonNormalDistributionsToMatch;
    unsigned long long _highlyInterestingPersonNormalDistributionsToMatch;
}

@property(nonatomic) unsigned long long highlyInterestingPersonNormalDistributionsToMatch; // @synthesize highlyInterestingPersonNormalDistributionsToMatch=_highlyInterestingPersonNormalDistributionsToMatch;
@property(nonatomic) unsigned long long interestingPersonNormalDistributionsToMatch; // @synthesize interestingPersonNormalDistributionsToMatch=_interestingPersonNormalDistributionsToMatch;
@property(nonatomic) double highlyInterestingPersonLastSeenCumulativeNormalDistributionUpperTail; // @synthesize highlyInterestingPersonLastSeenCumulativeNormalDistributionUpperTail=_highlyInterestingPersonLastSeenCumulativeNormalDistributionUpperTail;
@property(nonatomic) double highlyInterestingPersonLastSeenCumulativeNormalDistributionLowerTail; // @synthesize highlyInterestingPersonLastSeenCumulativeNormalDistributionLowerTail=_highlyInterestingPersonLastSeenCumulativeNormalDistributionLowerTail;
@property(nonatomic) double highlyInterestingPersonTimeCumulativeNormalDistributionUpperTail; // @synthesize highlyInterestingPersonTimeCumulativeNormalDistributionUpperTail=_highlyInterestingPersonTimeCumulativeNormalDistributionUpperTail;
@property(nonatomic) double highlyInterestingPersonFacesCumulativeNormalDistributionUpperTail; // @synthesize highlyInterestingPersonFacesCumulativeNormalDistributionUpperTail=_highlyInterestingPersonFacesCumulativeNormalDistributionUpperTail;
@property(nonatomic) double highlyInterestingPersonMomentsCumulativeNormalDistributionUpperTail; // @synthesize highlyInterestingPersonMomentsCumulativeNormalDistributionUpperTail=_highlyInterestingPersonMomentsCumulativeNormalDistributionUpperTail;
@property(nonatomic) double interestingPersonLastSeenCumulativeNormalDistributionUpperTail; // @synthesize interestingPersonLastSeenCumulativeNormalDistributionUpperTail=_interestingPersonLastSeenCumulativeNormalDistributionUpperTail;
@property(nonatomic) double interestingPersonLastSeenCumulativeNormalDistributionLowerTail; // @synthesize interestingPersonLastSeenCumulativeNormalDistributionLowerTail=_interestingPersonLastSeenCumulativeNormalDistributionLowerTail;
@property(nonatomic) double interestingPersonLastSeenNormalDistributionSigmaFactor; // @synthesize interestingPersonLastSeenNormalDistributionSigmaFactor=_interestingPersonLastSeenNormalDistributionSigmaFactor;
@property(nonatomic) double interestingPersonTimeCumulativeNormalDistributionUpperTail; // @synthesize interestingPersonTimeCumulativeNormalDistributionUpperTail=_interestingPersonTimeCumulativeNormalDistributionUpperTail;
@property(nonatomic) double interestingPersonTimeNormalDistributionSigmaFactor; // @synthesize interestingPersonTimeNormalDistributionSigmaFactor=_interestingPersonTimeNormalDistributionSigmaFactor;
@property(nonatomic) double interestingPersonFacesCumulativeNormalDistributionUpperTail; // @synthesize interestingPersonFacesCumulativeNormalDistributionUpperTail=_interestingPersonFacesCumulativeNormalDistributionUpperTail;
@property(nonatomic) double interestingPersonFacesNormalDistributionSigmaFactor; // @synthesize interestingPersonFacesNormalDistributionSigmaFactor=_interestingPersonFacesNormalDistributionSigmaFactor;
@property(nonatomic) double interestingPersonMomentsCumulativeNormalDistributionUpperTail; // @synthesize interestingPersonMomentsCumulativeNormalDistributionUpperTail=_interestingPersonMomentsCumulativeNormalDistributionUpperTail;
@property(nonatomic) double interestingPersonMomentsNormalDistributionSigmaFactor; // @synthesize interestingPersonMomentsNormalDistributionSigmaFactor=_interestingPersonMomentsNormalDistributionSigmaFactor;
- (id)init;

@end

