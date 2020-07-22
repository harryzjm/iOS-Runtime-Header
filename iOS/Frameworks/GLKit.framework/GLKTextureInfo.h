//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <GLKit/NSCopying-Protocol.h>

@interface GLKTextureInfo : NSObject <NSCopying>
{
    unsigned int name;
    unsigned int target;
    unsigned int width;
    unsigned int height;
    unsigned int depth;
    int alphaState;
    int textureOrigin;
    _Bool containsMipmaps;
    unsigned int mimapLevelCount;
    unsigned int arrayLength;
    _Bool lossyCompressedSource;
}

@property(readonly) unsigned int arrayLength; // @synthesize arrayLength;
@property(readonly) unsigned int mimapLevelCount; // @synthesize mimapLevelCount;
@property(readonly) _Bool containsMipmaps; // @synthesize containsMipmaps;
@property(readonly) int textureOrigin; // @synthesize textureOrigin;
@property(readonly) int alphaState; // @synthesize alphaState;
@property(readonly) unsigned int depth; // @synthesize depth;
@property(readonly) unsigned int height; // @synthesize height;
@property(readonly) unsigned int width; // @synthesize width;
@property(readonly) unsigned int target; // @synthesize target;
@property(readonly) unsigned int name; // @synthesize name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (_Bool)lossyCompressedSource;
- (id)description;
- (id)initWithTextureTXR:(id)arg1 textureName:(unsigned int)arg2;
- (id)initWithTexture:(id)arg1 textureName:(unsigned int)arg2;

@end

