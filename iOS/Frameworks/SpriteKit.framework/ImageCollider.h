//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ImageCollider : NSObject
{
}

- (struct CGImage *)newCollidingImg:(struct CGImage *)arg1 xform1:(struct CGAffineTransform)arg2 displaySize1:(struct CGSize)arg3 pos1:(struct CGPoint)arg4 anchor1:(struct CGPoint)arg5 mask2:(struct CGImage *)arg6 xform2:(struct CGAffineTransform)arg7 displaySize2:(struct CGSize)arg8 pos2:(struct CGPoint)arg9 anchor2:(struct CGPoint)arg10;
- (struct CGImage *)_newCollidingImg:(struct CGImage *)arg1 xform1:(struct CGAffineTransform)arg2 displaySize1:(struct CGSize)arg3 pos1:(struct CGPoint)arg4 anchor1:(struct CGPoint)arg5 mask2:(struct CGImage *)arg6 xform2:(struct CGAffineTransform)arg7 displaySize2:(struct CGSize)arg8 pos2:(struct CGPoint)arg9 anchor2:(struct CGPoint)arg10;
- (_Bool)isColliding:(struct CGImage *)arg1 xform1:(struct CGAffineTransform)arg2 displaySize1:(struct CGSize)arg3 pos1:(struct CGPoint)arg4 anchor1:(struct CGPoint)arg5 mask2:(struct CGImage *)arg6 xform2:(struct CGAffineTransform)arg7 displaySize2:(struct CGSize)arg8 pos2:(struct CGPoint)arg9 anchor2:(struct CGPoint)arg10;
- (_Bool)_isColliding:(struct CGImage *)arg1 xform1:(struct CGAffineTransform)arg2 displaySize1:(struct CGSize)arg3 pos1:(struct CGPoint)arg4 anchor1:(struct CGPoint)arg5 mask2:(struct CGImage *)arg6 xform2:(struct CGAffineTransform)arg7 displaySize2:(struct CGSize)arg8 pos2:(struct CGPoint)arg9 anchor2:(struct CGPoint)arg10;

@end
