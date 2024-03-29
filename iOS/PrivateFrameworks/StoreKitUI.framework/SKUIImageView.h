//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

@class CAShapeLayer, SKUIImagePlaceholder, UIImage, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface SKUIImageView : UIImageView
{
    UITapGestureRecognizer *_tapRecognizer;
    struct CGSize _lastLayoutSize;
    SKUIImagePlaceholder *_placeholder;
    CDUnknownBlockType _cornerPathBlock;
    struct CGSize _imageSize;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cornerPathBlock; // @synthesize cornerPathBlock=_cornerPathBlock;
@property(retain, nonatomic) SKUIImagePlaceholder *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setContents:(id)arg1;
@property(retain, nonatomic) UIImage *image; // @dynamic image;
@property(readonly, nonatomic) UITapGestureRecognizer *tapRecognizer;

// Remaining properties
@property(readonly, nonatomic) CAShapeLayer *layer; // @dynamic layer;

@end

