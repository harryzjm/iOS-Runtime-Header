//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDXPCClientConnection;

__attribute__((visibility("hidden")))
@interface HMDDeviceHomeKitSetupSession : HMFObject
{
    _Bool _firstResidentForHome;
    _Bool _hasFailedRelayAttempt;
    HMDXPCClientConnection *_clientConnection;
}

- (void).cxx_destruct;
@property(readonly) __weak HMDXPCClientConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property _Bool hasFailedRelayAttempt; // @synthesize hasFailedRelayAttempt=_hasFailedRelayAttempt;
@property(getter=isFirstResidentForHome) _Bool firstResidentForHome; // @synthesize firstResidentForHome=_firstResidentForHome;
- (void)markHasFailedRelayAttempt;
@property(readonly) _Bool shouldRelayRequest;
- (id)initWithFirstResidentForHome:(_Bool)arg1 clientConnection:(id)arg2;

@end

