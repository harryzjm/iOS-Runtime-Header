//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, SFReaderAppearanceThemeSelector, UICollectionView, UICollectionViewCellRegistration;
@protocol SFReaderContext, _SFSettingsAlertOptionsGroupController;

__attribute__((visibility("hidden")))
@interface ReaderFormatViewController : UIViewController
{
    UICollectionView *_collectionView;
    SFReaderAppearanceThemeSelector *_themeSelector;
    id <_SFSettingsAlertOptionsGroupController> _fontGroupController;
    UICollectionViewCellRegistration *_cellRegistrations[2];
    id <SFReaderContext> _readerContext;
    long long _provenance;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long provenance; // @synthesize provenance=_provenance;
@property(readonly, nonatomic) id <SFReaderContext> readerContext; // @synthesize readerContext=_readerContext;
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_updateCloseButton;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithReaderContext:(id)arg1 provenance:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

