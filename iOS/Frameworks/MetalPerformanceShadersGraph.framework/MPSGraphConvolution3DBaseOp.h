//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPSGraphOperation.h"

@class MPSGraphConvolution3DOpDescriptor;

@interface MPSGraphConvolution3DBaseOp : MPSGraphOperation
{
    MPSGraphConvolution3DOpDescriptor *_desc;
}

- (void).cxx_destruct;
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 descriptor:(id)arg4 name:(id)arg5;

@end

