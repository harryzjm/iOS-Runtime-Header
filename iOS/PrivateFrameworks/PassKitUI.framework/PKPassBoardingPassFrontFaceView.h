//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView;

@interface PKPassBoardingPassFrontFaceView
{
    UIImageView *_transitImageView;
    UIImageView *_footerImageView;
}

- (void).cxx_destruct;
- (id)_transitGlyphForTransitType:(long long)arg1;
- (void)layoutSubviews;
- (void)setShowsBarcodeView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)createBodyContentViews;
- (id)tallFaceTemplate;
- (id)shortFaceTemplate;
- (id)shortScrunchedFaceTemplate;

@end
