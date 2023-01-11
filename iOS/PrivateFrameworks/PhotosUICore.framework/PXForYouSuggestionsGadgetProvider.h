//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class NSArray, NSMapTable, NSString, PXAssetReference, PXAssetsDataSourceManager, PXSuggestionsDataSource, PXSuggestionsDataSourceManager;

@interface PXForYouSuggestionsGadgetProvider <PXSectionedDataSourceManagerObserver>
{
    _Bool _hasGeneratedGadgets;
    NSMapTable *_keyAssetFetchesBySuggestion;
    PXSuggestionsDataSourceManager *_dataSourceManager;
    NSString *_localizedTitle;
    NSArray *_oneUpAssets;
    PXAssetReference *_oneUpInitialAssetReference;
    PXAssetsDataSourceManager *_oneUpDataSourceManager;
    PXSuggestionsDataSource *_dataSource;
}

@property(readonly, nonatomic) PXSuggestionsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) PXAssetsDataSourceManager *oneUpDataSourceManager; // @synthesize oneUpDataSourceManager=_oneUpDataSourceManager;
@property(retain, nonatomic) PXAssetReference *oneUpInitialAssetReference; // @synthesize oneUpInitialAssetReference=_oneUpInitialAssetReference;
@property(retain, nonatomic) NSArray *oneUpAssets; // @synthesize oneUpAssets=_oneUpAssets;
@property(readonly, copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic) PXSuggestionsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)keyAssetForSuggestion:(id)arg1;
- (void)suggestionGadgetsWantsOneUpPresentation:(id)arg1;
- (void)presentOneUpForSuggestion:(id)arg1;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (id)_gadgetForAssetReference:(id)arg1;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (void)generateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)loadDataForGadgets;
- (void)configureGadget:(id)arg1;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1 localizedTitle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
