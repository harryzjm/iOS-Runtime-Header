//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SCNNode;
@protocol SCNAvoidOccluderConstraintDelegate;

@interface SCNAvoidOccluderConstraint
{
    SCNNode *_target;
    unsigned long long _categoryBitMask;
    float _offset;
    id _delegate;
}

+ (_Bool)supportsSecureCoding;
+ (id)avoidOccluderConstraintWithTarget:(id)arg1;
+ (id)avoidOccluderConstraint;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customDecodingOfSCNAvoidOccluderConstraint:(id)arg1;
- (void)_customEncodingOfSCNAvoidOccluderConstraint:(id)arg1;
@property(nonatomic) double bias;
@property(nonatomic) unsigned long long occluderCategoryBitMask;
@property(retain, nonatomic) SCNNode *target;
@property(nonatomic) id <SCNAvoidOccluderConstraintDelegate> delegate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end
