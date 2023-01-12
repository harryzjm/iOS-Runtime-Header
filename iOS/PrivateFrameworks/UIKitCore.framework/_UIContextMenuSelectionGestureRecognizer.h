//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

__attribute__((visibility("hidden")))
@interface _UIContextMenuSelectionGestureRecognizer : UIGestureRecognizer
{
    struct CGVector _allowableMovement;
    struct CGPoint _originalLocation;
}

+ (_Bool)_supportsTouchContinuation;
@property(nonatomic) struct CGPoint originalLocation; // @synthesize originalLocation=_originalLocation;
@property(nonatomic) struct CGVector allowableMovement; // @synthesize allowableMovement=_allowableMovement;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;
- (void)_cancelOrFail;
- (id)init;

@end

