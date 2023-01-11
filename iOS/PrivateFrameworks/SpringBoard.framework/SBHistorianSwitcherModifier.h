//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBFluidSwitcherScrollProviding-Protocol.h>

@class NSString, SBSwitcherModifier;
@protocol SBFluidSwitcherScrollProviding, SBFluidSwitcherScrollProvidingDelegate, SBHistorianSwitcherModifierDelegate;

@interface SBHistorianSwitcherModifier <SBFluidSwitcherScrollProviding>
{
    id <SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;
    id <SBHistorianSwitcherModifierDelegate> _historianDelegate;
    SBSwitcherModifier<SBFluidSwitcherScrollProviding> *_rootModifier;
}

+ (_Bool)canLogEvent:(id)arg1;
@property(readonly, nonatomic) SBSwitcherModifier<SBFluidSwitcherScrollProviding> *rootModifier; // @synthesize rootModifier=_rootModifier;
@property(nonatomic) __weak id <SBHistorianSwitcherModifierDelegate> historianDelegate; // @synthesize historianDelegate=_historianDelegate;
@property(nonatomic) __weak id <SBFluidSwitcherScrollProvidingDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)_querySnapshotFromModifier:(id)arg1;
- (void)_populateQueryMethodDescription:(id)arg1 fromModifier:(id)arg2 queryName:(id)arg3 descriptionProvider:(CDUnknownBlockType)arg4 appLayouts:(id)arg5;
- (void)_populateIndexedQueryMethodDescription:(id)arg1 fromModifier:(id)arg2 queryName:(id)arg3 descriptionProvider:(CDUnknownBlockType)arg4 appLayouts:(id)arg5;
- (id)_eventSnapshotFromEvent:(id)arg1;
- (id)_actionSnapshotFromAction:(id)arg1;
- (id)_modifierStackSnapshotFromModifier:(id)arg1;
- (id)handleEvent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithRootModifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
