//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableSample, NSData, NSString;

@interface HDCodableFitnessFriendWorkout : PBCodable <HDDecoding, NSCopying>
{
    double _duration;
    double _goal;
    long long _goalType;
    long long _isIndoorWorkout;
    long long _isWatchWorkout;
    double _totalBasalEnergyBurnedInCanonicalUnit;
    double _totalDistanceInCanonicalUnit;
    double _totalEnergyBurnedInCanonicalUnit;
    long long _type;
    NSString *_bundleID;
    NSString *_deviceManufacturer;
    NSString *_deviceModel;
    NSData *_friendUUID;
    HDCodableSample *_sample;
    struct {
        unsigned int duration:1;
        unsigned int goal:1;
        unsigned int goalType:1;
        unsigned int isIndoorWorkout:1;
        unsigned int isWatchWorkout:1;
        unsigned int totalBasalEnergyBurnedInCanonicalUnit:1;
        unsigned int totalDistanceInCanonicalUnit:1;
        unsigned int totalEnergyBurnedInCanonicalUnit:1;
        unsigned int type:1;
    } _has;
}

@property(retain, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(retain, nonatomic) NSString *deviceManufacturer; // @synthesize deviceManufacturer=_deviceManufacturer;
@property(nonatomic) long long isIndoorWorkout; // @synthesize isIndoorWorkout=_isIndoorWorkout;
@property(nonatomic) long long isWatchWorkout; // @synthesize isWatchWorkout=_isWatchWorkout;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) double goal; // @synthesize goal=_goal;
@property(nonatomic) long long goalType; // @synthesize goalType=_goalType;
@property(nonatomic) double totalDistanceInCanonicalUnit; // @synthesize totalDistanceInCanonicalUnit=_totalDistanceInCanonicalUnit;
@property(nonatomic) double totalBasalEnergyBurnedInCanonicalUnit; // @synthesize totalBasalEnergyBurnedInCanonicalUnit=_totalBasalEnergyBurnedInCanonicalUnit;
@property(nonatomic) double totalEnergyBurnedInCanonicalUnit; // @synthesize totalEnergyBurnedInCanonicalUnit=_totalEnergyBurnedInCanonicalUnit;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSData *friendUUID; // @synthesize friendUUID=_friendUUID;
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
@property(readonly, nonatomic) _Bool hasDeviceModel;
@property(readonly, nonatomic) _Bool hasDeviceManufacturer;
@property(nonatomic) _Bool hasIsIndoorWorkout;
@property(nonatomic) _Bool hasIsWatchWorkout;
@property(readonly, nonatomic) _Bool hasBundleID;
@property(nonatomic) _Bool hasGoal;
@property(nonatomic) _Bool hasGoalType;
@property(nonatomic) _Bool hasTotalDistanceInCanonicalUnit;
@property(nonatomic) _Bool hasTotalBasalEnergyBurnedInCanonicalUnit;
@property(nonatomic) _Bool hasTotalEnergyBurnedInCanonicalUnit;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasFriendUUID;
@property(readonly, nonatomic) _Bool hasSample;
- (_Bool)applyToObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

