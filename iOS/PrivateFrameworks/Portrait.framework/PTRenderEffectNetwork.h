//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PTRenderEffectNetwork : NSObject
{
    long long _frameIndex;
}

@property long long frameIndex; // @synthesize frameIndex=_frameIndex;
- (void)reset;
- (unsigned int)executeNetwork;
- (id)outDisparity;
- (id)inRGBA;
- (id)initWithDevice:(id)arg1 commandQueue:(id)arg2 colorSize:(CDStruct_da2e99ad)arg3 effectUtil:(id)arg4 util:(id)arg5;

@end
