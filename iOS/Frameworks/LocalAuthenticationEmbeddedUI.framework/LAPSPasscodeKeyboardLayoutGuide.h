//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILayoutGuide.h>

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface LAPSPasscodeKeyboardLayoutGuide : UILayoutGuide
{
    NSLayoutConstraint *_keyboardLayoutHeightLC;
}

- (void).cxx_destruct;
- (double)_defaultHeightConstant;
- (struct CGRect)_owningViewFrameInWindowCoordinates;
- (void)_updateKeyboardLayoutGuide:(id)arg1 animated:(_Bool)arg2;
- (void)_handleKeyboardFrameChange:(id)arg1;
- (void)_setupKeyboardObservers;
- (id)initWithView:(id)arg1;

@end

