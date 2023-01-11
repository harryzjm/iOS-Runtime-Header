//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCPCNNBlock, VCPCNNData, VCPCNNMetalContext;

@interface VCPCNNModel : NSObject
{
    VCPCNNBlock *_blocks[200];
    short _quantFactor;
    _Bool _useGPU;
    VCPCNNMetalContext *_context;
    VCPCNNData *_output;
}

- (void).cxx_destruct;
@property(readonly) VCPCNNData *output; // @synthesize output=_output;
- (int)dynamicForward:(id)arg1 paramFileUrl:(id)arg2 cancel:(CDUnknownBlockType)arg3;
- (int)forward:(id)arg1;
- (int)prepareNetworkFromURL:(id)arg1 withInputSize:(id)arg2;
- (int)add:(id)arg1;
- (id)getGPUContext;
- (int)size;
- (id)initWithParameters:(short)arg1 useGPU:(_Bool)arg2;
- (id)init;

@end
