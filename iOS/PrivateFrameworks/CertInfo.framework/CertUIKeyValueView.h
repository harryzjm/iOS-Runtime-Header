//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface CertUIKeyValueView : UIView
{
    double _preferredValueLabelOriginX;
    UILabel *_keyLabel;
    UILabel *_valueLabel;
    UIImageView *_verifiedImageView;
    UILabel *_verifiedLabel;
}

+ (double)defaultPreferredValueLabelOriginX;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *verifiedLabel; // @synthesize verifiedLabel=_verifiedLabel;
@property(retain, nonatomic) UIImageView *verifiedImageView; // @synthesize verifiedImageView=_verifiedImageView;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *keyLabel; // @synthesize keyLabel=_keyLabel;
@property(nonatomic) double preferredValueLabelOriginX; // @synthesize preferredValueLabelOriginX=_preferredValueLabelOriginX;
- (id)verifiedColor;
- (id)verifiedFont;
- (id)detailFont;
- (id)titleFont;
- (void)setCheckmarkLabelText:(id)arg1 checkmarkLabelColor:(id)arg2 showCheckmark:(_Bool)arg3;
- (void)setHighlightTextColor:(id)arg1;
- (void)setKey:(id)arg1 value:(id)arg2;
- (void)setItemDetail:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_createVerifiedComponentsIfNeeded;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
