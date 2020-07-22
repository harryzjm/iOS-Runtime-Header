//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXOneUpPresentationDelegate-Protocol.h>
#import <PhotosUICore/PXPlacesMapControllerChangeDelegate-Protocol.h>
#import <PhotosUICore/PXPlacesMapControllerSelectionDelegate-Protocol.h>
#import <PhotosUICore/PXPlacesMapFetchResultControllerAccess-Protocol.h>

@class NSString, PXPlacesMapFetchResultController, UIBarButtonItem;
@protocol PXPlacesAssetsSelectionDelegate, PXPlacesGeotaggable, PXPlacesMapBarButtonsDelegate, PXPlacesMapGeotaggableInfoDelegate;

@interface PXPlacesMapFetchResultViewController : UIViewController <PXPlacesMapControllerChangeDelegate, PXPlacesMapControllerSelectionDelegate, PXOneUpPresentationDelegate, PXPlacesMapFetchResultControllerAccess>
{
    _Bool _showNavigationBar;
    _Bool _autoRefocusOnDataChange;
    id <PXPlacesAssetsSelectionDelegate> _assetSelectionDelegate;
    id <PXPlacesMapBarButtonsDelegate> _barButtonsDelegate;
    UIViewController *_pxOneUpPresentationViewController;
    unsigned long long _style;
    PXPlacesMapFetchResultController *_mapFetchResultsController;
    id <PXPlacesGeotaggable> _selectedGeotaggable;
    id <PXPlacesMapGeotaggableInfoDelegate> _geotaggableInfoDelegate;
    UIBarButtonItem *_filterAssetsBtn;
}

@property(retain, nonatomic) UIBarButtonItem *filterAssetsBtn; // @synthesize filterAssetsBtn=_filterAssetsBtn;
@property(retain, nonatomic) id <PXPlacesMapGeotaggableInfoDelegate> geotaggableInfoDelegate; // @synthesize geotaggableInfoDelegate=_geotaggableInfoDelegate;
@property(retain) id <PXPlacesGeotaggable> selectedGeotaggable; // @synthesize selectedGeotaggable=_selectedGeotaggable;
@property(retain, nonatomic) PXPlacesMapFetchResultController *mapFetchResultsController; // @synthesize mapFetchResultsController=_mapFetchResultsController;
@property _Bool autoRefocusOnDataChange; // @synthesize autoRefocusOnDataChange=_autoRefocusOnDataChange;
@property(nonatomic) _Bool showNavigationBar; // @synthesize showNavigationBar=_showNavigationBar;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) __weak UIViewController *pxOneUpPresentationViewController; // @synthesize pxOneUpPresentationViewController=_pxOneUpPresentationViewController;
@property(nonatomic) __weak id <PXPlacesMapBarButtonsDelegate> barButtonsDelegate; // @synthesize barButtonsDelegate=_barButtonsDelegate;
@property(nonatomic) __weak id <PXPlacesAssetsSelectionDelegate> assetSelectionDelegate; // @synthesize assetSelectionDelegate=_assetSelectionDelegate;
- (void).cxx_destruct;
- (void)ppt_performPlacesZoomTest:(id)arg1 iterations:(long long)arg2 delay:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)ppt_performPlacesScrollTest:(id)arg1 iterations:(long long)arg2 screenDelta:(long long)arg3 delay:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)didEnterForeground:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (void)didSelectGeotaggableItems:(id)arg1 fromMapView:(id)arg2;
- (void)dataSourceDidChange:(id)arg1;
- (void)mapRegionDidChange:(id)arg1;
- (void)locationServiceAuthorizationChanged;
- (id)dataSourceForAssets:(id)arg1;
- (id)_fetchHydratedAssetForPlacesAsset:(id)arg1;
- (void)_selectedGeotaggables:(id)arg1;
- (void)tapShowAll:(id)arg1;
- (void)tapInfoToolbarButton:(id)arg1;
- (void)tapCountToolbarButton:(id)arg1;
- (void)tapFilterAssetsBtn:(id)arg1;
- (void)_reloadContentModeDisplay:(unsigned long long)arg1;
- (void)_placeBarButtonItems:(id)arg1;
- (void)reloadStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (void)_commonInit;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

