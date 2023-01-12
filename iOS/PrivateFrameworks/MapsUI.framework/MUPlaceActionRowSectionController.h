//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUPlaceSectionController.h"

@class MUPlaceCardActionsRowViewController, MUPlaceSectionView, MUPlaceholderGridCache, NSString;
@protocol MKPlaceActionManagerProtocol, MUPlaceActionRowMenuProvider;

__attribute__((visibility("hidden")))
@interface MUPlaceActionRowSectionController : MUPlaceSectionController
{
    id <MKPlaceActionManagerProtocol> _actionManager;
    MUPlaceCardActionsRowViewController *_actionsRowViewController;
    MUPlaceSectionView *_sectionView;
    MUPlaceholderGridCache *_placeholderGridCache;
    id <MUPlaceActionRowMenuProvider> _menuProvider;
}

- (void).cxx_destruct;
- (_Bool)isImpressionable;
- (int)analyticsModuleType;
- (id)analyticsModule;
- (_Bool)hasContent;
- (void)updateForActionRowInfoChange;
- (id)sectionView;
- (id)menuElementForActionItem:(id)arg1;
- (id)menuForActionItem:(id)arg1;
- (void)_setupButtons;
- (id)initWithMapItem:(id)arg1 actionManager:(id)arg2 menuProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

