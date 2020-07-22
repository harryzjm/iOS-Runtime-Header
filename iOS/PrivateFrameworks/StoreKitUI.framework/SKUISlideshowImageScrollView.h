//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class UIImage, UIImageView;

@interface SKUISlideshowImageScrollView : UIScrollView
{
    UIImageView *_imageView;
    struct CGPoint _centerPointBeforeResize;
    double _scaleBeforeResize;
    UIImage *_image;
}

@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)_resetMinMaxZoomScales;
- (void)_recoverFromResize;
- (void)_prepareToResize;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGRect)visibleRect;
- (void)zoomIntoPoint:(struct CGPoint)arg1;
- (void)resetZoomScale;
- (id)initWithFrame:(struct CGRect)arg1;

@end

