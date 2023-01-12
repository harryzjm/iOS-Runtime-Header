//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUEventUIFlowDelegate-Protocol.h>
#import <HomeUI/HUEventUIFlowPresentationController-Protocol.h>

@class NSString;
@protocol HUTriggerEventsModuleControllerDelegate;

@interface HUTriggerEventsModuleController <HUEventUIFlowDelegate, HUEventUIFlowPresentationController>
{
    _Bool _allowsEditingEvents;
    id <HUTriggerEventsModuleControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowsEditingEvents; // @synthesize allowsEditingEvents=_allowsEditingEvents;
@property(nonatomic) __weak id <HUTriggerEventsModuleControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)transitionToViewController:(id)arg1;
- (void)eventFlow:(id)arg1 didFinishWithEventBuilderItem:(id)arg2;
- (void)eventFlowDidCancel:(id)arg1;
- (id)trailingSwipeActionsForItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1;
- (id)initWithModule:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
