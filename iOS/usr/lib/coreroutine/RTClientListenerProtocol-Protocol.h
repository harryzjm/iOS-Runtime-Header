//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <coreroutine/NSObject-Protocol.h>

@class RTDaemonClient;

@protocol RTClientListenerProtocol <NSObject>
- (void)saveDaemonClient:(RTDaemonClient *)arg1;
- (void)handleDisconnectionForDaemonClient:(RTDaemonClient *)arg1;
- (RTDaemonClient *)handleRestorationForDaemonClient:(RTDaemonClient *)arg1;
@end

