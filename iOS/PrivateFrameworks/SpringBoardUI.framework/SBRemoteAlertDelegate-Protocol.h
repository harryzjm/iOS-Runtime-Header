//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUI/NSObject-Protocol.h>

@class NSError;
@protocol SBRemoteAlert;

@protocol SBRemoteAlertDelegate <NSObject>
- (void)remoteAlert:(id <SBRemoteAlert>)arg1 didTerminateWithError:(NSError *)arg2;
- (void)remoteAlertDidRequestInvalidation:(id <SBRemoteAlert>)arg1;
- (void)remoteAlertDidRequestDismissal:(id <SBRemoteAlert>)arg1;
- (void)remoteAlertDidDeactivate:(id <SBRemoteAlert>)arg1;
- (void)remoteAlertDidActivate:(id <SBRemoteAlert>)arg1;
@end

