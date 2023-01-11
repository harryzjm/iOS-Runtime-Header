//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/SBFSpringLoadedInteractionBehaviorDelegate-Protocol.h>
#import <SpringBoardHome/SBFSpringLoadedInteractionEffectDelegate-Protocol.h>
#import <SpringBoardHome/UIDropInteractionDelegate-Protocol.h>

@class NSMapTable, NSMutableSet, NSString, SBIconListView, UIDropInteraction;
@protocol SBIconListViewDraggingPolicyHandling;

@interface SBIconListViewDraggingDestinationDelegate : NSObject <SBFSpringLoadedInteractionBehaviorDelegate, SBFSpringLoadedInteractionEffectDelegate, BSDescriptionProviding, UIDropInteractionDelegate>
{
    NSMapTable *_dragObservers;
    NSMutableSet *_activeDropSessionIdentifiers;
    NSMutableSet *_dropSessionIdentifiersWaitingForConcludeDrop;
    _Bool _waitingForConcludeDrag;
    SBIconListView *_iconListView;
    UIDropInteraction *_dropInteraction;
    unsigned long long _currentDragType;
    id <SBIconListViewDraggingPolicyHandling> _currentPolicyHandler;
    unsigned long long _currentSpringLoadedDragType;
    id <SBIconListViewDraggingPolicyHandling> _springLoadingPolicyHandler;
}

+ (unsigned long long)dragTypeForDropSession:(id)arg1;
@property(nonatomic, getter=isWaitingForConcludeDrag) _Bool waitingForConcludeDrag; // @synthesize waitingForConcludeDrag=_waitingForConcludeDrag;
@property(retain, nonatomic) id <SBIconListViewDraggingPolicyHandling> springLoadingPolicyHandler; // @synthesize springLoadingPolicyHandler=_springLoadingPolicyHandler;
@property(nonatomic) unsigned long long currentSpringLoadedDragType; // @synthesize currentSpringLoadedDragType=_currentSpringLoadedDragType;
@property(retain, nonatomic) id <SBIconListViewDraggingPolicyHandling> currentPolicyHandler; // @synthesize currentPolicyHandler=_currentPolicyHandler;
@property(nonatomic) unsigned long long currentDragType; // @synthesize currentDragType=_currentDragType;
@property(readonly, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property(readonly, nonatomic) __weak SBIconListView *iconListView; // @synthesize iconListView=_iconListView;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)_resetSpringLoadingPolicyHandler;
- (void)_handleSpringloadAndComplete:(id)arg1;
- (id)targetViewForSpringLoadingEffectForView:(id)arg1;
- (void)springLoadedInteractionDidFinish;
- (id)targetItemForSpringLoadingInteractionInView:(id)arg1 atLocation:(struct CGPoint)arg2 forDropSession:(id)arg3;
@property(readonly, copy) NSString *description;
- (_Bool)updateSpringLoadedPolicyHandlerForDropSession:(id)arg1;
- (_Bool)updateCurrentPolicyHandlerForDropSession:(id)arg1;
- (_Bool)isDropSessionWaitingForConcludeDrop:(id)arg1;
- (void)unmarkDropSessionAsWaitingForConcludeDrop:(id)arg1;
- (void)markDropSessionAsWaitingForConcludeDrop:(id)arg1;
- (void)removeAllDragObserversForDropSession:(id)arg1;
- (void)enumerateDragObserversForDropSession:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)addDragObserver:(id)arg1 forDropSession:(id)arg2;
- (id)uniqueIdentifierForDropSession:(id)arg1;
- (id)initWithIconListView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
