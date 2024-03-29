//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ABPKSkeleton;

__attribute__((visibility("hidden")))
@interface VNHumanBody3DOutput : NSObject
{
    ABPKSkeleton *_liftedSkeleton;
    struct CGSize _inputSize;
    CDStruct_8e0628e6 _cameraIntrinsics;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize inputSize; // @synthesize inputSize=_inputSize;
@property(readonly, nonatomic) CDStruct_8e0628e6 cameraIntrinsics; // @synthesize cameraIntrinsics=_cameraIntrinsics;
@property(readonly, nonatomic) ABPKSkeleton *liftedSkeleton; // @synthesize liftedSkeleton=_liftedSkeleton;
- (id)initWithSkeleton:(id)arg1 intrinsics:(CDStruct_8e0628e6)arg2 inputSize:(struct CGSize)arg3;

@end

