//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeUI/HUControlViewDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol HUControlPanelControllerDelegate;

@interface HUControlPanelController : NSObject <HUControlViewDelegate>
{
    NSMutableSet *_allItems;
    id <HUControlPanelControllerDelegate> _delegate;
    NSSet *_configurations;
    NSMutableDictionary *_interactionStateByControlID;
}

@property(readonly, nonatomic) NSMutableDictionary *interactionStateByControlID; // @synthesize interactionStateByControlID=_interactionStateByControlID;
@property(readonly, nonatomic) NSSet *configurations; // @synthesize configurations=_configurations;
@property(readonly, nonatomic) NSSet *allItems; // @synthesize allItems=_allItems;
@property(readonly, nonatomic) __weak id <HUControlPanelControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)controlView:(id)arg1 valueDidChange:(id)arg2;
- (void)controlViewDidEndUserInteraction:(id)arg1;
- (void)controlViewDidBeginUserInteraction:(id)arg1;
- (void)_updateWriteStateForControlItem:(id)arg1 controlPanelItem:(id)arg2;
- (void)_updateWriteStateForControlView:(id)arg1;
- (id)_createWriteThrottleForControlItem:(id)arg1 controlPanelItem:(id)arg2;
- (id)_valueTransformerForControlItem:(id)arg1 controlPanelItem:(id)arg2;
- (id)_configurationForItem:(id)arg1;
- (id)_createConfigurations;
- (id)_controlItemForControlView:(id)arg1;
- (id)_controlPanelItemForControlView:(id)arg1;
- (void)_updateStateForControlView:(id)arg1 controlPanelItem:(id)arg2;
- (_Bool)shouldShowSectionTitleForItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (_Bool)shouldDisplayItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
