//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMCameraSignificantEventPersonFamiliarityNotificationCondition, HMCameraSignificantEventReasonNotificationCondition, NSPredicate;

@interface HMMutableCameraBulletinBoardNotificationCondition
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(copy) NSPredicate *dateComponentsPredicate; // @dynamic dateComponentsPredicate;
@property(copy) NSPredicate *presencePredicate; // @dynamic presencePredicate;
@property(copy) HMCameraSignificantEventPersonFamiliarityNotificationCondition *significantEventPersonFamiliarityCondition; // @dynamic significantEventPersonFamiliarityCondition;
@property(copy) HMCameraSignificantEventReasonNotificationCondition *significantEventReasonCondition; // @dynamic significantEventReasonCondition;

@end
