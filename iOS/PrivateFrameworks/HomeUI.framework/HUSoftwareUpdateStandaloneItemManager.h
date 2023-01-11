//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

#import <HomeUI/HFHomeObserver-Protocol.h>

@class HFItem, HMHome, HUSoftwareUpdateFetchItem, HUSoftwareUpdateItemModule, NAFuture, NSString;

@interface HUSoftwareUpdateStandaloneItemManager : HFItemManager <HFHomeObserver>
{
    HFItem *_autoUpdateItem;
    HUSoftwareUpdateFetchItem *_fetchItem;
    HUSoftwareUpdateItemModule *_softwareUpdateModule;
    NAFuture *_softwareUpdateFetchFuture;
    HMHome *_overrideHome;
}

@property(retain, nonatomic) HMHome *overrideHome; // @synthesize overrideHome=_overrideHome;
@property(retain, nonatomic) NAFuture *softwareUpdateFetchFuture; // @synthesize softwareUpdateFetchFuture=_softwareUpdateFetchFuture;
@property(retain, nonatomic) HUSoftwareUpdateItemModule *softwareUpdateModule; // @synthesize softwareUpdateModule=_softwareUpdateModule;
@property(retain, nonatomic) HUSoftwareUpdateFetchItem *fetchItem; // @synthesize fetchItem=_fetchItem;
@property(retain, nonatomic) HFItem *autoUpdateItem; // @synthesize autoUpdateItem=_autoUpdateItem;
- (void).cxx_destruct;
- (void)home:(id)arg1 didUpdateAutomaticSoftwareUpdateEnabled:(_Bool)arg2;
- (id)triggerSoftwareUpdateFetch;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_homeFuture;
- (id)initWithDelegate:(id)arg1 home:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

