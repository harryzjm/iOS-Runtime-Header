//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXForYouRankable-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class NSDate, NSString, PXMemoriesFeedWidgetDataSourceManager;

@interface PXForYouMemoryGadgetProvider <PXSectionedDataSourceManagerObserver, PXForYouRankable>
{
    _Bool _hasGeneratedGadgets;
    PXMemoriesFeedWidgetDataSourceManager *_dataSourceManager;
    NSDate *_cachedPriorityDate;
}

+ (unsigned long long)maxMemoriesToFetch;
@property(retain, nonatomic) NSDate *cachedPriorityDate; // @synthesize cachedPriorityDate=_cachedPriorityDate;
@property(nonatomic) _Bool hasGeneratedGadgets; // @synthesize hasGeneratedGadgets=_hasGeneratedGadgets;
@property(retain, nonatomic) PXMemoriesFeedWidgetDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
- (void).cxx_destruct;
- (void)resetPriorityDate;
@property(readonly, nonatomic) unsigned long long gadgetType;
@property(readonly, nonatomic) long long defaultPriority;
@property(readonly, nonatomic) long long priorityType;
@property(readonly, nonatomic) NSDate *priorityDate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)generateGadgets;
- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (_Bool)supportsDynamicRanking;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
