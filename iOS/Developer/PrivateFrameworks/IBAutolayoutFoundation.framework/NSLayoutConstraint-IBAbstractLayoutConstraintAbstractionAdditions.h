//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSLayoutConstraint.h>

@class NSString;

@interface NSLayoutConstraint (IBAbstractLayoutConstraintAbstractionAdditions)
+ (id)ib_constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7;
- (void)ib_populateLayoutConstraintAbstractions:(id)arg1 fromConstraintBetweenViewsInDocument:(id)arg2;
- (_Bool)ib_canMapDirectlyToIBLayoutConstraint;
@property(nonatomic, setter=ib_setShouldIgnoreConstraintInAutolayoutEngine:) _Bool ib_shouldIgnoreConstraintInAutolayoutEngine;
@property(readonly) double effectiveValidConstant;
- (_Bool)ib_hasValidSymbolicConstant;
@property(readonly) _Bool ib_isRedundant;
@property(readonly) double ib_knownMagnitudeOfAnyRoundingAdjustment;
@property(readonly) _Bool ib_mayRequireRoundingAdjustment;
@property(copy) NSString *ib_symbolicConstant;
@end

