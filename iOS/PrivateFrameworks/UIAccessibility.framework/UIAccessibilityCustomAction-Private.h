//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAccessibilityCustomAction.h>

@class NSString;

@interface UIAccessibilityCustomAction (Private)
- (id)_accessibilityAXAttributedName;
- (_Bool)_accessibilityMatchesCustomActionIdentifier:(id)arg1;
- (id)_accessibilityCustomActionIdentifier;
@property(nonatomic) _Bool shouldPersistActionMenu;
@property(nonatomic) struct CGPoint activationPoint;
@property(nonatomic) unsigned long long sortPriority;
@property(retain, nonatomic) NSString *localizedActionRotorCategory;
@property(nonatomic) _Bool ignoreWhenVoiceOverTouches;
@property(nonatomic) _Bool shouldSuppressActionHint;
@property(retain, nonatomic, getter=_accessibilityInternalCustomActionIdentifier, setter=_accessibilitySetInternalCustomActionIdentifier:) NSString *internalCustomActionIdentifier;
@property(retain, nonatomic, getter=_shortName, setter=_setShortName:) NSString *shortName;
@end

