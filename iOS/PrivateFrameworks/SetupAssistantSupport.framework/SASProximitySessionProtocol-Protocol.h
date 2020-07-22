//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SetupAssistantSupport/NSObject-Protocol.h>

@class CUMessageSession, NSError, SASProximityAction;
@protocol SASProximitySessionDelegate;

@protocol SASProximitySessionProtocol <NSObject>
@property(getter=isConnected) _Bool connected;
@property(retain) CUMessageSession *sharingMessageSession;
@property id <SASProximitySessionDelegate> delegate;
- (NSError *)sendAction:(SASProximityAction *)arg1;
- (void)invalidate;
- (void)activate;
@end
