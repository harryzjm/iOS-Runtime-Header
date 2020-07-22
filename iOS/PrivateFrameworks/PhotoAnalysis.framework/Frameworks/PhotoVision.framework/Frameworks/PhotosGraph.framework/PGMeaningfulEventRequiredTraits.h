//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, PGMeaningfulEventLocationMobilityTrait, PGMeaningfulEventNumberTrait, PGMeaningfulEventPartOfDayTrait, PGMeaningfulEventSceneSetTrait, PGMeaningfulEventSetTrait;

@interface PGMeaningfulEventRequiredTraits
{
    _Bool _requiresSmartInteresting;
    NSString *_meaningLabel;
    double _minimumScore;
    CDUnknownBlockType _completion;
    NSDictionary *_additionalInfo;
}

@property(retain, nonatomic) NSDictionary *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic, getter=isRequiringSmartInteresting) _Bool requiresSmartInteresting; // @synthesize requiresSmartInteresting=_requiresSmartInteresting;
@property(readonly, nonatomic) double minimumScore; // @synthesize minimumScore=_minimumScore;
@property(readonly, nonatomic) NSString *meaningLabel; // @synthesize meaningLabel=_meaningLabel;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMeaningLabel:(id)arg1 minimumScore:(double)arg2;

// Remaining properties
@property(retain, nonatomic) PGMeaningfulEventSetTrait *datesTrait; // @dynamic datesTrait;
@property(retain, nonatomic) PGMeaningfulEventLocationMobilityTrait *locationMobilityTrait; // @dynamic locationMobilityTrait;
@property(retain, nonatomic) PGMeaningfulEventSetTrait *locationsTrait; // @dynamic locationsTrait;
@property(retain, nonatomic) PGMeaningfulEventNumberTrait *maximumDurationTrait; // @dynamic maximumDurationTrait;
@property(retain, nonatomic) PGMeaningfulEventNumberTrait *minimumDurationTrait; // @dynamic minimumDurationTrait;
@property(retain, nonatomic) PGMeaningfulEventNumberTrait *numberOfPeopleTrait; // @dynamic numberOfPeopleTrait;
@property(retain, nonatomic) PGMeaningfulEventPartOfDayTrait *partOfDayTrait; // @dynamic partOfDayTrait;
@property(retain, nonatomic) PGMeaningfulEventSetTrait *peopleTrait; // @dynamic peopleTrait;
@property(retain, nonatomic) PGMeaningfulEventSetTrait *poisTrait; // @dynamic poisTrait;
@property(retain, nonatomic) PGMeaningfulEventSetTrait *roisTrait; // @dynamic roisTrait;
@property(retain, nonatomic) PGMeaningfulEventSceneSetTrait *scenesTrait; // @dynamic scenesTrait;
@property(retain, nonatomic) PGMeaningfulEventSetTrait *socialGroupsTrait; // @dynamic socialGroupsTrait;

@end
