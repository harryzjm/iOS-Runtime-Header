//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, NSArray, NSString, NSUserNotificationCenter;

@interface IMMacNotificationCenterManager : NSObject
{
    NSUserNotificationCenter *_center;
    APSConnection *_connection;
    NSArray *_topics;
    NSString *_identifier;
}

@property(retain, nonatomic) NSArray *topics; // @synthesize topics=_topics;
- (void)invalidate;
- (void)_cleanupNotificationCenter;
- (void)updateNotificationsStatus;
- (void)enableNotificationCenter:(_Bool)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 topics:(id)arg2 connection:(id)arg3;

@end
