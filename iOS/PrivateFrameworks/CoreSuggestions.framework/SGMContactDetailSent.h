//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface SGMContactDetailSent : NSObject
{
    PETScalarEventTracker *_tracker;
}

@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)arg1 source:(struct SGMDocumentType_)arg2 detail:(struct SGMContactDetailType_)arg3 foundIn:(struct SGMContactDetailFoundIn_)arg4 hasName:(struct SGMTypeSafeBool_)arg5 tokens:(struct SGMLowCount_)arg6;
- (id)init;

@end

