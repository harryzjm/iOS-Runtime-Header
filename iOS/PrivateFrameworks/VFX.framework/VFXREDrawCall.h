//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface VFXREDrawCall : NSObject
{
    MISSING_TYPE *drawCall;
    MISSING_TYPE *material;
    MISSING_TYPE *aabb;
}

- (void).cxx_destruct;
- (id)init;
- (MISSING_TYPE *)boundingBoxMax;
- (MISSING_TYPE *)boundingBoxMin;
- (void)enumerateTextures:(CDUnknownBlockType)arg1;
- (unsigned long long)primitiveType;
- (long long)instanceCount;
- (long long)vertexCount;
- (void)enumerateBuffers:(CDUnknownBlockType)arg1;
- (unsigned long long)materialIdentifier;

@end
