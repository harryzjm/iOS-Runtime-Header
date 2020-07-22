//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AKRectangularAnnotationEventHandler
{
    struct CGPoint _lastMungedPositionInModel;
}

@property struct CGPoint lastMungedPositionInModel; // @synthesize lastMungedPositionInModel=_lastMungedPositionInModel;
- (void)_updateModelFlippednessWithCurrentPoint:(struct CGPoint)arg1;
- (void)updateModelWithCurrentPoint:(struct CGPoint)arg1;
- (struct CGRect)_rectForModifiedRotatedRect:(struct CGRect)arg1 withOriginal:(struct CGRect)arg2 andRotation:(double)arg3;
- (void)setupDraggingConstraints;
- (void)getInitialDraggedPoint:(struct CGPoint *)arg1 otherPoint:(struct CGPoint *)arg2 center:(struct CGPoint *)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5;

@end

