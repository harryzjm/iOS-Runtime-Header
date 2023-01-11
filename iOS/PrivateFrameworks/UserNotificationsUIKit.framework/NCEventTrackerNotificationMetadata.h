//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/NSCopying-Protocol.h>

@class NSDate, NSString;

@interface NCEventTrackerNotificationMetadata : NSObject <NSCopying>
{
    NSString *_notificationIdentifier;
    NSString *_bundleIdentifier;
    NSDate *_date;
}

+ (id)metadataForNotificationRequest:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSDate *date; // @synthesize date=_date;
@property(readonly, copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy) NSString *notificationIdentifier; // @synthesize notificationIdentifier=_notificationIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)_initWithNotificationIdentifier:(id)arg1 bundleIdentifier:(id)arg2 date:(id)arg3;

@end
