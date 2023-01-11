//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class UIImage, UIImageView;

@interface ADPrivacyButton : UIControl
{
    UIImage *_iconImage;
    UIImage *_highlightedIconImage;
    UIImageView *_iconImageView;
}

+ (id)highlightedIconImageForVideo;
+ (id)iconImageForVideo;
+ (id)highlightedIconImage;
+ (id)iconImage;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImage *highlightedIconImage; // @synthesize highlightedIconImage=_highlightedIconImage;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
- (void)setIconImageSize:(struct CGSize)arg1;
- (void)resetIconImagesForVideo;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)init;
- (void)dealloc;

@end

