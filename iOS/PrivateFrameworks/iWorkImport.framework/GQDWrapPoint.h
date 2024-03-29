//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GQDDrawable;

@interface GQDWrapPoint : NSObject
{
    struct CGPoint mPoint;
    float mDistance;
    GQDDrawable *mDrawable;
    int mFlowType;
    int mZIndex;
}

- (int)zIndex;
- (long long)comparePoint:(id)arg1;
- (id)initWithX:(float)arg1 y:(float)arg2 flowType:(int)arg3 drawable:(id)arg4;

@end

