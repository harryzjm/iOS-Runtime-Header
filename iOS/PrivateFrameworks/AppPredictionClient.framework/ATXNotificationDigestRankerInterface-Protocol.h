//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppPredictionClient/NSObject-Protocol.h>

@class NSArray;

@protocol ATXNotificationDigestRankerInterface <NSObject>
- (void)appsSortedByNotificationsReceivedInPreviousNumDays:(unsigned long long)arg1 reply:(void (^)(NSArray *, _Bool, unsigned long long, NSError *))arg2;
- (void)generateDigestForNotificationStacks:(NSArray *)arg1 reply:(void (^)(ATXUserNotificationDigest *, NSError *))arg2;
@end
