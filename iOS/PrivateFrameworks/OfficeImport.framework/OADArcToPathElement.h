//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OADArcToPathElement
{
    struct OADAdjustPoint mSemiaxes;
    struct OADAdjustCoord mStartAngle;
    struct OADAdjustCoord mAngleLength;
}

- (struct OADAdjustCoord)angleLength;
- (struct OADAdjustCoord)startAngle;
- (struct OADAdjustPoint)semiaxes;
- (id)initWithSemiaxes:(struct OADAdjustPoint)arg1 startAngle:(struct OADAdjustCoord)arg2 angleLength:(struct OADAdjustCoord)arg3;

@end
