//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHEncodedStrokeIdentifier;

@interface CHSubstroke : NSObject
{
    struct vector<CGPoint, std::allocator<CGPoint>> _convexHull;
    CHEncodedStrokeIdentifier *_strokeIdentifier;
    double _startTimestamp;
    double _endTimestamp;
    double _curvature;
    struct CGRect _bounds;
}

+ (_Bool)supportsSecureCoding;
+ (id)substrokesForStroke:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) double curvature; // @synthesize curvature=_curvature;
@property(readonly, nonatomic) double endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(readonly, nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) CHEncodedStrokeIdentifier *strokeIdentifier; // @synthesize strokeIdentifier=_strokeIdentifier;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToSubstroke:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void *)convexHull;
- (id)initWithStrokeIdentifier:(id)arg1 bounds:(struct CGRect)arg2 startTimestamp:(double)arg3 endTimestamp:(double)arg4 convexHull:(const void *)arg5 curvature:(double)arg6;

@end

