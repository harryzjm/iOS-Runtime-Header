//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BackBoardServices/NSObject-Protocol.h>

@class BKSContextRelativePoint, BKSMousePointerDevice, BKSMousePointerDevicePreferences, BSAnimationSettings, NSNumber, NSSet, NSString, NSUUID, NSValue;
@protocol __BKSHIDEventHitTestClientContext__, __BKSMousePointerDevice__, __BKSMousePointerEventGlobalRoute__;

@protocol BKSMousePointerServiceClientToServerInterface <NSObject>
- (oneway void)setGlobalDevicePreferences:(BKSMousePointerDevicePreferences *)arg1;
- (BKSMousePointerDevicePreferences *)globalDevicePreferences;
- (oneway void)setPreferences:(BKSMousePointerDevicePreferences *)arg1 forDevice:(BKSMousePointerDevice *)arg2;
- (BKSMousePointerDevicePreferences *)preferencesForDevice:(BKSMousePointerDevice *)arg1;
- (oneway void)getHitTestContextsAtPoint:(BKSContextRelativePoint *)arg1 withAdditionalContexts:(NSSet<__BKSHIDEventHitTestClientContext__> *)arg2 onDisplay:(NSString *)arg3 withCompletion:(void (^)(NSArray<__BKSHIDEventHitTestClientContext__> *, NSArray<__NSValue__> *, NSError *))arg4;
- (oneway void)setGlobalPointerEventRoutes:(NSSet<__BKSMousePointerEventGlobalRoute__> *)arg1 forDisplay:(NSString *)arg2;
- (oneway void)invalidateButtonDownPointerRepositionAssertionWithUniqueIdentifier:(NSUUID *)arg1 onDisplay:(NSString *)arg2;
- (oneway void)acquireButtonDownPointerRepositionAssertionWithUniqueIdentifier:(NSUUID *)arg1 forReason:(NSString *)arg2 contextRelativePointerPosition:(BKSContextRelativePoint *)arg3 onDisplay:(NSString *)arg4 restrictingToPID:(NSNumber *)arg5;
- (oneway void)applyAssertionParametersOnDisplay:(NSString *)arg1 withOptionsMask:(NSNumber *)arg2;
- (oneway void)setContextRelativePointerPosition:(BKSContextRelativePoint *)arg1 withInitialVelocity:(BKSContextRelativePoint *)arg2 onDisplay:(NSString *)arg3 withDecelerationRate:(NSNumber *)arg4 restrictingToPID:(NSNumber *)arg5;
- (oneway void)setContextRelativePointerPosition:(BKSContextRelativePoint *)arg1 onDisplay:(NSString *)arg2 withAnimationParameters:(BSAnimationSettings *)arg3 restrictingToPID:(NSNumber *)arg4;
- (oneway void)setPointerPosition:(NSValue *)arg1 onDisplay:(NSString *)arg2 withAnimationParameters:(BSAnimationSettings *)arg3;
- (oneway void)setSuppressAllEvents:(NSNumber *)arg1;
- (oneway void)setGlobalPointerPosition:(NSValue *)arg1;
- (NSValue *)globalPointerPosition;
- (NSValue *)normalizedGlobalPointerPosition;
- (oneway void)setMousePointerPreferenceObservationEnabled:(NSNumber *)arg1;
- (NSSet<__BKSMousePointerDevice__> *)setMousePointerDeviceObservationEnabled:(NSNumber *)arg1;
@end

