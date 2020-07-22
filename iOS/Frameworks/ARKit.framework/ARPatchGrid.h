//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ARPatchGrid : NSObject
{
    vector_b5b5dea7 _patchesVector;
    float _angle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) float pivot;
@property(readonly, nonatomic) const CDStruct_183601bc *patches;
@property(readonly, nonatomic) unsigned long long size;
- (id)initWithPatchesVector:(vector_b5b5dea7)arg1 pivotAngle:(float)arg2;

@end
