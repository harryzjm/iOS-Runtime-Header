//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NUPixelBufferSourceNode
{
    struct __CVBuffer *_pixelBuffer;
}

- (CDStruct_912cb5d2)pixelSizeWithSourceOptions:(id)arg1;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long *)arg2 error:(out id *)arg3;
- (void)dealloc;
- (id)initWithSettings:(id)arg1 orientation:(long long)arg2;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 settings:(id)arg2 orientation:(long long)arg3;

@end
