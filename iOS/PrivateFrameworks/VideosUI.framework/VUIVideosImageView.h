//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIImageView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface VUIVideosImageView : UIImageView
{
    _Bool _selected;
    UIImage *_flatImage;
    UIImage *_highlightOrSelectedImage;
}

+ (id)imageWithImage:(id)arg1 existingImageView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *highlightOrSelectedImage; // @synthesize highlightOrSelectedImage=_highlightOrSelectedImage;
- (void)_updateImage;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setImage:(id)arg1;

@end

