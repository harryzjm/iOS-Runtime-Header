//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MPSCore/MPSKernel.h>

@interface MPSUnaryImageKernel : MPSKernel
{
    CDStruct_d6af7fc0 _offset;
    CDStruct_1e3be3a8 _clipRect;
    unsigned long long _edgeMode;
    int _checkFlags;
    CDUnknownFunctionPointerType _encode;
    void *_encodeData;
    CDUnknownFunctionPointerType _getPreferredTileSize;
}

@property(nonatomic) unsigned long long edgeMode; // @synthesize edgeMode=_edgeMode;
@property(nonatomic) CDStruct_1e3be3a8 clipRect; // @synthesize clipRect=_clipRect;
@property(nonatomic) CDStruct_d6af7fc0 offset; // @synthesize offset=_offset;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3;
- (_Bool)encodeToCommandBuffer:(id)arg1 inPlaceTexture:(id *)arg2 fallbackCopyAllocator:(CDUnknownBlockType)arg3;
- (struct MPSRegion)sourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)init;

@end

