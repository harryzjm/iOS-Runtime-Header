//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCompositeLayoutAnchor-Protocol.h>

@class NSArray, NSLayoutAnchor;

@interface _NSDistanceLayoutDimension <NSCompositeLayoutAnchor>
{
    NSLayoutAnchor *_minuend;
    NSLayoutAnchor *_subtrahend;
}

+ (id)distanceFromAnchor:(id)arg1 toAnchor:(id)arg2;
@property(readonly) NSArray *_childAnchors;
- (id)equationDescription;
- (double)_valueInEngine:(id)arg1;
- (id)_expressionInContext:(CDStruct_6db0658e)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithAnchor:(id)arg1;
- (id)initWithMinuend:(id)arg1 subtrahend:(id)arg2;

@end

