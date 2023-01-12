//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;
@protocol SAUILayoutSpecifyingOverriding;

@interface NSObject (SystemApertureUIAdditions)
@property(readonly, copy, nonatomic) NSUUID *uniqueElementIdentifier;
- (void)uniquelyIdentifyElement;
@property(readonly, nonatomic) id <SAUILayoutSpecifyingOverriding> systemApertureLayoutSpecifyingOverrider;
- (void)setSettlingFromSystemApertureOvershootingTransition:(_Bool)arg1;
- (_Bool)isSettlingFromSystemApertureOvershootingTransition;
- (void)setPerformingSystemApertureCustomContentTransition:(_Bool)arg1;
- (_Bool)isPerformingSystemApertureCustomContentTransition;
- (void)_setSystemApertureTransitioningOption:(unsigned long long)arg1 enabled:(_Bool)arg2;
- (_Bool)_isSystemApertureTransitioningOptionEnabled:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

