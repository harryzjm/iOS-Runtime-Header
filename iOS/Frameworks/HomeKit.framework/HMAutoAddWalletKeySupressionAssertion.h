//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFAssertion.h>

@class HMHomeManager, NSUUID;

__attribute__((visibility("hidden")))
@interface HMAutoAddWalletKeySupressionAssertion : HMFAssertion
{
    HMHomeManager *_homeManager;
    NSUUID *_homeUUID;
}

- (void).cxx_destruct;
@property(readonly, copy) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(readonly) __weak HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void)invalidate;
- (void)acquireWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithHomeManager:(id)arg1 homeUUID:(id)arg2;

@end

