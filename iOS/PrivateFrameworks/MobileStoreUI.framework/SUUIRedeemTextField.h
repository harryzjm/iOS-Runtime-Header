//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextField.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface SUUIRedeemTextField : UITextField
{
    UIView *_bottomBorderView;
    UIView *_topBorderView;
    UIView *_backdropView;
    _Bool _backdropBackground;
    _Bool _suppressBorder;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool suppressBorder; // @synthesize suppressBorder=_suppressBorder;
@property(nonatomic) _Bool backdropBackground; // @synthesize backdropBackground=_backdropBackground;
- (void)layoutSubviews;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

