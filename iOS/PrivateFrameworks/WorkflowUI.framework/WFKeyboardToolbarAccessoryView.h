//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIInputView.h>

@class NSArray, UIToolbar;

@interface WFKeyboardToolbarAccessoryView : UIInputView
{
    UIToolbar *_toolbar;
}

@property(readonly, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
- (void).cxx_destruct;
- (void)drawRoundedRectangleInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 color:(id)arg3 radius:(double)arg4;
- (id)buttonImageWithSize:(struct CGSize)arg1;
- (id)fixedSpaceItemOfWidth:(double)arg1;
- (id)flexibleSpaceItem;
- (id)borderedButtonItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)plainButtonItemWithTitle:(id)arg1 bolded:(_Bool)arg2 target:(id)arg3 action:(SEL)arg4;
- (double)inverseToolbarPadding;
- (double)keyboardButtonHeight;
- (double)borderedButtonWidthForButtonTitle:(id)arg1 font:(id)arg2;
- (_Bool)isPhoneUI;
- (void)removeAllBarItems;
- (void)prependBarItem:(id)arg1;
- (void)appendBarItem:(id)arg1;
@property(copy, nonatomic) NSArray *barItems;
- (id)init;

@end
