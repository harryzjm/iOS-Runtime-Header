//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor, UIImage;

@interface SKUIStackViewItemView : UIView
{
    UIColor *_borderColor;
    UIImage *_image;
    _Bool _shouldFlipImageHorizontal;
    _Bool _shouldFlipImageVertical;
}

@property(nonatomic) _Bool shouldFlipImageVertical; // @synthesize shouldFlipImageVertical=_shouldFlipImageVertical;
@property(nonatomic) _Bool shouldFlipImageHorizontal; // @synthesize shouldFlipImageHorizontal=_shouldFlipImageHorizontal;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

