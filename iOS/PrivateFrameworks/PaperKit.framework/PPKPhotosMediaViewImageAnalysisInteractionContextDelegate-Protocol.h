//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIViewController;
@protocol PPKPhotosMediaViewImageAnalysisInteractionContext;

@protocol PPKPhotosMediaViewImageAnalysisInteractionContextDelegate
- (void)contextAvailableResultsDidChange:(id <PPKPhotosMediaViewImageAnalysisInteractionContext>)arg1;
- (void)contextActiveInteractionTypesDidChange:(id <PPKPhotosMediaViewImageAnalysisInteractionContext>)arg1;
- (void)contextDidDismissVisualSearchController:(id <PPKPhotosMediaViewImageAnalysisInteractionContext>)arg1;
- (void)contextWillPresentVisualSearchController:(id <PPKPhotosMediaViewImageAnalysisInteractionContext>)arg1;
- (UIViewController *)presentingViewControllerForContext:(id <PPKPhotosMediaViewImageAnalysisInteractionContext>)arg1;
@end

