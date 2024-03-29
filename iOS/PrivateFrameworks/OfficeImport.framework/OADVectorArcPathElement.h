//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OADVectorArcPathElement
{
    struct OADAdjustCoord mLeft;
    struct OADAdjustCoord mTop;
    struct OADAdjustCoord mRight;
    struct OADAdjustCoord mBottom;
    struct OADAdjustPoint mStartVector;
    struct OADAdjustPoint mEndVector;
    _Bool mClockwise;
    _Bool mConnectedToPrevious;
}

- (_Bool)connectedToPrevious;
- (_Bool)clockwise;
- (struct OADAdjustPoint)endVector;
- (struct OADAdjustPoint)startVector;
- (struct OADAdjustCoord)bottom;
- (struct OADAdjustCoord)right;
- (struct OADAdjustCoord)top;
- (struct OADAdjustCoord)left;
- (id)initWithLeft:(struct OADAdjustCoord)arg1 top:(struct OADAdjustCoord)arg2 right:(struct OADAdjustCoord)arg3 bottom:(struct OADAdjustCoord)arg4 startVector:(struct OADAdjustPoint)arg5 endVector:(struct OADAdjustPoint)arg6 clockwise:(_Bool)arg7 connectedToPrevious:(_Bool)arg8;

@end

