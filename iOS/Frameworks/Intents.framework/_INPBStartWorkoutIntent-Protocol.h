//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDataString, _INPBDouble, _INPBIntentMetadata;

@protocol _INPBStartWorkoutIntent <NSObject>
@property(readonly, nonatomic) _Bool hasWorkoutName;
@property(retain, nonatomic) _INPBDataString *workoutName;
@property(nonatomic) _Bool hasWorkoutLocationType;
@property(nonatomic) int workoutLocationType;
@property(nonatomic) _Bool hasWorkoutGoalUnitType;
@property(nonatomic) int workoutGoalUnitType;
@property(nonatomic) _Bool hasIsOpenEnded;
@property(nonatomic) _Bool isOpenEnded;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) _Bool hasGoalValue;
@property(retain, nonatomic) _INPBDouble *goalValue;
- (int)StringAsWorkoutLocationType:(NSString *)arg1;
- (NSString *)workoutLocationTypeAsString:(int)arg1;
- (int)StringAsWorkoutGoalUnitType:(NSString *)arg1;
- (NSString *)workoutGoalUnitTypeAsString:(int)arg1;
@end

