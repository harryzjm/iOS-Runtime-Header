//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@class HFDemoModeFaceRecognitionDataSource, HFItem, HFItemProvider, HFStaticItem, HFStaticItemProvider, HFUserPhotosLibraryItemProvider, HMHome, NSArray;

@interface HUFaceRecognitionLibraryListItemManager : HFItemManager
{
    _Bool _didSendAnalyticsEvent;
    HFItem *_allowFacialRecognitionItem;
    HFStaticItem *_knownToHomeItem;
    unsigned long long _recentsLimit;
    HMHome *_overrideHome;
    HFStaticItemProvider *_staticItemProvider;
    HFUserPhotosLibraryItemProvider *_userPhotosLibraryItemProvider;
    HFItemProvider *_recentEventsItemProvider;
    HFDemoModeFaceRecognitionDataSource *_demoDataSource;
    NSArray *_coalescedPersonEvents;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didSendAnalyticsEvent; // @synthesize didSendAnalyticsEvent=_didSendAnalyticsEvent;
@property(retain, nonatomic) NSArray *coalescedPersonEvents; // @synthesize coalescedPersonEvents=_coalescedPersonEvents;
@property(retain, nonatomic) HFDemoModeFaceRecognitionDataSource *demoDataSource; // @synthesize demoDataSource=_demoDataSource;
@property(retain, nonatomic) HFItemProvider *recentEventsItemProvider; // @synthesize recentEventsItemProvider=_recentEventsItemProvider;
@property(retain, nonatomic) HFUserPhotosLibraryItemProvider *userPhotosLibraryItemProvider; // @synthesize userPhotosLibraryItemProvider=_userPhotosLibraryItemProvider;
@property(retain, nonatomic) HFStaticItemProvider *staticItemProvider; // @synthesize staticItemProvider=_staticItemProvider;
@property(readonly, nonatomic) HMHome *overrideHome; // @synthesize overrideHome=_overrideHome;
@property(nonatomic) unsigned long long recentsLimit; // @synthesize recentsLimit=_recentsLimit;
@property(retain, nonatomic) HFStaticItem *knownToHomeItem; // @synthesize knownToHomeItem=_knownToHomeItem;
@property(retain, nonatomic) HFItem *allowFacialRecognitionItem; // @synthesize allowFacialRecognitionItem=_allowFacialRecognitionItem;
- (void)sendAnalyticsEvent;
- (id)_homeFuture;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithHome:(id)arg1 delegate:(id)arg2;

@end
