//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PXBasicTileUserData, PXBasicUIViewTileAnimator, PXTitleSubtitleUILabelTile, PXUIImageTile, PXViewLayoutHelper, UILabel;

@interface PXPhotosDetailsHeaderPlaceholderView : UIView
{
    PXBasicUIViewTileAnimator *_tileAnimator;
    struct PXTileGeometry _imageTileGeometry;
    PXUIImageTile *_imageTile;
    PXBasicTileUserData *_imageTileUserData;
    struct PXTileGeometry _initialTextTileGeometry;
    struct PXTileGeometry _textTileGeometry;
    PXTitleSubtitleUILabelTile *_textTile;
    PXBasicTileUserData *_textTileUserData;
    UILabel *_labelForLastBaselineLayout;
    PXViewLayoutHelper *_layoutHelper;
}

@property(readonly, nonatomic) PXViewLayoutHelper *layoutHelper; // @synthesize layoutHelper=_layoutHelper;
- (void).cxx_destruct;
- (void)_layoutLabelForLastBaselineLayout;
- (void)_layoutTile:(id)arg1 withGeometry:(struct PXTileGeometry)arg2 userData:(id)arg3;
- (void)_layoutTextTile;
- (void)_layoutImageTile;
- (void)layoutSubviews;
- (id)viewForLastBaselineLayout;
- (id)initWithRegionOfInterest:(id)arg1;

@end

