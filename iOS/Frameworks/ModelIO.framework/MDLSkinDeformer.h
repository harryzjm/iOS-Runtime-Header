//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLSkinDeformerComponent-Protocol.h>
#import <ModelIO/NSCopying-Protocol.h>

@class NSArray, NSData, NSString;

@interface MDLSkinDeformer : NSObject <NSCopying, MDLSkinDeformerComponent>
{
    NSArray *_jointPaths;
    NSData *_jointBindTransforms;
    CDStruct_14d5dc5e _meshBindTransform;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_14d5dc5e meshBindTransform; // @synthesize meshBindTransform=_meshBindTransform;
@property(readonly, nonatomic) NSData *jointBindTransforms; // @synthesize jointBindTransforms=_jointBindTransforms;
@property(readonly, nonatomic) NSArray *jointPaths; // @synthesize jointPaths=_jointPaths;
- (unsigned long long)copyJointBindTransformsInto:(CDStruct_14d5dc5e *)arg1 maxCount:(unsigned long long)arg2;
- (id)initWithJointPaths:(id)arg1 jointBindTransforms:(const CDStruct_14d5dc5e *)arg2 count:(unsigned long long)arg3 meshBindTransform:(CDStruct_14d5dc5e)arg4;
- (id)initWithJointPaths:(id)arg1 jointBindTransforms:(id)arg2 meshBindTransform:(CDStruct_14d5dc5e)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
