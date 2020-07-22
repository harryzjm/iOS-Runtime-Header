//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SetupAssistant/NSObject-Protocol.h>

@class SASProximityHandshake, SASProximityInformation;

@protocol BYDaemonProximityTargetProtocol <NSObject>
- (void)storeHandshake:(SASProximityHandshake *)arg1;
- (void)storeInformation:(SASProximityInformation *)arg1;
- (void)resumeProximitySetup:(void (^)(SASProximityHandshake *, SASProximityInformation *, CUMessageSession *, NSString *, NSString *, _Bool))arg1;
- (void)hasConnection:(void (^)(_Bool))arg1;
- (void)endPairing;
- (void)endAdvertisingProximitySetup;
- (void)beginAdvertisingProximitySetup;
@end

