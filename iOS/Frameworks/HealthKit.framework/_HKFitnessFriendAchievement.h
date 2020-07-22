//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/NSCopying-Protocol.h>

@class NSDate, NSNumber, NSString, NSUUID;

@interface _HKFitnessFriendAchievement <NSCopying>
{
    NSUUID *_friendUUID;
    NSString *_definitionIdentifier;
    NSDate *_completedDate;
    NSNumber *_value;
    unsigned long long _workoutActivityType;
}

+ (_Bool)supportsSecureCoding;
+ (id)fitnessFriendAchievementFromHKAchievement:(id)arg1;
+ (id)achievementWithDefinitionIdentifier:(id)arg1 completedDate:(id)arg2 value:(id)arg3 workoutActivityType:(unsigned long long)arg4 friendUUID:(id)arg5;
@property(nonatomic) unsigned long long workoutActivityType; // @synthesize workoutActivityType=_workoutActivityType;
@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(retain, nonatomic) NSDate *completedDate; // @synthesize completedDate=_completedDate;
@property(retain, nonatomic) NSString *definitionIdentifier; // @synthesize definitionIdentifier=_definitionIdentifier;
@property(retain, nonatomic) NSUUID *friendUUID; // @synthesize friendUUID=_friendUUID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)hkAchievementFromFriendAchievement;

@end
