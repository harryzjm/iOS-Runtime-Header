//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCTAutomationSupport/XCElementSnapshot.h>

@interface XCElementSnapshot (Hitpoint)
- (id)hitPointForScrolling:(id *)arg1;
- (id)hitPoint:(id *)arg1;
- (id)hostingAndOrientationTransformedRect:(struct CGRect)arg1 error:(id *)arg2;
- (id)_transformRectWithRequest:(id)arg1 error:(id *)arg2;
- (id)hostingAndOrientationTransformedPoint:(struct CGPoint)arg1 error:(id *)arg2;
- (id)_transformPointWithRequest:(id)arg1 error:(id *)arg2;
- (_Bool)_canTransformPoint:(struct CGPoint)arg1;
- (id)_transformParametersOrError:(id *)arg1;
- (id)_transformParametersFromDictionary:(id)arg1 error:(id *)arg2;
- (id)_hitPointTransformationRequestOrError:(id *)arg1;
- (id)_visiblePointOrError:(id *)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (id)reparentedOrphanElementMatchingAccessibilityElement:(id)arg1 inconsistentRelationshipDescriptions:(id *)arg2 error:(id *)arg3;
- (id)_snapshotForAccessibilityElement:(id)arg1 error:(id *)arg2;
@end

