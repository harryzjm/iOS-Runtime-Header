//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC11WeatherMaps22SnapshotViewController : UIViewController
{
    MISSING_TYPE *annotationViewModelFactory;
    MISSING_TYPE *mapLocationAccessibilityModelManager;
    MISSING_TYPE *overlaySonifier;
    MISSING_TYPE *snapshotManager;
    MISSING_TYPE *snapshotConfiguration;
    MISSING_TYPE *$__lazy_storage_$_snapshotView;
    MISSING_TYPE *initialLayoutHappened;
    MISSING_TYPE *initialTraitCollectionIsAssigned;
    MISSING_TYPE *didBecomeActiveObserver;
    MISSING_TYPE *weatherMapNetworkReachabilityStateDidChangeObserver;
    MISSING_TYPE *snapshotSizeOverride;
    MISSING_TYPE *onMapEventHandler;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewIsAppearing:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)handleInvertColorsStatusDidChangeWithNotification:(id)arg1;
- (void)handleVoiceOverStatusDidChangeWithNotification:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

