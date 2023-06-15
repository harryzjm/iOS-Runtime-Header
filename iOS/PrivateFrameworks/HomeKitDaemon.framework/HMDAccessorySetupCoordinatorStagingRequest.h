//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFMessage, NSError, NSMutableArray, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAccessorySetupCoordinatorStagingRequest : NSObject
{
    NSUUID *_UUID;
    HMFMessage *_pendingCancelMessage;
    HMFMessage *_pendingRequestMessage;
    CDUnknownBlockType _confirmDeviceCredentialCompletionHandler;
    CDUnknownBlockType _selectWiFiNetworkHandler;
    CDUnknownBlockType _selectThreadNetworkHandler;
    CDUnknownBlockType _cancelHandler;
    NSMutableArray *_pendingResponsePayloads;
    NSError *_error;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableArray *pendingResponsePayloads; // @synthesize pendingResponsePayloads=_pendingResponsePayloads;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(copy, nonatomic) CDUnknownBlockType selectThreadNetworkHandler; // @synthesize selectThreadNetworkHandler=_selectThreadNetworkHandler;
@property(copy, nonatomic) CDUnknownBlockType selectWiFiNetworkHandler; // @synthesize selectWiFiNetworkHandler=_selectWiFiNetworkHandler;
@property(copy, nonatomic) CDUnknownBlockType confirmDeviceCredentialCompletionHandler; // @synthesize confirmDeviceCredentialCompletionHandler=_confirmDeviceCredentialCompletionHandler;
@property(retain, nonatomic) HMFMessage *pendingRequestMessage; // @synthesize pendingRequestMessage=_pendingRequestMessage;
@property(retain, nonatomic) HMFMessage *pendingCancelMessage; // @synthesize pendingCancelMessage=_pendingCancelMessage;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)init;

@end

