//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLInUseAssertion, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface LNRuntimeAssertionsTakingConnectionOperation
{
    NSSet *_runtimeAssertions;
    CLInUseAssertion *_locationAssertion;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CLInUseAssertion *locationAssertion; // @synthesize locationAssertion=_locationAssertion;
@property(retain, nonatomic) NSSet *runtimeAssertions; // @synthesize runtimeAssertions=_runtimeAssertions;
- (void)invalidateRuntimeAssertions;
- (void)acquireRuntimeAssertions;
- (id)initWithIdentifier:(id)arg1 connectionInterface:(id)arg2 systemProtocols:(id)arg3 priority:(long long)arg4 queue:(id)arg5 activity:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

