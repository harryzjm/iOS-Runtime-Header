//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSCH3DFrustumRect : NSObject
{
    float _left;
    float _right;
    float _bottom;
    float _top;
}

+ (id)rectWithLeft:(float)arg1 right:(float)arg2 bottom:(float)arg3 top:(float)arg4;
@property(readonly, nonatomic) float top; // @synthesize top=_top;
@property(readonly, nonatomic) float bottom; // @synthesize bottom=_bottom;
@property(readonly, nonatomic) float right; // @synthesize right=_right;
@property(readonly, nonatomic) float left; // @synthesize left=_left;
- (box_c88174d1)toBox;
- (id)initWithLeft:(float)arg1 right:(float)arg2 bottom:(float)arg3 top:(float)arg4;

@end

