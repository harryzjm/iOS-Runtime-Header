//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLIndirectComputeCommand-Protocol.h>

@class _MTLIndirectDispatchThreadgroupsArguments, _MTLIndirectDispatchThreadsArguments;

@protocol MTLIndirectComputeCommandSPI <MTLIndirectComputeCommand>
- (unsigned long long)getPipelineStateUniqueIdentifier;
- (_Bool)hasBarrier;
- (CDStruct_1e3be3a8)getStageInRegion;
- (unsigned long long)getThreadgroupMemoryLengthAtIndex:(unsigned long long)arg1;
- (_MTLIndirectDispatchThreadsArguments *)dispatchThreadsArguments;
- (_MTLIndirectDispatchThreadgroupsArguments *)dispatchThreadgroupsArguments;
- (unsigned long long)getCommandType;
- (void *)getKernelBufferAtIndex:(unsigned long long)arg1;
@end
