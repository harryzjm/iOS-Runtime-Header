//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, _UIKBRTTouchDrifting;

@protocol _UIKBRTTouchDriftingDelegate
- (struct CGPoint)_uikbrtTouchDrifting:(_UIKBRTTouchDrifting *)arg1 touchCenterForFingerID:(unsigned long long)arg2;
- (NSSet *)_uikbrtTouchDrifting:(_UIKBRTTouchDrifting *)arg1 touchIdentifiersForFingerID:(unsigned long long)arg2;
- (unsigned long long)_uikbrtTouchDrifting:(_UIKBRTTouchDrifting *)arg1 fingerIDFortouchIdentifier:(id)arg2;
- (void)_uikbrtTouchDriftingStateChanged:(_UIKBRTTouchDrifting *)arg1;
@end

