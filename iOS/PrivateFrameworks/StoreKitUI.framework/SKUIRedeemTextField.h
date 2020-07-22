//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextField.h>

@class UIView;

@interface SKUIRedeemTextField : UITextField
{
    UIView *_bottomBorderView;
    UIView *_topBorderView;
    UIView *_backdropView;
    _Bool _backdropBackground;
}

@property(nonatomic) _Bool backdropBackground; // @synthesize backdropBackground=_backdropBackground;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

