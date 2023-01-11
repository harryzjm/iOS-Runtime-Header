//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSString, PDScheduledActivityCriteria;
@protocol NSObject><NSSecureCoding;

@protocol PDScheduledActivityClient <NSObject>

@optional
- (void)performScheduledActivityWithIdentifier:(NSString *)arg1 activityCriteria:(PDScheduledActivityCriteria *)arg2 activityContext:(id <NSObject><NSSecureCoding>)arg3;
- (void)performScheduledActivityWithIdentifier:(NSString *)arg1 activityCriteria:(PDScheduledActivityCriteria *)arg2;
@end

