//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBFSpringLoadedInteractionBehaviorDelegate-Protocol.h>
#import <SpringBoardHome/SBFSpringLoadedInteractionEffectDelegate-Protocol.h>
#import <SpringBoardHome/UIDropInteractionDelegate-Protocol.h>

@class NSString, SBIconView, UIDropInteraction;
@protocol SBHLibraryIndicatorIconDropInteractionContextProviding;

@interface SBHLibraryIndicatorIconDropInteractionDelegate : NSObject <SBFSpringLoadedInteractionBehaviorDelegate, SBFSpringLoadedInteractionEffectDelegate, UIDropInteractionDelegate>
{
    SBIconView *_libraryIndicatorIconView;
    id <SBHLibraryIndicatorIconDropInteractionContextProviding> _contextProvider;
    UIDropInteraction *_dropInteraction;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property(nonatomic) __weak id <SBHLibraryIndicatorIconDropInteractionContextProviding> contextProvider; // @synthesize contextProvider=_contextProvider;
@property(readonly, nonatomic) __weak SBIconView *libraryIndicatorIconView; // @synthesize libraryIndicatorIconView=_libraryIndicatorIconView;
- (void)_updateIndicatorIconViewForSession:(id)arg1 isActive:(_Bool)arg2;
- (void)_handleSpringLoadedInteractionDidActivateWithContext:(id)arg1;
- (void)_notifyDidPerformDropForSession:(id)arg1;
- (id)_iconModel;
- (_Bool)_canPerformDropForDraggedIcon:(id)arg1;
- (_Bool)_canPerformDropForDragItem:(id)arg1;
- (_Bool)_canPerformDropForAnyItemInSession:(id)arg1;
- (id)_draggedItemIdentifiersInSession:(id)arg1;
- (id)_iconIdentifierForDragItem:(id)arg1;
- (id)targetViewForSpringLoadingEffectForView:(id)arg1;
- (id)targetItemForSpringLoadingInteractionInView:(id)arg1 atLocation:(struct CGPoint)arg2 forDropSession:(id)arg3;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (id)initWithLibraryIndicatorIconView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
