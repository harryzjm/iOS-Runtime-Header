//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView;

@interface CMKHDRButton
{
    _Bool _allowsAutomaticHDR;
    UIImageView *__glyphView;
}

@property(readonly, nonatomic) UIImageView *_glyphView; // @synthesize _glyphView=__glyphView;
@property(nonatomic) _Bool allowsAutomaticHDR; // @synthesize allowsAutomaticHDR=_allowsAutomaticHDR;
- (void).cxx_destruct;
- (void)reloadData;
- (id)hiddenIndexesWhileCollapsed;
- (void)prepareHeaderViewForExpanding:(_Bool)arg1;
- (void)_updateCurrentGlyphImage;
- (id)_currentGlyphImage;
- (id)headerView;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (long long)indexForMode:(int)arg1;
- (int)modeForIndex:(long long)arg1;
@property(nonatomic) int HDRMode;
- (id)initWithExpansionOrientation:(long long)arg1;
- (void)_commonCMKHDRButtonInitialization;

@end
