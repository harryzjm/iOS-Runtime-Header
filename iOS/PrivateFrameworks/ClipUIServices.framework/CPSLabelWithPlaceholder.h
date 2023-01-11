//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

@class NSString, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface CPSLabelWithPlaceholder : UILabel
{
    UIView *_placeholderView;
    NSString *_text;
    UIColor *_placeholderColor;
    double _placeholderWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double placeholderWidth; // @synthesize placeholderWidth=_placeholderWidth;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
- (struct CGSize)_desiredPlaceholderSize;
- (void)_placeholderInputsDidChange;
- (id)text;
- (void)setText:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
