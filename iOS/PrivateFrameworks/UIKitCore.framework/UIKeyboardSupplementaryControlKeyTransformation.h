//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardSupplementaryControlKeyTransformation : NSObject
{
}

+ (id)transformKeyplane:(id)arg1 withTransformationContext:(id)arg2;
+ (void)transformKeysForVietnameseKeyPlane:(id)arg1 withTransformationContext:(id)arg2;
+ (void)transformLastRowKeysForKeyplane:(id)arg1 row:(unsigned long long)arg2 withTransformationContext:(id)arg3;
+ (void)transformKeysForHandwritingKeyplane:(id)arg1 withTransformationContext:(id)arg2;
+ (void)transformKeysForFiveRowKeyplane:(id)arg1 withTransformationContext:(id)arg2;
+ (void)transformKeysForFourRowKeyplane:(id)arg1 withTransformationContext:(id)arg2;
+ (struct CGSize)layoutScaleFactorForContext:(id)arg1;
+ (void)adjustHorizontalPaddingForKeyplane:(id)arg1 withTransformationContext:(id)arg2;
+ (double)_keyPitchForKeyplane:(id)arg1;
+ (id)cachedControlKeySetsForTransformationContext:(id)arg1;
+ (id)transformationIdentifier;
+ (id)_supplementaryShiftKeysWithContext:(id)arg1;
+ (id)_cachedUndoOrRedoKeyForKeyplane:(id)arg1;
+ (id)_supplementaryScriptSwitchKeyWithContext:(id)arg1;
+ (id)_supplementaryControlKeyWithName:(id)arg1 context:(id)arg2;
+ (id)_supplementaryControlKeySetForOrientation:(long long)arg1 context:(id)arg2;
+ (double)_derivedTrailingControlKeyWidthForRow:(unsigned long long)arg1 orientation:(long long)arg2;
+ (double)_scaledDerivedLeadingControlKeyWidth:(double)arg1 forKeysForRow:(id)arg2 keyCount:(long long)arg3 numberOfKeysInSpecification:(long long)arg4 context:(id)arg5;
+ (double)_derivedFiveRowControlKeyWidthForRow:(unsigned long long)arg1 keysForRow:(id)arg2 context:(id)arg3;
+ (double)_derivedLeadingControlKeyWidthForRow:(unsigned long long)arg1 keysForRow:(id)arg2 context:(id)arg3;
+ (unsigned long long)_numberOfKeysInRow:(id)arg1 firstKey:(id *)arg2 lastKey:(id *)arg3;
+ (double)_keyplanePaddingForOrientation:(long long)arg1 row:(unsigned long long)arg2;
+ (double)_keyplanePaddingForOrientation:(long long)arg1;
+ (double)_totalKeyPaddingForOrientation:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

