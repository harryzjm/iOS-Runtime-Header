//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPButton.h>

@class MTVisualStylingProvider, UILabel;

__attribute__((visibility("hidden")))
@interface MRMediaControlsVideoPickerFooterView : MPButton
{
    MTVisualStylingProvider *_visualStylingProvider;
    UILabel *_customTitleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *customTitleLabel; // @synthesize customTitleLabel=_customTitleLabel;
@property(retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // @synthesize visualStylingProvider=_visualStylingProvider;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateStyle;
- (void)setHighlighted:(_Bool)arg1;
- (id)titleLabelText;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

