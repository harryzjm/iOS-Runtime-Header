//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXClientServiceConsuming-Protocol.h>
#import <SiriVOX/SVXClientSessionServicing-Protocol.h>

@class NSString;
@protocol SVXClientServiceProviding, SVXClientSessionServiceDelegate, SVXPerforming;

__attribute__((visibility("hidden")))
@interface SVXClientSessionService : NSObject <SVXClientServiceConsuming, SVXClientSessionServicing>
{
    id <SVXPerforming> _performer;
    id <SVXClientServiceProviding> _clientServiceProvider;
    _Bool _isActive;
    long long _currentState;
    id <SVXClientSessionServiceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SVXClientSessionServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
- (void)_setCurrentState:(long long)arg1;
- (void)fetchStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)clientServiceDidChange;
- (id)initWithClientServiceProvider:(id)arg1 performer:(id)arg2;
- (void)handleDidResignActiveWithDeactivationContext:(id)arg1;
- (void)handleWillResignActiveWithOptions:(unsigned long long)arg1 duration:(double)arg2;
- (void)handleDidBecomeActiveWithActivationContext:(id)arg1;
- (void)handleWillBecomeActiveWithActivationContext:(id)arg1;
- (void)handleDidStopSoundWithID:(long long)arg1 error:(id)arg2;
- (void)handleDidStartSoundWithID:(long long)arg1;
- (void)handleWillStartSoundWithID:(long long)arg1;
- (void)handleWillPresentFeedbackWithDialogIdentifier:(id)arg1;
- (void)handleDidChangeStateFrom:(long long)arg1 to:(long long)arg2;
- (void)handleWillChangeStateFrom:(long long)arg1 to:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
