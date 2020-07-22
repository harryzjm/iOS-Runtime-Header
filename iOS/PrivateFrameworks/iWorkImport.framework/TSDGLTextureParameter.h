//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSDGLTextureParameter : NSObject
{
    unsigned int _pname;
    unsigned long long _paramCount;
    int *_intData;
    float *_floatData;
}

+ (id)textureParameterWithPName:(unsigned int)arg1 floatParameters:(float *)arg2 count:(unsigned long long)arg3;
+ (id)textureParameterWithPName:(unsigned int)arg1 floatParameter:(float)arg2;
+ (id)textureParameterWithPName:(unsigned int)arg1 integerParameters:(int *)arg2 count:(unsigned long long)arg3;
+ (id)textureParameterWithPName:(unsigned int)arg1 integerParameter:(int)arg2;
+ (id)stringWithCurrentTextureParameters;
- (void)setGLTextureParameter;
- (void)dealloc;
- (id)initWithPName:(unsigned int)arg1 paramCount:(unsigned long long)arg2 intData:(int *)arg3 floatData:(float *)arg4;

@end

