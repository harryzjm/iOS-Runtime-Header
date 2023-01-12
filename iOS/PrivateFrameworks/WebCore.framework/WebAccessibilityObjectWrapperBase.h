//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebAccessibilityObjectWrapperBase : NSObject
{
    void *m_axObject;
    ObjectIdentifier_098db1e0 _identifier;
}

+ (void)accessibilitySetShouldRepostNotifications:(_Bool)arg1;
- (id).cxx_construct;
@property(nonatomic) ObjectIdentifier_098db1e0 identifier; // @synthesize identifier=_identifier;
- (id)outerHTML;
- (id)innerHTML;
- (void)accessibilityPostedNotification:(id)arg1 userInfo:(id)arg2;
- (void)accessibilityPostedNotification:(id)arg1;
- (id)baseAccessibilityResolvedEditingStyles;
- (id)accessibilityMathPrescriptPairs;
- (id)accessibilityMathPostscriptPairs;
- (id)accessibilityPlatformMathSuperscriptKey;
- (id)accessibilityPlatformMathSubscriptKey;
- (id)ariaLandmarkRoleDescription;
- (id)lineRectsAndText;
- (void *)baseUpdateBackingStore;
- (id)contentForSimpleRange:(const void *)arg1 attributed:(_Bool)arg2;
- (struct CGRect)convertRectToSpace:(const struct FloatRect *)arg1 space:(int)arg2;
- (id)_accessibilityWebDocumentView;
- (struct _NSRange)accessibilityVisibleCharacterRange;
- (struct CGPath *)convertPathToScreenSpace:(const void *)arg1;
- (id)baseAccessibilityHelpText;
- (id)baseAccessibilitySpeechHint;
- (_Bool)isIsolatedObject;
- (void *)axBackingObject;
- (id)attachmentView;
- (_Bool)_prepareAccessibilityCall;
- (void)detach;
- (void)attachAXObject:(void *)arg1;
- (id)initWithAccessibilityObject:(void *)arg1;

@end

