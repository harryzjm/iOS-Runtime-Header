//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _SRSTSharedClient, _SRSTSharedState;

@protocol _SRSTSharedClientDelegate
- (void)stateMachineWithClient:(_SRSTSharedClient *)arg1 didTransitionToState:(_SRSTSharedState *)arg2;

@optional
- (void)stateMachineWithClient:(_SRSTSharedClient *)arg1 didReceiveEvent:(long long)arg2;
@end

