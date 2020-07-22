//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CTCarrierSpace/CTCarrierSpaceClientDelegateProxyInterface-Protocol.h>

@class NSString;
@protocol CTCarrierSpaceClientDelegate;

@interface CTCarrierSpaceClientDelegateProxy : NSObject <CTCarrierSpaceClientDelegateProxyInterface>
{
    id <CTCarrierSpaceClientDelegate> _delegate;
}

@property(nonatomic) __weak id <CTCarrierSpaceClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)purchasedPlan:(id)arg1 didChangeStatus:(long long)arg2 context:(id)arg3;
- (void)dataPlanMetricsDidChange;
- (void)appsDidChange;
- (void)plansDidChange;
- (void)usageDidChange;
- (void)userConsentFlowInfoDidChange;
- (void)capabilitiesDidChange:(id)arg1;
- (void)remoteObjectRespondsToSelector:(SEL)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
