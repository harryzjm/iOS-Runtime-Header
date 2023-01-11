//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BKSTouchDeliveryObserving-Protocol.h>
#import <SpringBoard/SBApplicationRestrictionObserver-Protocol.h>
#import <SpringBoard/SBLayoutStateTransitionObserver-Protocol.h>

@class NSHashTable, NSString, SBLayoutStateTransitionCoordinator;

@interface SBMainDisplayWorkspaceAppInteractionEventSource : NSObject <SBApplicationRestrictionObserver, SBLayoutStateTransitionObserver, BKSTouchDeliveryObserving>
{
    NSHashTable *_observers;
    SBLayoutStateTransitionCoordinator *_stateCoordinator;
    NSString *_currentFocusedBundleID;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currentFocusedBundleID; // @synthesize currentFocusedBundleID=_currentFocusedBundleID;
- (id)_bundleIDsForIcons:(id)arg1;
- (void)_iconVisibilityDidChange:(id)arg1;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)_notifyTransition:(id)arg1 beginning:(_Bool)arg2;
- (void)_webBookmarkUninstalled:(id)arg1;
- (void)_userRemovedSuggestion:(id)arg1;
- (void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3;
- (void)_userQuitApplication:(id)arg1;
- (void)_installedAppsDidChange:(id)arg1;
- (void)_displayLayoutDidUpdate:(id)arg1;
- (void)touchDetachedForIdentifier:(unsigned int)arg1 context:(unsigned int)arg2 pid:(int)arg3;
- (void)touchUpOccuredForIdentifier:(unsigned int)arg1 detached:(_Bool)arg2 context:(unsigned int)arg3 pid:(int)arg4;
- (void)_noteTouchForProcess:(int)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
