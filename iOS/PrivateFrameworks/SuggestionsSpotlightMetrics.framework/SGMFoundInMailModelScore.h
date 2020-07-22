//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface SGMFoundInMailModelScore : NSObject
{
    PETScalarEventTracker *_tracker;
}

@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)arg1 model:(struct SGMFoundInMailModelType_)arg2 contactDetail:(struct SGMContactDetailType_)arg3 result:(struct SGMTypeSafeBool_)arg4 correct:(struct SGMTypeSafeBool_)arg5 mode:(struct SGFoundInMailModelMode_)arg6 supervision:(struct SGMFoundInMailSupervisionType_)arg7;
- (id)init;

@end

