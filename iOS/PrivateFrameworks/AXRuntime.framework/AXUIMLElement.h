//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXUIElement, NSMutableArray, NSString;

@interface AXUIMLElement
{
    AXUIElement *_parent;
    AXUIElement *_hostingParent;
    struct CGRect _touchExpandedFrame;
    unsigned long long _traits;
    NSString *_value;
    long long _uiClass;
    NSMutableArray *_customActions;
    _Bool _isReconciling;
    NSString *_label;
    unsigned long long _mlGeneration;
    struct CGPoint _rotatedCenterPoint;
    struct CGRect _portraitUpFrame;
    struct CGRect _rotatedFrame;
    struct CGRect _screenFrame;
}

+ (id)elementsInDirection:(long long)arg1 withElement:(id)arg2 nextElements:(id)arg3;
+ (void)_queue_createMLElements:(id)arg1 postDelegateCallback:(_Bool)arg2;
+ (id)_cachedMLElementsForID:(id)arg1;
+ (void)_setCachedMLElements:(id)arg1 forID:(id)arg2;
+ (void)_fireRefreshTimer;
+ (void)setAutoRefresh:(_Bool)arg1 forApp:(id)arg2;
+ (void)clearCachesForAppsExcluding:(id)arg1;
+ (void)clearCaches;
+ (void)initialize;
+ (struct CGRect)_convertFrameToPortraitUp:(struct CGRect)arg1 fromOrientation:(long long)arg2 appFrame:(struct CGRect)arg3;
+ (void)_applyAXTraitsForElement:(id)arg1 uiClass:(long long)arg2;
+ (long long)_interfaceOrientationForElement:(id)arg1;
+ (struct CGRect)_screenRelativeRectForRect:(struct CGRect)arg1 contextId:(unsigned int)arg2;
+ (struct CGRect)_appRelativeRectForRect:(struct CGRect)arg1 contextId:(unsigned int)arg2;
+ (id)sharedFingerController;
+ (id)cachedElementForParent:(struct __AXUIElement *)arg1;
+ (void)setFrameDelegate:(id)arg1;
+ (_Bool)performFuzzyHitTestNextTime;
+ (void)setPerformFuzzyHitTestNextTime:(_Bool)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long mlGeneration; // @synthesize mlGeneration=_mlGeneration;
@property(nonatomic) struct CGRect screenFrame; // @synthesize screenFrame=_screenFrame;
@property(nonatomic) struct CGPoint rotatedCenterPoint; // @synthesize rotatedCenterPoint=_rotatedCenterPoint;
@property(nonatomic) struct CGRect rotatedFrame; // @synthesize rotatedFrame=_rotatedFrame;
@property(nonatomic) struct CGRect portraitUpFrame; // @synthesize portraitUpFrame=_portraitUpFrame;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (_Bool)_simulateScrollAction:(int)arg1 withScreenDistanceFactor:(double)arg2 forVisibleAction:(_Bool)arg3;
- (_Bool)isMLElement;
- (struct __AXUIElement *)copyElementAtPosition:(struct CGPoint)arg1;
- (id)_findMatchingElementForMLElement:(id)arg1 flattenedAppElements:(id)arg2;
- (id)_flattenedAppElements;
- (_Bool)_shouldDemoteElement:(id)arg1 withMLElements:(id)arg2;
- (_Bool)_shouldPromoteElement:(id)arg1;
- (id)_reconcileAppElementsWithMLElements:(id)arg1 flattenedElements:(id)arg2;
- (void *)copyAttributeValue:(long long)arg1 parameter:(void *)arg2 baseElement:(id)arg3;
- (void *)copyAttributeValue:(long long)arg1 parameter:(void *)arg2;
- (void *)copyAttributeValue:(long long)arg1;
- (void)_applyCustomActionsForFeature:(id)arg1 screenScale:(double)arg2 screenRect:(struct CGRect)arg3;
- (_Bool)isProbablyEqual:(id)arg1;
- (id)_currentMLElements;
- (void)_forceMLElementRefresh:(id)arg1 postDelegateCallback:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_reconcileElements:(id)arg1;
- (id)_reconciledElements;
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2 synchronous:(_Bool)arg3;
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withArray:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withUIElementArray:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withUIElement:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withRange:(struct _NSRange)arg2;
- (void)setAXAttribute:(long long)arg1 withSize:(struct CGSize)arg2;
- (void)setAXAttribute:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (void)setAXAttribute:(long long)arg1 withNumber:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withFloat:(float)arg2;
- (void)setAXAttribute:(long long)arg1 withLong:(long long)arg2;
- (void)setAXAttribute:(long long)arg1 withString:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withBOOL:(_Bool)arg2;
- (id)previousElementsWithCount:(unsigned long long)arg1 baseElement:(id)arg2;
- (id)previousElementsWithCount:(unsigned long long)arg1;
- (id)nextElementsWithCount:(unsigned long long)arg1 baseElement:(id)arg2;
- (id)nextElementsWithCount:(unsigned long long)arg1;
- (void)updateCacheWithAttributes:(id)arg1;
- (void)updateCache:(long long)arg1;
- (void)disableCache;
- (void)enableCache:(_Bool)arg1;
- (_Bool)_handleScroll:(int)arg1;
- (_Bool)_handleScrollToVisible:(id)arg1;
- (_Bool)performAXAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned int)arg3;
- (_Bool)performAXAction:(int)arg1;
- (_Bool)canPerformAXAction:(int)arg1;
- (id)objectWithAXAttribute:(long long)arg1 parameter:(void *)arg2;
- (id)uiElementsWithAttribute:(long long)arg1 parameter:(void *)arg2 fetchAttributes:(_Bool)arg3;
- (id)uiElementsWithAttribute:(long long)arg1 parameter:(void *)arg2;
- (id)uiElementsWithAttribute:(long long)arg1;
- (id)valueArrayWithAXAttributes:(struct __CFArray *)arg1;
- (id)objectWithAXAttribute:(long long)arg1;
- (struct CGColor *)colorWithAXAttribute:(long long)arg1;
- (struct _NSRange)rangeWithAXAttribute:(long long)arg1;
- (struct CGPoint)pointWithAXAttribute:(long long)arg1;
- (struct CGPath *)pathWithAXAttribute:(long long)arg1;
- (struct CGRect)rectWithAXAttribute:(long long)arg1;
- (id)numberWithAXAttribute:(long long)arg1;
- (_Bool)boolWithAXAttribute:(long long)arg1;
- (id)stringWithAXAttribute:(long long)arg1;
- (id)arrayWithAXAttribute:(long long)arg1;
- (_Bool)isValidForApplication:(id)arg1;
- (_Bool)isValid;
- (id)_topLevelAppElement;
- (id)_appElement;
- (id)_topLevelMLElement;
- (id)topLevelMLElement;
- (_Bool)_isTopLevelMLElement;
- (struct CGRect)frame;
- (id)initWithParentElement:(struct __AXUIElement *)arg1;

@end
