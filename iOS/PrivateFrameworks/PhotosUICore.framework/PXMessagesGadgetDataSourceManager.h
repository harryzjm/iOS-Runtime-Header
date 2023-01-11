//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXCMMCloudGadgetViewControllerDelegate-Protocol.h>

@class NSArray, NSString, PXCMMSuggestionsDataSourceManager, PXCloudWelcomeGadgetProvider, PXMessagesCMMSuggestionsCollectionGadgetProvider, PXMessagesExtensionViewModel, PXMessagesRecentPhotosGadgetProvider, UIViewController;
@protocol PXGadgetDelegate, PXPhotoLibraryPresenting;

@interface PXMessagesGadgetDataSourceManager <PXCMMCloudGadgetViewControllerDelegate>
{
    PXMessagesExtensionViewModel *_viewModel;
    PXCloudWelcomeGadgetProvider *_cloudWelcomeGadgeProvider;
    PXMessagesCMMSuggestionsCollectionGadgetProvider *_suggestionsCollectionGadgetProvider;
    NSArray *_cachedGadgetProviders;
    PXCMMSuggestionsDataSourceManager *_suggestionsDataSourceManager;
    UIViewController<PXPhotoLibraryPresenting> *_recentPhotosViewController;
    double _recentPhotosHeight;
    NSString *_placeholderTitle;
    PXMessagesRecentPhotosGadgetProvider *_recentPhotosProvider;
}

@property(retain, nonatomic) PXMessagesRecentPhotosGadgetProvider *recentPhotosProvider; // @synthesize recentPhotosProvider=_recentPhotosProvider;
@property(copy, nonatomic) NSString *placeholderTitle; // @synthesize placeholderTitle=_placeholderTitle;
@property(nonatomic) double recentPhotosHeight; // @synthesize recentPhotosHeight=_recentPhotosHeight;
@property(retain, nonatomic) UIViewController<PXPhotoLibraryPresenting> *recentPhotosViewController; // @synthesize recentPhotosViewController=_recentPhotosViewController;
@property(retain, nonatomic) PXCMMSuggestionsDataSourceManager *suggestionsDataSourceManager; // @synthesize suggestionsDataSourceManager=_suggestionsDataSourceManager;
- (void).cxx_destruct;
- (void)didUpdateCloudPhotoLibraryEnablement:(id)arg1;
- (void)presentationRequestForWelcomeCloudViewController:(id)arg1;
- (id)gadgetProviders;
- (void)_updateGadgetProviders;
- (id)initWithViewModel:(id)arg1 dataSourceManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <PXGadgetDelegate> nextGadgetResponder;
@property(readonly) Class superclass;

@end

