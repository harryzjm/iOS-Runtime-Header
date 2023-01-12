//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemModule.h>

#import <HomeUI/HFItemHiding-Protocol.h>

@class HFEventBuilderItemProvider, HFItem, HFStaticItemProvider, HFTriggerBuilder, HUTriggerBuilderItem, NSSet, NSString;

@interface HUTriggerEventsItemModule : HFItemModule <HFItemHiding>
{
    _Bool _hideAddEventButton;
    NSSet *_itemProviders;
    HFTriggerBuilder *_triggerBuilder;
    HFItem *_addEventButtonItem;
    HFEventBuilderItemProvider *_triggerEventsItemProvider;
    HFStaticItemProvider *_staticItemProvider;
    HUTriggerBuilderItem *_triggerBuilderItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HUTriggerBuilderItem *triggerBuilderItem; // @synthesize triggerBuilderItem=_triggerBuilderItem;
@property(retain, nonatomic) HFStaticItemProvider *staticItemProvider; // @synthesize staticItemProvider=_staticItemProvider;
@property(retain, nonatomic) HFEventBuilderItemProvider *triggerEventsItemProvider; // @synthesize triggerEventsItemProvider=_triggerEventsItemProvider;
@property(nonatomic) _Bool hideAddEventButton; // @synthesize hideAddEventButton=_hideAddEventButton;
@property(retain, nonatomic) HFItem *addEventButtonItem; // @synthesize addEventButtonItem=_addEventButtonItem;
@property(readonly, nonatomic) HFTriggerBuilder *triggerBuilder; // @synthesize triggerBuilder=_triggerBuilder;
- (id)_itemsToHideInSet:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)itemProviders;
- (id)_buildItemProviders;
- (id)initWithTriggerBuilder:(id)arg1 itemUpdater:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
