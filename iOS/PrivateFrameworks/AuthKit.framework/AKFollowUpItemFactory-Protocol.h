//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthKit/NSObject-Protocol.h>

@class FLFollowUpItem, NSArray, NSString;

@protocol AKFollowUpItemFactory <NSObject>
- (_Bool)IsFollowUpItemNotificationForced:(FLFollowUpItem *)arg1;
- (NSArray *)itemIdentifiersRequiringNotificationClearFromPayload:(NSArray *)arg1;
- (NSArray *)itemsForAltDSID:(NSString *)arg1 fromIDMSPayload:(NSArray *)arg2;
@end

