//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IBAutolayoutFoundation/IBBinaryArchiving-Protocol.h>
#import <IBAutolayoutFoundation/IBLayoutConstraintRepresentation-Protocol.h>
#import <IBAutolayoutFoundation/NSCoding-Protocol.h>
#import <IBAutolayoutFoundation/NSCopying-Protocol.h>

@class IBLayoutConstant, IBLayoutConstraintMultiplier, NSString;

@interface IBLayoutConstraintArchivableRepresentation : NSObject <NSCoding, NSCopying, IBLayoutConstraintRepresentation, IBBinaryArchiving>
{
    _Bool _placeholder;
    NSString *_firstItemIdentifier;
    unsigned long long _firstAttribute;
    long long _relation;
    NSString *_secondItemIdentifier;
    unsigned long long _secondAttribute;
    double _priority;
    IBLayoutConstraintMultiplier *_multiplier;
    IBLayoutConstant *_constant;
    NSString *_containingViewIdentifier;
    double _scoringType;
    long long _scoringClass;
    long long _contentType;
    NSString *_identifier;
}

@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) long long scoringClass; // @synthesize scoringClass=_scoringClass;
@property(readonly, nonatomic) double scoringType; // @synthesize scoringType=_scoringType;
@property(readonly, nonatomic) NSString *containingViewIdentifier; // @synthesize containingViewIdentifier=_containingViewIdentifier;
@property(readonly, nonatomic) IBLayoutConstant *constant; // @synthesize constant=_constant;
@property(readonly, nonatomic, getter=isPlaceholder) _Bool placeholder; // @synthesize placeholder=_placeholder;
@property(readonly, nonatomic) IBLayoutConstraintMultiplier *multiplier; // @synthesize multiplier=_multiplier;
@property(readonly, nonatomic) double priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) unsigned long long secondAttribute; // @synthesize secondAttribute=_secondAttribute;
@property(readonly, nonatomic) NSString *secondItemIdentifier; // @synthesize secondItemIdentifier=_secondItemIdentifier;
@property(readonly, nonatomic) long long relation; // @synthesize relation=_relation;
@property(readonly, nonatomic) unsigned long long firstAttribute; // @synthesize firstAttribute=_firstAttribute;
@property(readonly, nonatomic) NSString *firstItemIdentifier; // @synthesize firstItemIdentifier=_firstItemIdentifier;
- (void).cxx_destruct;
- (id)representationByReversingFirstAndSecondItem;
- (unsigned long long)hashOfComponents;
- (_Bool)hasComponentsEqualToComponentsOfRepresentationAllowingReversing:(id)arg1;
- (_Bool)hasComponentsEqualToComponentsOfRepresentation:(id)arg1;
@property(readonly, nonatomic) id containingViewRepresentation;
@property(readonly, nonatomic) id secondItemRepresentation;
@property(readonly, nonatomic) id firstItemRepresentation;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithLayoutConstraint:(id)arg1 withRepresentationForItemBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

