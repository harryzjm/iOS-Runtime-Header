//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafetyMonitor/NSObject-Protocol.h>

@class SMHandle, SMMessage;

@protocol SMIDSMessengerProtocolPrivate <NSObject>
- (void)sendIDSMessageToPairedDevice:(SMMessage *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)sendIDSMessageToMyDevices:(SMMessage *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)sendIDSMessage:(SMMessage *)arg1 toHandle:(SMHandle *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

