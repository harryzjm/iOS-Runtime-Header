//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPSGraphOperation.h"

@interface MPSGraphResizeBaseOp : MPSGraphOperation
{
    unsigned long long _mode;
    unsigned long long _nearestRoundingMode;
    _Bool _centerResult;
    _Bool _alignCorners;
    unsigned long long _layout;
}

- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 mode:(unsigned long long)arg4 nearestRoundingMode:(unsigned long long)arg5 centerResult:(_Bool)arg6 alignCorners:(_Bool)arg7 layout:(unsigned long long)arg8 name:(id)arg9;

@end

