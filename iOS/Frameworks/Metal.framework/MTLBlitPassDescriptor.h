//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class MTLBlitPassSampleBufferAttachmentDescriptorArray;

@interface MTLBlitPassDescriptor : NSObject <NSCopying>
{
}

+ (id)blitPassDescriptor;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly) MTLBlitPassSampleBufferAttachmentDescriptorArray *sampleBufferAttachments; // @dynamic sampleBufferAttachments;

@end
