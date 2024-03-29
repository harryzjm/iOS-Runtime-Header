//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AXPTranslator.h"

@class AXUIElement, NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface AXPTranslator_iOS : AXPTranslator
{
    NSMutableDictionary *_translationCache;
    NSMutableDictionary *_backTranslationCache;
    NSMutableArray *_cachedElements;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    _Bool _axAppReadyFlag;
    NSObject<OS_dispatch_semaphore> *_threadSemaphore;
    _Bool _accessibilityEnabled;
    struct __AXObserver *_axEventObserver;
    AXUIElement *_systemAppElement;
    AXUIElement *_systemWideElement;
}

+ (id)translationObjectFromUIKitObject:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) AXUIElement *systemWideElement; // @synthesize systemWideElement=_systemWideElement;
@property(retain, nonatomic) AXUIElement *systemAppElement; // @synthesize systemAppElement=_systemAppElement;
@property(retain, nonatomic) struct __AXObserver *axEventObserver; // @synthesize axEventObserver=_axEventObserver;
- (_Bool)accessibilityEnabled;
- (id)remoteTranslationDataWithTranslation:(id)arg1 pid:(int)arg2;
- (id)translationObjectFromData:(id)arg1;
- (id)platformElementFromTranslation:(id)arg1;
- (void)processPlatformNotification:(unsigned long long)arg1 data:(id)arg2 associatedObject:(id)arg3;
- (id)translationObjectFromPlatformElement:(struct __AXUIElement *)arg1;
- (struct __AXUIElement *)createPlatformElementFromTranslationObject:(id)arg1;
- (id)processHitTest:(id)arg1;
- (id)processFrontMostApp:(id)arg1;
- (id)processApplicationObject:(id)arg1;
- (id)processAttributeRequest:(id)arg1;
- (id)_preprocessRequest:(long long)arg1 parameter:(id)arg2;
- (id)processSupportsAttributes:(id)arg1;
- (id)processSupportedActions:(id)arg1;
- (id)processSetAttribute:(id)arg1;
- (id)processCanSetAttribute:(id)arg1;
- (id)_processAttributeSpecialCases:(unsigned long long)arg1 uiElement:(id)arg2 parameter:(id)arg3 error:(unsigned long long *)arg4 client:(unsigned long long)arg5;
- (id)_processVisibleOpaqueElements:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processFirstElementForFocus:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;
- (id)_processLastContainedElement:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;
- (id)_processIsFocusedAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;
- (id)_processFocusedElementAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;
- (id)_processFirstContainedElement:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;
- (id)_processCustomActionsAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processAttributeSpecialCases:(unsigned long long)arg1 uiElement:(id)arg2 error:(unsigned long long *)arg3 client:(unsigned long long)arg4;
- (id)_processSubroleAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processStringForRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;
- (id)_processAttributedStringForRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;
- (id)_processAuditIssuesAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;
- (id)_processVisibleTextRangeAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processBoundsForRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;
- (id)_processRoleDescriptionAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (unsigned long long)_processRoleAttributeRequest:(id)arg1 traits:(unsigned long long)arg2 error:(unsigned long long *)arg3;
- (id)_processRoleAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processNumberOfCharactersAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processLabelAttributeRequest:(id)arg1 error:(unsigned long long *)arg2 axpAttribute:(unsigned long long)arg3;
- (id)_processSyntheticStringValueAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processValueAttributeRequest:(id)arg1 error:(unsigned long long *)arg2 axpAttribute:(unsigned long long)arg3 useAttributes:(_Bool)arg4;
- (id)_processingSmuggledMarzipanRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;
- (id)_processSelectedTextRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processRawElementDataRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processMoveFocusToOpaqueElementAttributeRequest:(id)arg1 parameter:(id)arg2 direction:(long long)arg3 error:(unsigned long long *)arg4;
- (id)_processPreviousLineRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;
- (id)_processNextLineRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;
- (id)_processLineRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;
- (id)_processIndexForTextMarkerAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;
- (id)_processLinkedUIElementsAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processElementHelpAttributeResquest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processCellWithIndexPathAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;
- (id)_processClassNameAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processChildrenAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processBrailleOverrideForAttributeRequest:(id)arg1 error:(unsigned long long *)arg2 attribute:(unsigned long long)arg3;
- (id)_processUserInputLabelsAttributeRequest:(id)arg1 error:(unsigned long long *)arg2 axpAttribute:(unsigned long long)arg3;
- (id)_processIsEnabledAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processIsRemoteElementAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processIsSelectedAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processViewControllerDescriptionAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processStartsMediaSessionAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processDirectAttributeRequest:(id)arg1 iosAttribute:(long long)arg2 axpAttribute:(unsigned long long)arg3 parameter:(id)arg4 error:(unsigned long long *)arg5;
- (id)_processCustomRotorData:(id)arg1;
- (id)_processAuditIssuesResult:(id)arg1;
- (id)_processOutgoingCustomRotorSearchResult:(id)arg1;
- (id)_postProcessAttributeRequest:(id)arg1 iosAttribute:(long long)arg2 axpAttribute:(unsigned long long)arg3 result:(id)arg4 error:(unsigned long long *)arg5;
- (id)_processParameterizedAttributeRequest:(id)arg1 attribute:(long long)arg2 parameter:(id)arg3 error:(unsigned long long *)arg4;
- (id)processActionRequest:(id)arg1;
- (id)axElementFromTranslatorRequest:(id)arg1;
- (id)processMultipleAttributeRequest:(id)arg1;
- (long long)attributeFromRequest:(unsigned long long)arg1;
- (void)enableAccessibility;
- (void)_enableAccessibilityBridgeRuntime;
- (void)_signalAppAXReady;
- (void)setAccessibilityEnabled:(_Bool)arg1;
- (void)initializeAXRuntimeForSystemAppServer;
- (id)_processAccessibilityAttributeValue:(long long)arg1 forParameter:(id)arg2;
- (_Bool)_processPerformAction:(int)arg1 value:(id)arg2;
- (id)_processAccessibilityAttributeValue:(long long)arg1;
- (void)_registerAccessibilityNotifications;
- (CDUnknownBlockType)attributedStringConversionBlock;
- (id)backTranslationCache;
- (id)translationCache;
- (void)_removeCacheEntriesForElement:(id)arg1;
- (void)_addCacheElement:(id)arg1 translationObject:(id)arg2;
- (id)init;

@end

