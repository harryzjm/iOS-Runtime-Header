//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MPSCore/NSObject-Protocol.h>
#import <MPSCore/NSSecureCoding-Protocol.h>

@class MPSImage, MPSImageDescriptor, MPSKernel;
@protocol MTLCommandBuffer;

@protocol MPSImageAllocator <NSObject, NSSecureCoding>
- (MPSImage *)imageForCommandBuffer:(id <MTLCommandBuffer>)arg1 imageDescriptor:(MPSImageDescriptor *)arg2 kernel:(MPSKernel *)arg3;
@end
