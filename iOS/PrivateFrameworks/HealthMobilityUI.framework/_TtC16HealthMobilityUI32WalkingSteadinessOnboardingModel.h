//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC16HealthMobilityUI32WalkingSteadinessOnboardingModel : NSObject
{
    MISSING_TYPE *onboardingFlowManager;
    MISSING_TYPE *featureStatusManager;
    MISSING_TYPE *detailsProvider;
    MISSING_TYPE *queue;
    MISSING_TYPE *queue_mostRecentNotificationStatus;
    MISSING_TYPE *notificationsEnabled;
    MISSING_TYPE *changedDetailItems;
    MISSING_TYPE *shouldFavoriteByDefault;
}

- (void).cxx_destruct;
- (id)init;
- (void)featureStatusManager:(id)arg1 didUpdateNotificationStatus:(id)arg2;

@end
