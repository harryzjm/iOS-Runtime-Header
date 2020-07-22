//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Fitness/NSCopying-Protocol.h>

@class HKHealthStore, HKQuantity, NSDate, NSMutableDictionary;

@interface FIActivitySettingsController : NSObject <NSCopying>
{
    HKHealthStore *_healthStore;
    NSMutableDictionary *_dirtyPropertiesMap;
    NSDate *_dateOfBirth;
    HKQuantity *_height;
    HKQuantity *_weight;
    long long _biologicalSex;
    long long _wheelchairUse;
    CDUnknownBlockType _updateHandler;
}

@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(nonatomic) long long wheelchairUse; // @synthesize wheelchairUse=_wheelchairUse;
@property(nonatomic) long long biologicalSex; // @synthesize biologicalSex=_biologicalSex;
@property(retain, nonatomic) HKQuantity *weight; // @synthesize weight=_weight;
@property(retain, nonatomic) HKQuantity *height; // @synthesize height=_height;
@property(retain, nonatomic) NSDate *dateOfBirth; // @synthesize dateOfBirth=_dateOfBirth;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) HKQuantity *leanBodyMass;
- (_Bool)commmitWithError:(id *)arg1;
- (_Bool)_logAndNilError:(id *)arg1 operationDescription:(id)arg2;
- (void)populateExistingCharacteristics;
- (_Bool)_commitValue:(id)arg1 forPropertyKey:(id)arg2 error:(id *)arg3;
- (void)_setUncommitedValue:(id)arg1 forPropertyKey:(id)arg2;
- (_Bool)_hasDirtyPropertyForPropertyKey:(id)arg1;
- (id)initWithHealthStore:(id)arg1;
- (id)init;

@end

