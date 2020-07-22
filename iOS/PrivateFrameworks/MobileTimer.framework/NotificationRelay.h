//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NotificationRelay : NSObject
{
    _Bool _refreshManagers;
}

+ (id)sharedRelay;
@property(nonatomic) _Bool refreshManagers; // @synthesize refreshManagers=_refreshManagers;
- (void)refreshManagersForPreferences:(_Bool)arg1 localNotifications:(_Bool)arg2;
- (void)relayFrameworkNotification:(id)arg1;
- (id)init;

@end

