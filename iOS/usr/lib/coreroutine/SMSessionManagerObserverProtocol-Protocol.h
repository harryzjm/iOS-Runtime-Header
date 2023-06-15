//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <coreroutine/NSObject-Protocol.h>

@class SMSessionConfiguration, SMSessionManagerState;

@protocol SMSessionManagerObserverProtocol <NSObject>

@optional
- (void)onUserTriggerResponse:(long long)arg1;
- (void)onShouldReleaseKey;
- (void)onSessionStateChanged:(SMSessionManagerState *)arg1 forActiveDevice:(_Bool)arg2;
- (void)onSessionEnded;
- (void)onSessionResumedWithState:(SMSessionManagerState *)arg1 forActiveDevice:(_Bool)arg2;
- (void)onSessionChangedWithConfiguration:(SMSessionConfiguration *)arg1;
- (void)onSessionStartedWithConfiguration:(SMSessionConfiguration *)arg1;
@end

