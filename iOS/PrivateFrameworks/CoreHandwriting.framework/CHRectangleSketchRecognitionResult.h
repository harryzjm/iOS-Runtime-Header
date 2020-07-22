//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CHRectangleSketchRecognitionResult
{
    struct CGPoint _upperLeftPoint;
    struct CGPoint _upperRightPoint;
    struct CGPoint _lowerLeftPoint;
    struct CGPoint _lowerRightPoint;
}

@property(readonly) struct CGPoint lowerRightPoint; // @synthesize lowerRightPoint=_lowerRightPoint;
@property(readonly) struct CGPoint lowerLeftPoint; // @synthesize lowerLeftPoint=_lowerLeftPoint;
@property(readonly) struct CGPoint upperRightPoint; // @synthesize upperRightPoint=_upperRightPoint;
@property(readonly) struct CGPoint upperLeftPoint; // @synthesize upperLeftPoint=_upperLeftPoint;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 upperLeftPoint:(struct CGPoint)arg4 upperRightPoint:(struct CGPoint)arg5 lowerLeftPoint:(struct CGPoint)arg6 lowerRightPoint:(struct CGPoint)arg7;

@end

