//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLRenderPassDescriptor;

@interface MTLGPUDebugParallelRenderCommandEncoder
{
    unsigned int _encoderID;
    MTLRenderPassDescriptor *_descriptor;
}

- (void)dealloc;
- (id)renderCommandEncoder;
- (id)initWithParallelRenderCommandEncoder:(id)arg1 parent:(id)arg2 descriptor:(id)arg3 encoderID:(unsigned int)arg4;

@end
