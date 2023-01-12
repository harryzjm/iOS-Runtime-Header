//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPSGraphOperation.h"

@interface MPSGraphArithmeticOp : MPSGraphOperation
{
    unsigned long long _mathOpType;
}

- (id)partialDerivativeForInputTensor:(id)arg1 incomingGradient:(id)arg2 inputIndex:(unsigned long long)arg3 name:(id)arg4;
- (id)broadcastGradTernaryWithOutputGradient:(id)arg1 inputIndex:(unsigned long long)arg2 name:(id)arg3;
- (id)broadcastGradWithOutputGradient:(id)arg1 inputIndex:(unsigned long long)arg2 name:(id)arg3;
- (void *)makeMLIROpWithBuilder:(void *)arg1 symbolTable:(void *)arg2 inputValues:(void *)arg3 opInitialization:(_Bool)arg4 name:(id)arg5;
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 mathOpType:(unsigned long long)arg4 name:(id)arg5;

@end

