//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MPSCore/MPSKernel.h>

@interface MPSMatrixUnaryKernel : MPSKernel
{
    unsigned long long _batchStart;
    unsigned long long _batchSize;
    CDStruct_67e7699a _sourceMatrixOrigin;
    CDStruct_67e7699a _resultMatrixOrigin;
}

@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(nonatomic) unsigned long long batchStart; // @synthesize batchStart=_batchStart;
@property(nonatomic) CDStruct_67e7699a resultMatrixOrigin; // @synthesize resultMatrixOrigin=_resultMatrixOrigin;
@property(nonatomic) CDStruct_67e7699a sourceMatrixOrigin; // @synthesize sourceMatrixOrigin=_sourceMatrixOrigin;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;

@end

