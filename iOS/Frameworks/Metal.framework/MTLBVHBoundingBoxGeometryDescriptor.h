//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MTLBuffer;

@interface MTLBVHBoundingBoxGeometryDescriptor
{
    id <MTLBuffer> _boundingBoxBuffer;
    unsigned long long _boundingBoxBufferOffset;
    unsigned long long _boundingBoxStride;
}

@property(nonatomic) unsigned long long boundingBoxStride; // @synthesize boundingBoxStride=_boundingBoxStride;
@property(nonatomic) unsigned long long boundingBoxBufferOffset; // @synthesize boundingBoxBufferOffset=_boundingBoxBufferOffset;
@property(retain, nonatomic) id <MTLBuffer> boundingBoxBuffer; // @synthesize boundingBoxBuffer=_boundingBoxBuffer;
- (void)dealloc;
- (unsigned long long)primitiveType;

@end
