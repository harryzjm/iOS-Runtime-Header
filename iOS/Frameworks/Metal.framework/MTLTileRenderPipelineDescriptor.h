//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class MTLPipelineBufferDescriptorArray, MTLTileRenderPipelineColorAttachmentDescriptorArray, NSString;
@protocol MTLFunction;

@interface MTLTileRenderPipelineDescriptor : NSObject <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;

// Remaining properties
@property(readonly) MTLTileRenderPipelineColorAttachmentDescriptorArray *colorAttachments; // @dynamic colorAttachments;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(nonatomic) unsigned long long rasterSampleCount; // @dynamic rasterSampleCount;
@property(nonatomic) _Bool threadgroupSizeMatchesTileSize; // @dynamic threadgroupSizeMatchesTileSize;
@property(readonly) MTLPipelineBufferDescriptorArray *tileBuffers; // @dynamic tileBuffers;
@property(retain, nonatomic) id <MTLFunction> tileFunction; // @dynamic tileFunction;

@end

