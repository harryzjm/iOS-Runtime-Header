//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/MKMapViewDelegate-Protocol.h>
#import <Silex/SXFullscreenCanvasViewControllerDelegate-Protocol.h>
#import <Silex/UIGestureRecognizerDelegate-Protocol.h>

@class MKMapView, NSArray, NSCache, NSString, SXFullscreenCanvasViewController, SXMapSnapShotter, SXMediaEngageEvent, UIBarButtonItem, UIImageView, UISegmentedControl, UITapGestureRecognizer;
@protocol SXDocumentTitleProviding;

@interface SXMapComponentView <UIGestureRecognizerDelegate, MKMapViewDelegate, SXFullscreenCanvasViewControllerDelegate>
{
    MKMapView *_mapView;
    UITapGestureRecognizer *_tapGesture;
    NSArray *_annotations;
    id <SXDocumentTitleProviding> _documentTitleProvider;
    UIBarButtonItem *_doneBarButtonItem;
    SXFullscreenCanvasViewController *_fullScreenCanvasViewController;
    UISegmentedControl *_segmentedControl;
    NSArray *_toolbarItems;
    SXMapSnapShotter *_snapShotter;
    UIImageView *_imageView;
    CDUnknownBlockType _snapShotCancelHandler;
    NSCache *_cachedSnapshots;
    SXMediaEngageEvent *_activeMediaEngageEvent;
    CDStruct_02837cd9 _mapRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SXMediaEngageEvent *activeMediaEngageEvent; // @synthesize activeMediaEngageEvent=_activeMediaEngageEvent;
@property(readonly, nonatomic) NSCache *cachedSnapshots; // @synthesize cachedSnapshots=_cachedSnapshots;
@property(copy, nonatomic) CDUnknownBlockType snapShotCancelHandler; // @synthesize snapShotCancelHandler=_snapShotCancelHandler;
@property(nonatomic) CDStruct_02837cd9 mapRect; // @synthesize mapRect=_mapRect;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) SXMapSnapShotter *snapShotter; // @synthesize snapShotter=_snapShotter;
@property(retain, nonatomic) NSArray *toolbarItems; // @synthesize toolbarItems=_toolbarItems;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) SXFullscreenCanvasViewController *fullScreenCanvasViewController; // @synthesize fullScreenCanvasViewController=_fullScreenCanvasViewController;
@property(retain, nonatomic) UIBarButtonItem *doneBarButtonItem; // @synthesize doneBarButtonItem=_doneBarButtonItem;
@property(readonly, nonatomic) id <SXDocumentTitleProviding> documentTitleProvider; // @synthesize documentTitleProvider=_documentTitleProvider;
@property(retain, nonatomic) NSArray *annotations; // @synthesize annotations=_annotations;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void)fullScreenCanvasViewControllerWantsToDismiss:(id)arg1;
- (void)submitMediaEngageCompleteEvent;
- (void)finishMediaEngageEvent;
- (void)createMediaEngageEvent;
- (unsigned long long)analyticsMediaType;
- (void)submitEvents;
- (id)mapTitle;
- (_Bool)hasSelectedAnnotations;
- (_Bool)areBarsHidden;
- (_Bool)isPresentingFullscreen;
- (_Bool)isUserInteractingWithMap;
- (void)enableMapViewInteraction:(_Bool)arg1;
- (void)mapTypeChanged:(id)arg1;
- (unsigned long long)mapTypeForSegmentIndex:(unsigned long long)arg1;
- (unsigned long long)segmentIndexForMapType:(unsigned long long)arg1;
- (void)setupToolbar;
- (void)setupNavigationBar;
- (void)configureMapView;
- (void)handleDoneTap:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)dismissFullScreen;
- (void)presentFullScreen;
- (CDStruct_2b0c6e0b)region;
- (void)cancelSnapShot;
- (void)createSnapShot;
- (void)traitCollectionDidChange:(id)arg1;
- (void)discardContents;
- (void)presentComponentWithChanges:(CDStruct_12a35e6e)arg1;
- (void)renderContents;
- (void)memoryWarning:(id)arg1;
- (void)dealloc;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 documentTitleProvider:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
