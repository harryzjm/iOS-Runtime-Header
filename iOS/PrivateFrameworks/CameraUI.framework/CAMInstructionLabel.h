//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;
@protocol CAMInstructionLabelDelegate;

@interface CAMInstructionLabel : UIView
{
    _Bool _useModeDialFontSize;
    NSString *_text;
    id <CAMInstructionLabelDelegate> _delegate;
    long long _style;
    UILabel *__label;
}

@property(readonly, nonatomic) UILabel *_label; // @synthesize _label=__label;
@property(nonatomic) _Bool useModeDialFontSize; // @synthesize useModeDialFontSize=_useModeDialFontSize;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <CAMInstructionLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
@property(readonly, nonatomic) double _backgroundAlpha;
@property(readonly, nonatomic) struct UIEdgeInsets _textInsets;
- (void)_updateLayer;
- (void)_updateLabel;
- (id)_textAttributes;
- (void)layoutSubviews;
- (void)updateToContentSize:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

