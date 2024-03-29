//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPImageViewStyle, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface LPImageStackView
{
    NSArray *_images;
    LPImageViewStyle *_style;
    NSMutableArray *_imageViews;
}

+ (void)initialize;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_layoutImagesForSize:(struct CGSize)arg1 applyingLayout:(_Bool)arg2;
- (void)layoutComponentView;
- (id)initWithHost:(id)arg1 images:(id)arg2 style:(id)arg3;
- (id)initWithHost:(id)arg1;

@end

