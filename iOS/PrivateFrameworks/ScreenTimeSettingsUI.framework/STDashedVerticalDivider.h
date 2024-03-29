//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface STDashedVerticalDivider : UIView
{
    _Bool _selected;
    NSString *_labelText;
    NSLayoutXAxisAnchor *_dashedLineCenterXAnchor;
    NSLayoutYAxisAnchor *_labelTopAnchor;
    UIImageView *_dashedLine;
    UILabel *_label;
    NSLayoutConstraint *_labelLeftConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *labelLeftConstraint; // @synthesize labelLeftConstraint=_labelLeftConstraint;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *dashedLine; // @synthesize dashedLine=_dashedLine;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly) NSLayoutYAxisAnchor *labelTopAnchor; // @synthesize labelTopAnchor=_labelTopAnchor;
@property(readonly) NSLayoutXAxisAnchor *dashedLineCenterXAnchor; // @synthesize dashedLineCenterXAnchor=_dashedLineCenterXAnchor;
@property(copy, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
@property(readonly) UIImage *dashedLineImage;
- (id)initWithTintColor:(id)arg1;

@end

