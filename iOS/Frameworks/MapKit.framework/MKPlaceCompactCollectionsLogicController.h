//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/MKCompactCollectionDataProvider-Protocol.h>
#import <MapKit/MKCompactCollectionDataUpdater-Protocol.h>
#import <MapKit/MKPlaceBatchConsumer-Protocol.h>

@class GEOGuideLocation, MKPlaceBatchController, NSArray, NSString, UIFont;
@protocol MKPlaceBatchConsumer;

@interface MKPlaceCompactCollectionsLogicController : NSObject <MKPlaceBatchConsumer, MKCompactCollectionDataProvider, MKCompactCollectionDataUpdater>
{
    long long _context;
    NSArray *_sections;
    NSArray *_viewModels;
    NSArray *_batchableLocations;
    NSArray *_flattenedIdentifiersForBatching;
    MKPlaceBatchController *_batchController;
    id <MKPlaceBatchConsumer> _guideConsumer;
    UIFont *_titleFont;
    UIFont *_subTitleFont;
    GEOGuideLocation *_selectedGuideLocation;
    unsigned long long _initialDisplayCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long initialDisplayCount; // @synthesize initialDisplayCount=_initialDisplayCount;
@property(retain, nonatomic) GEOGuideLocation *selectedGuideLocation; // @synthesize selectedGuideLocation=_selectedGuideLocation;
@property(retain, nonatomic) UIFont *subTitleFont; // @synthesize subTitleFont=_subTitleFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) __weak id <MKPlaceBatchConsumer> guideConsumer; // @synthesize guideConsumer=_guideConsumer;
@property(retain, nonatomic) MKPlaceBatchController *batchController; // @synthesize batchController=_batchController;
@property(retain, nonatomic) NSArray *flattenedIdentifiersForBatching; // @synthesize flattenedIdentifiersForBatching=_flattenedIdentifiersForBatching;
@property(retain, nonatomic) NSArray *batchableLocations; // @synthesize batchableLocations=_batchableLocations;
@property(retain, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) long long context; // @synthesize context=_context;
- (void)shouldConsumeBatch:(_Bool)arg1 fetchedBatch:(id)arg2;
- (void)createBatchControllerIfNeededUsingIdentifiers:(id)arg1 usingCollectionFetcher:(id)arg2 usingGuideConsumer:(id)arg3 batchSize:(unsigned long long)arg4;
- (id)buildViewModelsFromGuideLocations:(id)arg1;
- (id)buildBatchingStructureForResult:(id)arg1;
- (void)initializeFonts;
- (void)dismissedCompactCollections;
- (id)compactCollectionAtIndex:(unsigned long long)arg1 sectionIndex:(unsigned long long)arg2;
- (id)compactCollectionsInSection:(unsigned long long)arg1;
- (id)titleForSectionFromTitle:(id)arg1;
- (unsigned long long)numberOfSections;
- (void)willDisplayCellAtIndexpath:(id)arg1;
- (id)initWithGuideLocationsResult:(id)arg1 context:(long long)arg2 usingCollectionFetcher:(id)arg3 usingGuideConsumer:(id)arg4 usingBatchSize:(unsigned long long)arg5 selectedGuideLocation:(id)arg6;
- (id)initWithGuideLocations:(id)arg1 context:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
