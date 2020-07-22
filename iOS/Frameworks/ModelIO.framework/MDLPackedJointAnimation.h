//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ModelIO/MDLJointAnimation-Protocol.h>
#import <ModelIO/NSCopying-Protocol.h>

@class MDLAnimatedQuaternionArray, MDLAnimatedVector3Array, NSArray, NSString;

@interface MDLPackedJointAnimation <NSCopying, MDLJointAnimation>
{
    NSString *_name;
    NSArray *_jointPaths;
    MDLAnimatedVector3Array *_translations;
    MDLAnimatedQuaternionArray *_rotations;
    MDLAnimatedVector3Array *_scales;
}

@property(readonly, nonatomic) MDLAnimatedVector3Array *scales; // @synthesize scales=_scales;
@property(readonly, nonatomic) MDLAnimatedQuaternionArray *rotations; // @synthesize rotations=_rotations;
@property(readonly, nonatomic) MDLAnimatedVector3Array *translations; // @synthesize translations=_translations;
@property(readonly, nonatomic) NSArray *jointPaths; // @synthesize jointPaths=_jointPaths;
- (void)setName:(id)arg1;
- (id)name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 jointPaths:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

