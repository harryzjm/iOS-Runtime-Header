//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IBAutolayoutFoundation/NSObject-Protocol.h>

@class IBLayoutConstant, IBLayoutConstraintMultiplier, NSObject, NSString;
@protocol IBLayoutConstraintRepresentation;

@protocol IBLayoutConstraintRepresentation <NSObject>
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic, getter=isPlaceholder) _Bool placeholder;
@property(readonly, nonatomic) double scoringType;
@property(readonly, nonatomic) long long scoringClass;
@property(readonly, nonatomic) id containingViewRepresentation;
@property(readonly, nonatomic) double priority;
@property(readonly, nonatomic) IBLayoutConstant *constant;
@property(readonly, nonatomic) IBLayoutConstraintMultiplier *multiplier;
@property(readonly, nonatomic) unsigned long long secondAttribute;
@property(readonly, nonatomic) id secondItemRepresentation;
@property(readonly, nonatomic) long long relation;
@property(readonly, nonatomic) unsigned long long firstAttribute;
@property(readonly, nonatomic) id firstItemRepresentation;
- (unsigned long long)hashOfComponentsIgnoringScoring;
- (unsigned long long)hashOfComponents;
- (_Bool)hasComponentsEqualToComponentsOfRepresentationAllowingReversingIgnoringScoring:(NSObject<IBLayoutConstraintRepresentation> *)arg1;
- (_Bool)hasComponentsEqualToComponentsOfRepresentationAllowingReversing:(NSObject<IBLayoutConstraintRepresentation> *)arg1;
- (_Bool)hasComponentsEqualToComponentsOfRepresentation:(NSObject<IBLayoutConstraintRepresentation> *)arg1;
@end
