//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSISVariableDelegate-Protocol.h>

@class NSISVariable;

@protocol NSISConstraint <NSISVariableDelegate>
- (id)secondItem;
- (id)firstItem;
- (double)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(NSISVariable *)arg1;
@end

