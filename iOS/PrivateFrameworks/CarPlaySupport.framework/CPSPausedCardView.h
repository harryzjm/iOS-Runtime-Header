//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIActivityIndicatorView, UILabel;

@interface CPSPausedCardView
{
    UILabel *_title;
    UIActivityIndicatorView *_spinner;
}

@property(readonly, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(readonly, nonatomic) UILabel *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (id)initWithTitle:(id)arg1 showsSpinner:(_Bool)arg2 backgroundColor:(id)arg3;
- (void)backgroundColorDidChange;
- (id)backgroundColor;

@end

