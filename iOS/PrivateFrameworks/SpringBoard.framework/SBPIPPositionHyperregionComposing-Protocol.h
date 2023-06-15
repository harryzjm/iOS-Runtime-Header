//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/BSInvalidatable-Protocol.h>

@class NSArray, NSDictionary;
@protocol SBPIPPositionHyperregionComposerDelegate;

@protocol SBPIPPositionHyperregionComposing <BSInvalidatable>
@property(nonatomic) __weak id <SBPIPPositionHyperregionComposerDelegate> delegate;
- (unsigned long long)canonicalPositionForPoint:(struct CGPoint)arg1 proposedPosition:(unsigned long long)arg2 geometry:(struct SBPIPPositionGeometryContext)arg3 interaction:(struct SBPIPPositionInteractionStateContext)arg4;
- (struct CGPoint)defaultCornerPositionForLayoutSettingsPosition:(unsigned long long)arg1 proposedCenter:(struct CGPoint)arg2 geometry:(struct SBPIPPositionGeometryContext)arg3 interaction:(struct SBPIPPositionInteractionStateContext)arg4;
- (NSDictionary *)positionRegionsForRegions:(NSDictionary *)arg1 geometry:(struct SBPIPPositionGeometryContext)arg2 interaction:(struct SBPIPPositionInteractionStateContext)arg3;

@optional
@property(copy, nonatomic) NSArray *connectedWindowScenes;
@end

