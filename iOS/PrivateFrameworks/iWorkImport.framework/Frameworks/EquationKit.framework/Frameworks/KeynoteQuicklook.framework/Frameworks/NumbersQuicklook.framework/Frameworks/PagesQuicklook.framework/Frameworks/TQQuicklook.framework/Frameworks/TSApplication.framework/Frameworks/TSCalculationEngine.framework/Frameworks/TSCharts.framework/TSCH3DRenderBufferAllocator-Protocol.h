//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSCharts/NSObject-Protocol.h>

@class TSCH3DRenderbufferAllocatorInfo;

@protocol TSCH3DRenderBufferAllocator <NSObject>
@property(readonly, nonatomic) _Bool isTexturable;
- (id)depthbufferWithAllocatorInfo:(TSCH3DRenderbufferAllocatorInfo *)arg1;
- (id)colorbufferWithAllocatorInfo:(TSCH3DRenderbufferAllocatorInfo *)arg1;
@end

