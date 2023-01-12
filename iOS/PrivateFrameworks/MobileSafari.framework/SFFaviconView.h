//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor, UIImage, UIImageSymbolConfiguration, UIImageView;

__attribute__((visibility("hidden")))
@interface SFFaviconView : UIView
{
    UIImageView *_imageView;
    UIImage *_icon;
    UIColor *_themeColor;
    double _trailingInset;
    CDUnknownBlockType _trailingInsetChangeHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType trailingInsetChangeHandler; // @synthesize trailingInsetChangeHandler=_trailingInsetChangeHandler;
@property(readonly, nonatomic) double trailingInset; // @synthesize trailingInset=_trailingInset;
@property(retain, nonatomic) UIColor *themeColor; // @synthesize themeColor=_themeColor;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (id)_determineIconBackingColorAndInsets:(struct UIEdgeInsets *)arg1;
- (void)_updateIconBackingColorAndInset;
- (void)setTrailingInset:(double)arg1;
@property(retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property(nonatomic) long long iconContentMode;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

