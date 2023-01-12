//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/NSObject-Protocol.h>
#import <MapsUI/UIScrollViewDelegate-Protocol.h>

@class CNContact, CNContactViewController, CNLabeledValue, GEOAttribution, GEOGuideLocation, GEOMapServiceTraits, GEOPlaceCollection, GEOSearchCategory, MKLookAroundView, MKMapItem, NSArray, NSDictionary, NSNumber, NSString, UINavigationController, UIView, UIViewController, _MKPlaceViewController;
@protocol GEOTransitConnectionInfo, GEOTransitDepartureSequence, MKActivityObserving, MKCuratedCollectionsSyncCoordinator, MKTransitLineMarker, _MKInfoCardAnalyticsDelegate, _MKPlaceItem;

@protocol _MKPlaceViewControllerDelegate <NSObject, UIScrollViewDelegate>

@optional
- (void)placeViewController:(_MKPlaceViewController *)arg1 getRemainingQuickLinksBlock:(void (^)(NSArray *))arg2;
- (void)placeViewControllerLinkedServicesDidTapHeaderButton:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidUpdateHeight:(_MKPlaceViewController *)arg1;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectPhotoCategoryAtIndex:(unsigned long long)arg2;
- (void)placeViewControllerDidRequestCopy:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidRequestInformedConsentForAddingContributions:(_MKPlaceViewController *)arg1;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didFinishDismissingViewController:(UIViewController *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 requestsDismissingPresentingViewControllerWithCompletion:(void (^)(UIViewController *))arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectAddRatingsWithObserver:(id <MKActivityObserving>)arg2 overallState:(long long)arg3;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectAddPhotosWithObserver:(id <MKActivityObserving>)arg2 sourceView:(UIView *)arg3 shouldAddFromPhotoLibrary:(_Bool)arg4;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectEditSubmissionWithObserver:(id <MKActivityObserving>)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectAddNewPhotoWithPresentingViewController:(UIViewController *)arg2 progressObserver:(id <MKActivityObserving>)arg3 sourceView:(UIView *)arg4;
- (void)placeViewControllerDidSelectSeeMorePhotos:(_MKPlaceViewController *)arg1;
- (_Bool)shouldMoveLookAroundStorefrontViewForPlaceViewController:(_MKPlaceViewController *)arg1;
- (void)placeViewController:(_MKPlaceViewController *)arg1 enterLookAroundForMapItem:(MKMapItem *)arg2 lookAroundView:(MKLookAroundView *)arg3;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectParent:(MKMapItem *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectSearchCategory:(GEOSearchCategory *)arg2;
- (void)placeViewControllerDidSelectRemoveMarker:(_MKPlaceViewController *)arg1;
- (void)placeViewController:(_MKPlaceViewController *)arg1 showRelatedMapItems:(NSArray *)arg2 withTitle:(NSString *)arg3 originalMapItem:(MKMapItem *)arg4 analyticsDelegate:(id <_MKInfoCardAnalyticsDelegate>)arg5;
- (id <MKCuratedCollectionsSyncCoordinator>)curatedCollectionSyncCoordinator;
- (void)placeViewController:(_MKPlaceViewController *)arg1 seeAllCollections:(NSArray *)arg2 usingTitle:(NSString *)arg3 usingCollectionIds:(NSArray *)arg4;
- (void)placeViewController:(_MKPlaceViewController *)arg1 selectExploreGuidesWithGuideLocation:(GEOGuideLocation *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 selectCuratedCollection:(GEOPlaceCollection *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 selectCollectionIdentifier:(NSString *)arg2;
- (void)placeViewControllerDidSelectAddToCollection:(_MKPlaceViewController *)arg1 sourceView:(UIView *)arg2 sourceRect:(struct CGRect)arg3;
- (NSDictionary *)placeViewController:(_MKPlaceViewController *)arg1 collectionViewsForPlaceItem:(id <_MKPlaceItem>)arg2;
- (void)placeViewControllerDidSelectRefineLocation:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectChangeAddress:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectRemoveShortcut:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectAddShortcut:(_MKPlaceViewController *)arg1;
- (int)mapTypeForPlaceViewController:(_MKPlaceViewController *)arg1;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectTransitAttribution:(GEOAttribution *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectTransitLine:(id <MKTransitLineMarker>)arg2;
- (_Bool)placeViewController:(_MKPlaceViewController *)arg1 canSelectDepartureSequence:(id <GEOTransitDepartureSequence>)arg2 mapItem:(MKMapItem *)arg3;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectDepartureSequence:(id <GEOTransitDepartureSequence>)arg2 mapItem:(MKMapItem *)arg3;
- (void)placeViewController:(_MKPlaceViewController *)arg1 showTransitIncidents:(NSArray *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectTransitConnectionInformation:(id <GEOTransitConnectionInfo>)arg2;
- (void)placeViewControllerDidDismiss:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidCloseFullscreenPhotos:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidOpenFullscreenPhotos:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidTapMiniBrowseCategory:(_MKPlaceViewController *)arg1;
- (void)placeViewController:(_MKPlaceViewController *)arg1 requestPasscodeUnlockWithCompletion:(void (^)(_Bool))arg2;
- (void)placeViewControllerDidUpdateCallProvider:(_MKPlaceViewController *)arg1;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didBecomeContact:(CNContact *)arg2;
- (void)placeViewControllerDidSelectMoreInfo:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectWriteAReview:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectOneReview:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectOnePhoto:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectDisplayedHomePage:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectDisplayedPhoneNumber:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectShowBrandCard:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectInlineMap:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectDisplayedAddress:(_MKPlaceViewController *)arg1;
- (_Bool)placeViewController:(_MKPlaceViewController *)arg1 shouldOpenHomePage:(CNLabeledValue *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectShareCurrentLocationWithCompletion:(void (^)(_Bool))arg2;
- (void)placeViewControllerDidSelectShareLocation:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectAddAPlace:(_MKPlaceViewController *)arg1 isQuickAction:(_Bool)arg2;
- (void)placeViewControllerDidSelectReportAProblem:(_MKPlaceViewController *)arg1 fromView:(UIView *)arg2 isQuickAction:(_Bool)arg3;
- (void)placeViewControllerDidSelectFlyover:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectDropPin:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerContactsDidComplete:(CNContactViewController *)arg1;
- (void)placeViewControllerPresentContactsController:(UINavigationController *)arg1;
- (void)placeViewControllerDidSelectAddToContacts:(_MKPlaceViewController *)arg1;
- (long long)overriddenInterfaceStyleForPlaceViewControllerSubviews:(_MKPlaceViewController *)arg1;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectRouteToCurrentSearchResultWithTransportTypePreference:(NSNumber *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectRouteToCurrentSearchResultWithMode:(unsigned long long)arg2;
- (_Bool)placeViewControllerShouldOverrideCallToActionForHeader:(_MKPlaceViewController *)arg1;
- (double)placeViewControllerPlaceCardHeaderTitleTrailingConstant:(_MKPlaceViewController *)arg1;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectActivityOfType:(NSString *)arg2 completed:(_Bool)arg3;
- (GEOMapServiceTraits *)traitsForPlaceViewController:(_MKPlaceViewController *)arg1;
@end

