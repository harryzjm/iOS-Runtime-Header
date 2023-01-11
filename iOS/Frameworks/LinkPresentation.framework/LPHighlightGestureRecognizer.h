//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface LPHighlightGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _startPointInWindowCoordinates;
}

- (struct CGPoint)_locationInWindow;
- (void)cancelHighlight;
- (void)updateHighlight;
- (void)startHighlightIfPossible;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
