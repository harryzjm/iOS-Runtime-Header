//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI17CategoryFilterBar : UIScrollView
{
    MISSING_TYPE *categories;
    MISSING_TYPE *selectionHandler;
    MISSING_TYPE *selectedCategory;
    MISSING_TYPE *lastKnownBounds;
    MISSING_TYPE *buttons;
    MISSING_TYPE *selectedButton;
    MISSING_TYPE *$__lazy_storage_$_selectedButtonBackgroundView;
    MISSING_TYPE *needsButtonsLayout;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)categoryButtonTapped:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

