//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@class TSDInteractiveCanvasController, UITouch;

@interface TSDPreventScrollGestureRecognizer : UIGestureRecognizer
{
    TSDInteractiveCanvasController *mICC;
    UITouch *mTouch;
    UITouch *mSecondTouch;
}

- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (id)initWithInteractiveCanvasController:(id)arg1;

@end

