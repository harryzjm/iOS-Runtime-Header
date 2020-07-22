//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/_HKFitnessFriendAchievement.h>

#import <ActivitySharing/ASCloudKitCodable-Protocol.h>

@class ASCodableCloudKitAchievement, NSString;

@interface _HKFitnessFriendAchievement (CloudKitCodingSupport) <ASCloudKitCodable>
+ (id)_fitnessFriendAchievementWithCodableAchievement:(id)arg1 friendUUID:(id)arg2;
+ (id)fitnessFriendAchievementWithCodableAchievement:(id)arg1 friendUUID:(id)arg2;
+ (id)fitnessFriendAchievementWithCodableAchievement:(id)arg1;
+ (struct _HKFitnessFriendAchievement *)fitnessFriendAchievementWithRecord:(id)arg1 friendUUID:(id)arg2;
- (id)recordWithZoneID:(id)arg1;
@property(readonly, nonatomic) ASCodableCloudKitAchievement *codableAchievement;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

