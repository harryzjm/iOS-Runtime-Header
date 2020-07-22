//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PUAssetViewModelChangeObserver-Protocol.h>

@class NSString, PUFilmstripWrapperView;

__attribute__((visibility("hidden")))
@interface PUFilmstripTileViewController <PUAssetViewModelChangeObserver>
{
    _Bool __isExpanded;
    PUFilmstripWrapperView *__wrapperView;
    struct CGSize __expandedSize;
}

@property(nonatomic, setter=_setExpandedSize:) struct CGSize _expandedSize; // @synthesize _expandedSize=__expandedSize;
@property(nonatomic, setter=_setExpanded:) _Bool _isExpanded; // @synthesize _isExpanded=__isExpanded;
@property(readonly, nonatomic) PUFilmstripWrapperView *_wrapperView; // @synthesize _wrapperView=__wrapperView;
- (void).cxx_destruct;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (id)_currentIndicatorInfos;
- (void)_updateFilmstripView;
- (void)setAssetViewModel:(id)arg1;
- (void)didChangeAnimating;
- (void)didChangeVisibleRect;
- (_Bool)wantsVisibleRectChanges;
- (void)becomeReusable;
- (void)applyLayoutInfo:(id)arg1;
- (id)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

