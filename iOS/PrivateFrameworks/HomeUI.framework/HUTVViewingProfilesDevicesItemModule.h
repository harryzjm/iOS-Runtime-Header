//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemModule.h>

@class HFItemProvider, HFUserItem, HMHome, HMMediaContentProfileAccessControl, NSArray, NSSet;

@interface HUTVViewingProfilesDevicesItemModule : HFItemModule
{
    NSSet *_itemProviders;
    HMHome *_home;
    HFUserItem *_sourceItem;
    HFItemProvider *_viewingProfileItemProvider;
}

@property(retain, nonatomic) HFItemProvider *viewingProfileItemProvider; // @synthesize viewingProfileItemProvider=_viewingProfileItemProvider;
@property(readonly, nonatomic) HFUserItem *sourceItem; // @synthesize sourceItem=_sourceItem;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) NSSet *itemProviders; // @synthesize itemProviders=_itemProviders;
- (void).cxx_destruct;
- (id)_commitUpdateToAccessControl:(id)arg1;
- (void)turnOnTVViewingProfilesForAllDevices;
@property(copy, nonatomic) NSArray *viewingProfilesDevices;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (void)_createItemProviders;
@property(readonly, nonatomic) HMMediaContentProfileAccessControl *accessControl;
- (_Bool)isTVViewingProfileDevice:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 userItem:(id)arg2;

@end
