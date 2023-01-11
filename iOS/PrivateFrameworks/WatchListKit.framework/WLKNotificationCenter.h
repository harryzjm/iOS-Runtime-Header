//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol WLKNotificationCenterDelegate, WLKNotificationsImpl;

@interface WLKNotificationCenter : NSObject
{
    id <WLKNotificationsImpl> _impl;
    id <WLKNotificationCenterDelegate> _delegate;
}

@property(nonatomic) __weak id <WLKNotificationCenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)post:(id)arg1 title:(id)arg2 body:(id)arg3 options:(id)arg4;
- (id)init;

@end
