//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@protocol HMDAuthServerDelegate;

__attribute__((visibility("hidden")))
@interface HMDAuthServer : HMFObject
{
    id <HMDAuthServerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly) __weak id <HMDAuthServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendActivationConfirmation:(id)arg1 uuid:(id)arg2 context:(id)arg3;
- (void)sendActivationRequest:(id)arg1 uuid:(id)arg2 context:(id)arg3;
- (void)sendPPIDInfoRequest:(id)arg1 model:(id)arg2 token:(id)arg3 authFeatures:(unsigned long long)arg4 uuid:(id)arg5 context:(id)arg6;
- (void)getPPIDInfo:(id)arg1 model:(id)arg2 cert:(id)arg3 context:(id)arg4;
- (id)initWithDelegate:(id)arg1;

@end

