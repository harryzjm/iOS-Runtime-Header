//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit23AttributeStylingControl : UIControl
{
    MISSING_TYPE *contentInsets;
    MISSING_TYPE *useCompactStyle;
    MISSING_TYPE *contentStackView;
    MISSING_TYPE *titleLabel;
    MISSING_TYPE *imageView;
    MISSING_TYPE *titleLabelFont;
    MISSING_TYPE *title;
    MISSING_TYPE *font;
    MISSING_TYPE *image;
    MISSING_TYPE *wantsCapsuleCornerStyle;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
@property(nonatomic) _Bool enabled;
- (_Bool)isEnabled;
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;
@property(nonatomic) _Bool selected;
- (_Bool)isSelected;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;

@end

