//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableSample, NSMutableArray, NSString;

@interface HDCodableWorkout : PBCodable <HDDecoding, NSCopying>
{
    double _duration;
    double _goal;
    long long _goalType;
    double _totalBasalEnergyBurnedInCanonicalUnit;
    double _totalDistanceInCanonicalUnit;
    double _totalEnergyBurnedInCanonicalUnit;
    double _totalFlightsClimbedInCanonicalUnit;
    double _totalSwimmingStrokeCountInCanonicalUnit;
    long long _type;
    NSMutableArray *_events;
    HDCodableSample *_sample;
    struct {
        unsigned int duration:1;
        unsigned int goal:1;
        unsigned int goalType:1;
        unsigned int totalBasalEnergyBurnedInCanonicalUnit:1;
        unsigned int totalDistanceInCanonicalUnit:1;
        unsigned int totalEnergyBurnedInCanonicalUnit:1;
        unsigned int totalFlightsClimbedInCanonicalUnit:1;
        unsigned int totalSwimmingStrokeCountInCanonicalUnit:1;
        unsigned int type:1;
    } _has;
}

+ (Class)eventsType;
@property(nonatomic) double totalFlightsClimbedInCanonicalUnit; // @synthesize totalFlightsClimbedInCanonicalUnit=_totalFlightsClimbedInCanonicalUnit;
@property(nonatomic) double totalSwimmingStrokeCountInCanonicalUnit; // @synthesize totalSwimmingStrokeCountInCanonicalUnit=_totalSwimmingStrokeCountInCanonicalUnit;
@property(nonatomic) double totalBasalEnergyBurnedInCanonicalUnit; // @synthesize totalBasalEnergyBurnedInCanonicalUnit=_totalBasalEnergyBurnedInCanonicalUnit;
@property(nonatomic) double goal; // @synthesize goal=_goal;
@property(nonatomic) long long goalType; // @synthesize goalType=_goalType;
@property(nonatomic) double totalDistanceInCanonicalUnit; // @synthesize totalDistanceInCanonicalUnit=_totalDistanceInCanonicalUnit;
@property(nonatomic) double totalEnergyBurnedInCanonicalUnit; // @synthesize totalEnergyBurnedInCanonicalUnit=_totalEnergyBurnedInCanonicalUnit;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) HDCodableSample *sample; // @synthesize sample=_sample;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasTotalFlightsClimbedInCanonicalUnit;
@property(nonatomic) _Bool hasTotalSwimmingStrokeCountInCanonicalUnit;
@property(nonatomic) _Bool hasTotalBasalEnergyBurnedInCanonicalUnit;
@property(nonatomic) _Bool hasGoal;
@property(nonatomic) _Bool hasGoalType;
@property(nonatomic) _Bool hasTotalDistanceInCanonicalUnit;
@property(nonatomic) _Bool hasTotalEnergyBurnedInCanonicalUnit;
@property(nonatomic) _Bool hasDuration;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (void)addEvents:(id)arg1;
- (void)clearEvents;
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasSample;
- (_Bool)applyToObject:(id)arg1;
- (id)decodedGoal;
- (unsigned long long)decodedGoalType;
- (id)decodedTotalFlightsClimbed;
- (id)decodedTotalSwimmingStrokeCount;
- (id)decodedTotalDistance;
- (id)decodedTotalBasalEnergyBurned;
- (id)decodedTotalEnergyBurned;
- (id)decodedWorkoutEvents;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

