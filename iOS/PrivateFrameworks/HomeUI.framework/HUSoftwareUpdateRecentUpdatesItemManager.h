//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@class HMHome, HUSoftwareUpdateItemModule;

@interface HUSoftwareUpdateRecentUpdatesItemManager : HFItemManager
{
    HUSoftwareUpdateItemModule *_softwareUpdateModule;
    HMHome *_overrideHome;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HMHome *overrideHome; // @synthesize overrideHome=_overrideHome;
@property(retain, nonatomic) HUSoftwareUpdateItemModule *softwareUpdateModule; // @synthesize softwareUpdateModule=_softwareUpdateModule;
- (id)_itemsToHideInSet:(id)arg1;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)_homeFuture;
- (id)initWithDelegate:(id)arg1 home:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;

@end
