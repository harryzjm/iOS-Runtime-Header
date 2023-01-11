//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSSimulatorSupport/IDSSimClientProtocol-Protocol.h>

@class NSString;

@interface IDSSimClient : NSObject <IDSSimClientProtocol>
{
}

+ (id)sharedInstance;
- (void)_informClientOfSwitchToActivePairedDeviceWithSimulatorID:(id)arg1;
- (void)didSwitchToActivePairedDeviceWithSimulatorID:(id)arg1;
- (void)connectionStateDidChange:(unsigned long long)arg1 simulatorID:(id)arg2;
- (void)receiveData:(id)arg1 withServiceName:(id)arg2 messageID:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
