//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface WKContentViewAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)accessibilityDragSourceDescriptors;
- (void)_accessibilityIncreaseSelection:(id)arg1;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityElements;
- (void)dealloc;
- (_Bool)_accessibilityIsScrollAncestor;
- (id)_accessibilityResponderElement;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (id)_accessibilityResponderElementForFocus;
- (unsigned long long)accessibilityTraits;
- (_Bool)_accessibilityServesAsFirstResponder;
- (_Bool)isAccessibilityElement;
- (void)_setAccessibilityWebProcessToken:(id)arg1;
- (void)_processDidExit;
- (void)_didRelaunchProcess;
- (void)_axCleanupAfterTermination;
- (void)_accessibilityRegisterUIProcessTokens;
- (void)_axMonitorWebContentSuspensions;
- (void)_axHandleMonitorStateUpdate:(id)arg1;
- (void)_axClearRemoteElements;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
