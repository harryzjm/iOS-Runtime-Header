//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileViewController.h"

@class NSString, PUBrowsingViewModel, PUReviewScreenBarsModel, PUReviewScreenControlBar;

__attribute__((visibility("hidden")))
@interface PUReviewScreenControlBarTileViewController : PUTileViewController
{
    PUBrowsingViewModel *_browsingViewModel;
    PUReviewScreenBarsModel *_barsModel;
    PUReviewScreenControlBar *__controlBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setControlBar:) PUReviewScreenControlBar *_controlBar; // @synthesize _controlBar=__controlBar;
@property(retain, nonatomic) PUReviewScreenBarsModel *barsModel; // @synthesize barsModel=_barsModel;
@property(retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateVisibilityAnimated:(_Bool)arg1;
- (void)_updateBarLayout;
- (void)_updateControls;
- (id)_barControlsForModelControls:(id)arg1 transitioning:(_Bool)arg2;
- (void)_handleSendButtonTapped:(id)arg1;
- (void)_handleFunEffectsButtonTapped:(id)arg1;
- (void)_handleMarkupButtonTapped:(id)arg1;
- (void)_handleEditButtonTapped:(id)arg1;
- (void)becomeReusable;
- (id)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

