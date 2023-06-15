//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPSGraphOperation.h"

@class NSNumber;

@interface MPSGraphQuantizeOp : MPSGraphOperation
{
    unsigned int _dataType;
    NSNumber *_axis;
}

- (void).cxx_destruct;
- (void *)makeMLIROpWithBuilder:(void *)arg1 symbolTable:(void *)arg2 inputValues:(void *)arg3 opInitialization:(_Bool)arg4 name:(id)arg5;
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 dataType:(unsigned int)arg4 axis:(id)arg5 name:(id)arg6;

@end

