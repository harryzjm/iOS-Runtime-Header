//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@protocol UICoordinateSpace;

__attribute__((visibility("hidden")))
@interface _UIBoundingPath : NSObject <NSSecureCoding>
{
    id <UICoordinateSpace> _coordinateSpace;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) __weak id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
- (id)debugQuickLookObject;
- (id)_imageRepresentation;
- (struct CGRect)_rectTuckedAgainstEdge:(unsigned long long)arg1 ofBoundingRect:(struct CGRect)arg2 withSize:(double)arg3 minimumPadding:(double)arg4;
- (struct CGRect)_rectTuckedInCorner:(unsigned long long)arg1 ofBoundingRect:(struct CGRect)arg2 withSize:(struct CGSize)arg3 minimumPadding:(double)arg4;
- (struct CGRect)_largestInscribedRectInBoundingRect:(struct CGRect)arg1 withCenter:(struct CGPoint)arg2 aspectRatio:(double)arg3;
- (struct CGRect)_inscribedRectInBoundingRect:(struct CGRect)arg1 byInsettingRect:(struct CGRect)arg2 onEdges:(unsigned long long)arg3;
- (struct CGRect)_rectTuckedAgainstEdge:(unsigned long long)arg1 ofBoundingPathAndRect:(struct CGRect)arg2 withSize:(double)arg3 cornerRadii:(struct UIRectCornerRadii)arg4 minimumPadding:(double)arg5;
- (struct CGRect)_rectTuckedInCorner:(unsigned long long)arg1 ofBoundingPathAndRect:(struct CGRect)arg2 withSize:(struct CGSize)arg3 cornerRadii:(struct UIRectCornerRadii)arg4 minimumPadding:(double)arg5;
- (struct CGRect)_largestInscribedRectInBoundingPathAndRect:(struct CGRect)arg1 withCenter:(struct CGPoint)arg2 aspectRatio:(double)arg3;
- (struct CGRect)_inscribedRectInBoundingPathAndRect:(struct CGRect)arg1 byInsettingRect:(struct CGRect)arg2 onEdges:(unsigned long long)arg3 withOptions:(unsigned long long)arg4;
@property(readonly, nonatomic) _Bool isNonRectangular;
- (id)boundingPathForCoordinateSpace:(id)arg1 withCornerRadii:(struct UIRectCornerRadii)arg2 orientation:(long long)arg3 scale:(double)arg4;
- (id)boundingPathForCoordinateSpace:(id)arg1;
- (_Bool)validateForCoordinateSpace;
- (id)initWithCoordinateSpace:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
