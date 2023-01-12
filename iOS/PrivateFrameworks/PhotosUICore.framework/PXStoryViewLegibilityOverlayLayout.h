//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGSolidColorSource-Protocol.h>

@class NSNumber, NSString, PXStoryViewModel;

@interface PXStoryViewLegibilityOverlayLayout <PXGSolidColorSource, PXChangeObserver>
{
    CDStruct_af00bf4e _updateFlags;
    unsigned int _solidDimmingSpriteIndex;
    unsigned int _topGradientDimmingSpriteIndex;
    unsigned int _bottomGradientDimmingSpriteIndex;
    unsigned short _gradientResizableCapInsetsIndex;
    PXStoryViewModel *_viewModel;
    NSNumber *_alphaOverride;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *alphaOverride; // @synthesize alphaOverride=_alphaOverride;
@property(readonly, nonatomic) PXStoryViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)axSpriteIndexes;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)setDetailedPlacementOverride:(id)arg1 forItemReference:(id)arg2;
- (void)getDetailedPresentedPlacement:(id)arg1 forItemReference:(id)arg2;
- (id)imageConfigurationAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)_updateContent;
- (void)_invalidateContent;
- (void)update;
- (void)referenceSizeDidChange;
- (id)initWithViewModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
