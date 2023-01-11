//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UILabel;
@protocol TUICandidateViewStyle;

@interface TUICandidateInlineTextView : UIView
{
    NSString *_text;
    id <TUICandidateViewStyle> _style;
    UILabel *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) id <TUICandidateViewStyle> style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)updateLabels;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

@end
