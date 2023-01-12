//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXCollectionsDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXForYouRankable-Protocol.h>

@class NSDate, NSString, PXContentSyndicationDataSourceManager;

@interface PXHorizontalContentSyndicationGadgetProvider <PXCollectionsDataSourceManagerObserver, PXChangeObserver, PXForYouRankable>
{
    _Bool _didGenerateGadgets;
    PXContentSyndicationDataSourceManager *_dataSourceManager;
    NSDate *_cachedPriorityDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *cachedPriorityDate; // @synthesize cachedPriorityDate=_cachedPriorityDate;
@property(readonly, nonatomic) _Bool didGenerateGadgets; // @synthesize didGenerateGadgets=_didGenerateGadgets;
@property(readonly, nonatomic) PXContentSyndicationDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
- (void)resetPriorityDate;
@property(readonly, nonatomic) unsigned long long gadgetType;
@property(readonly, nonatomic) long long priorityType;
@property(readonly, nonatomic) long long defaultPriority;
@property(readonly, nonatomic) NSDate *priorityDate;
- (_Bool)supportsDynamicRanking;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)ppt_presentSeeAllViewController;
- (void)generateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)loadDataForGadgets;
- (void)loadDataForPriority;
- (id)init;
- (void)_presentSeeAllViewControllerForGadget:(id)arg1 animated:(_Bool)arg2;
- (void)_updateGadgets;
- (void)_configureDataSourceManagerIfNecessary;
- (void)_configureDataSourceManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
