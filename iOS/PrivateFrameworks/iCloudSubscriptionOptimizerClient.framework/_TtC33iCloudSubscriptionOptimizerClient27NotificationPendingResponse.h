//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ISONotificationPendingResponse.h"

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC33iCloudSubscriptionOptimizerClient27NotificationPendingResponse : ISONotificationPendingResponse
{
    MISSING_TYPE *responseError;
    MISSING_TYPE *maxDelayTsMillis;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *debugDescription;
@property(nonatomic, readonly) NSString *description;
- (id)error;
- (id)maxDelayTimestampMillis;
- (_Bool)isNotificationPending;

@end

