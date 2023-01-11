//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BannerKit/BNBannerHostSceneViewControllerObserving-Protocol.h>
#import <BannerKit/BNBannerSourceClientToHostInterface-Protocol.h>
#import <BannerKit/BSInvalidatable-Protocol.h>
#import <BannerKit/BSServiceConnectionListenerDelegate-Protocol.h>

@class BSServiceConnectionListener, FBSDisplayConfiguration, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol BNBannerSourceListenerDelegate, OS_dispatch_queue;

@interface BNBannerSourceListener : NSObject <BSServiceConnectionListenerDelegate, BNBannerSourceClientToHostInterface, BNBannerHostSceneViewControllerObserving, BSInvalidatable>
{
    FBSDisplayConfiguration *_displayConfiguration;
    NSSet *_authorizedBundleIDs;
    BSServiceConnectionListener *_connectionListener;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_connections;
    NSMutableSet *_unpreparedPresentables;
    NSMutableDictionary *_requesterIDsToPresentables;
    id <BNBannerSourceListenerDelegate> _delegate;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) __weak id <BNBannerSourceListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_createSceneWithIdentifier:(id)arg1 forProcess:(id)arg2 preferredContentSize:(struct CGSize)arg3 contentOutsets:(struct UIEdgeInsets)arg4;
- (void)_removeAllPresentablesFromRequesterWithIdentifier:(id)arg1;
- (void)_removeAllPresentablesWithRequestIdentifier:(id)arg1 fromRequesterWithIdentifier:(id)arg2;
- (void)_removePresentable:(id)arg1;
- (void)_addPresentable:(id)arg1;
- (_Bool)_removeUnpreparedPresentableWithRequestIdentifier:(id)arg1 requesterIdentifier:(id)arg2;
- (void)_removeUnpreparedPresentable:(id)arg1;
- (_Bool)_isPresentableWaitingToBeMadeReady:(id)arg1;
- (void)_addUnpreparedPresentable:(id)arg1;
- (void)_removeConnection:(id)arg1;
- (void)_addConnection:(id)arg1;
- (_Bool)_isConnectingProcessAuthorized:(id)arg1 error:(out id *)arg2;
- (_Bool)_isPrototypeFeaturesEnabled;
- (void)sceneDidInvalidateForBannerHostSceneViewController:(id)arg1;
- (void)__recommendSuspension:(id)arg1 forReason:(id)arg2 revokingCurrent:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)__revokeAllPresentablesWithRequesterIdentifier:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)__revokePresentableWithRequestIdentifier:(id)arg1 requesterIdentifier:(id)arg2 withAnimation:(id)arg3 reason:(id)arg4 userInfo:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)__postPresentableWithSpecification:(id)arg1 options:(id)arg2 userInfo:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)__layoutDescriptionWithReply:(CDUnknownBlockType)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)layoutDescriptionDidChange:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithServiceDomain:(id)arg1 displayConfiguration:(id)arg2 authorizedBundleIDs:(id)arg3;
- (id)initWithAuthorizedBundleIDs:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
