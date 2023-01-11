//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PXChangeObserver-Protocol.h>

@class NSString, PUBrowsingViewModel, PUReviewScreenBarsModel, PUReviewScreenTopBar;

__attribute__((visibility("hidden")))
@interface PUReviewScreenTopBarTileViewController <PXChangeObserver, PUBrowsingViewModelChangeObserver>
{
    PUBrowsingViewModel *_browsingViewModel;
    PUReviewScreenBarsModel *_barsModel;
    PUReviewScreenTopBar *__topBar;
}

@property(retain, nonatomic, setter=_setTopBar:) PUReviewScreenTopBar *_topBar; // @synthesize _topBar=__topBar;
@property(retain, nonatomic) PUReviewScreenBarsModel *barsModel; // @synthesize barsModel=_barsModel;
@property(retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
- (void).cxx_destruct;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateVisibilityAnimated:(_Bool)arg1;
- (void)_updateBarLayout;
- (void)_updateControls;
- (void)_handleRetakeButtonTapped:(id)arg1;
- (void)_handleDoneButtonTapped:(id)arg1;
- (void)becomeReusable;
- (id)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

