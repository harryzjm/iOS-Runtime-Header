//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSObject.h>

#import <WatchListKitUI/WLKUINotificationCenter-Protocol.h>

@protocol WLKUINotificationsImpl;

@interface WLKUINotificationCenter : IKJSObject <WLKUINotificationCenter>
{
    id <WLKUINotificationsImpl> _impl;
}

- (void).cxx_destruct;
- (void)handleAction:(id)arg1;
- (void)post:(id)arg1:(id)arg2:(id)arg3:(id)arg4;
- (id)initWithAppContext:(id)arg1;

@end

