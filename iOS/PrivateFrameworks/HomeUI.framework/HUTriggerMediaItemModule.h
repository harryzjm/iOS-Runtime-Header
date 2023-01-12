//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemModule.h>

#import <HomeUI/HFItemHiding-Protocol.h>

@class HFItem, HFTriggerBuilder, NSSet, NSString;

@interface HUTriggerMediaItemModule : HFItemModule <HFItemHiding>
{
    NSSet *_itemProviders;
    HFTriggerBuilder *_triggerBuilder;
    HFItem *_mediaRowItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HFItem *mediaRowItem; // @synthesize mediaRowItem=_mediaRowItem;
@property(readonly, nonatomic) HFTriggerBuilder *triggerBuilder; // @synthesize triggerBuilder=_triggerBuilder;
- (id)_itemsToHideInSet:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)_staticItems;
- (id)itemProviders;
- (id)initWithTriggerBuilder:(id)arg1 itemUpdater:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
