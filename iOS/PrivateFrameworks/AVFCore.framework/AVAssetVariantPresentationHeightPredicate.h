//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSPredicate.h>

@class NSPredicateOperator;

__attribute__((visibility("hidden")))
@interface AVAssetVariantPresentationHeightPredicate : NSPredicate
{
    double _height;
    NSPredicateOperator *_operator;
}

+ (_Bool)supportsSecureCoding;
- (void)dealloc;
- (id)description;
- (id)predicateFormat;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPresentationHeight:(double)arg1 operatorType:(unsigned long long)arg2;

@end
