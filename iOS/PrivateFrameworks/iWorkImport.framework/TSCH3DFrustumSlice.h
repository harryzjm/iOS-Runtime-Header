//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DFrustumSlice : NSObject
{
    tvec3_17f03ce0 _width;
    tvec3_17f03ce0 _height;
    line_190fbfc7 _origin;
}

+ (id)sliceWithOrigin:(line_190fbfc7)arg1 width:(tvec3_17f03ce0)arg2 height:(tvec3_17f03ce0)arg3;
@property(readonly, nonatomic) tvec3_17f03ce0 height; // @synthesize height=_height;
@property(readonly, nonatomic) tvec3_17f03ce0 width; // @synthesize width=_width;
@property(readonly, nonatomic) line_190fbfc7 origin; // @synthesize origin=_origin;
- (id).cxx_construct;
- (tvec3_17f03ce0)atNormalizedPosition:(tvec2_84d5962d)arg1;
- (id)initWithOrigin:(line_190fbfc7)arg1 width:(tvec3_17f03ce0)arg2 height:(tvec3_17f03ce0)arg3;

@end
