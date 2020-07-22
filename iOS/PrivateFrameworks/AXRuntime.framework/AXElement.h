//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AXRuntime/AXGroupable-Protocol.h>

@class AXElementGroup, AXUIElement, NSArray, NSDictionary, NSString, NSURL;

@interface AXElement : NSObject <AXGroupable>
{
    _Bool _representsScannerGroup;
    AXUIElement *_uiElement;
    AXElementGroup *_parentGroup;
    NSString *_localizedStringKey;
    NSString *_localizationBundleID;
    NSString *_localizationBundlePath;
    NSString *_localizedStringTableName;
    AXElement *_cachedRemoteParent;
    AXElement *_cachedRemoteParentForContextID;
    struct CGPath *_cachedPath;
    struct CGRect _cachedFrame;
    struct CGRect _cachedVisibleFrame;
}

+ (id)systemWideElement;
+ (id)elementAtCoordinate:(struct CGPoint)arg1 withVisualPadding:(_Bool)arg2;
+ (void)registerNotifications:(id)arg1 withIdentifier:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
+ (void)unregisterNotifications:(id)arg1;
+ (id)primaryApp;
+ (id)elementsWithUIElements:(id)arg1;
+ (id)elementWithUIElement:(id)arg1;
+ (id)elementWithAXUIElement:(struct __AXUIElement *)arg1;
@property(nonatomic) struct CGRect cachedVisibleFrame; // @synthesize cachedVisibleFrame=_cachedVisibleFrame;
@property(nonatomic) struct CGRect cachedFrame; // @synthesize cachedFrame=_cachedFrame;
@property(retain, nonatomic) struct CGPath *cachedPath; // @synthesize cachedPath=_cachedPath;
@property(retain, nonatomic) AXElement *cachedRemoteParentForContextID; // @synthesize cachedRemoteParentForContextID=_cachedRemoteParentForContextID;
@property(retain, nonatomic) AXElement *cachedRemoteParent; // @synthesize cachedRemoteParent=_cachedRemoteParent;
@property(readonly, nonatomic) _Bool representsScannerGroup; // @synthesize representsScannerGroup=_representsScannerGroup;
@property(readonly, nonatomic) NSString *localizedStringTableName; // @synthesize localizedStringTableName=_localizedStringTableName;
@property(readonly, nonatomic) NSString *localizationBundlePath; // @synthesize localizationBundlePath=_localizationBundlePath;
@property(readonly, nonatomic) NSString *localizationBundleID; // @synthesize localizationBundleID=_localizationBundleID;
@property(readonly, nonatomic) NSString *localizedStringKey; // @synthesize localizedStringKey=_localizedStringKey;
@property(nonatomic) AXElementGroup *parentGroup; // @synthesize parentGroup=_parentGroup;
@property(retain, nonatomic) AXUIElement *uiElement; // @synthesize uiElement=_uiElement;
- (void).cxx_destruct;
- (void)_updateLabel;
- (id)_axElementsForAXUIElements:(id)arg1;
@property(readonly, nonatomic) NSArray *parent;
@property(readonly, nonatomic) NSArray *children;
- (_Bool)isGroup;
- (id)highestAncestorGroup;
- (_Bool)pressTVMicButton;
- (_Bool)pressTVDataOnScreenButton;
- (_Bool)pressTVSkipBackwardsButton;
- (_Bool)pressTVSkipForwardsButton;
- (_Bool)pressTVPreviousTrackButton;
- (_Bool)pressTVNextTrackButton;
- (_Bool)pressTVFastForwardButton;
- (_Bool)pressTVRewindButton;
- (_Bool)pressTVStopButton;
- (_Bool)pressTVPauseButton;
- (_Bool)pressTVPlayButton;
- (_Bool)pressTVRightButton;
- (_Bool)pressTVLeftButton;
- (_Bool)pressTVDownButton;
- (_Bool)pressTVUpButton;
- (_Bool)pressTVPlayPauseButton;
- (_Bool)pressTVMenuButton;
- (_Bool)pressTVBackButton;
- (_Bool)pressTVSelectButton;
- (void)scrollToBottom;
- (void)scrollToTop;
- (void)decreaseAutoscrollSpeed;
- (void)increaseAutoscrollSpeed;
@property(readonly, nonatomic) _Bool isAutoscrolling;
- (void)pauseAutoscrolling;
- (void)autoscrollInDirection:(unsigned long long)arg1;
@property(retain, nonatomic) AXElement *autoscrollTarget;
@property(readonly, nonatomic) _Bool canPerformEscape;
@property(readonly, nonatomic) long long scannerActivateBehavior;
@property(readonly, nonatomic) _Bool isScannerElement;
- (void)insertTextAtCurrentPosition:(id)arg1;
- (void)insertText:(id)arg1 atPosition:(long long)arg2;
- (_Bool)zoomOut;
- (_Bool)zoomIn;
- (_Bool)_zoomInOrOut:(_Bool)arg1;
- (_Bool)longPress;
- (_Bool)press;
- (_Bool)canPerformSecondaryActivate;
- (_Bool)_performActivate;
- (_Bool)canPerformActivate;
@property(readonly, nonatomic) NSArray *supportedGestures;
@property(readonly, nonatomic) unsigned int windowContextId;
- (struct __AXUIElement *)scrollAncestorForScrollAction:(int)arg1;
- (_Bool)performAction:(int)arg1 withValue:(id)arg2;
- (_Bool)performAction:(int)arg1;
- (_Bool)supportsAction:(int)arg1;
- (_Bool)canScrollInAtLeastOneDirection;
- (void)scrollToVisible;
- (_Bool)canPerformTrackingDetail;
@property(readonly, nonatomic) _Bool canPerformZoom;
- (id)_remoteParentForContextID;
@property(readonly, nonatomic) unsigned long long scanningBehaviorTraits;
@property(readonly, nonatomic) AXElement *remoteParent;
@property(readonly, nonatomic) int pid;
@property(readonly, nonatomic) NSDictionary *semanticContext;
- (_Bool)setNativeFocus;
- (_Bool)viewHierarchyHasNativeFocus;
@property(readonly, nonatomic, getter=isNativeFocused) _Bool nativeFocus;
@property(readonly, nonatomic) _Bool isAccessibilityOpaqueElementProvider;
- (double)distanceToPoint:(struct CGPoint)arg1;
- (double)distanceToElement:(id)arg1;
- (_Bool)hasOnlyTraits:(unsigned long long)arg1;
- (_Bool)hasAnyTraits:(unsigned long long)arg1;
- (_Bool)hasAllTraits:(unsigned long long)arg1;
- (id)previousElementsWithCount:(unsigned long long)arg1;
- (id)nextElementsWithCount:(unsigned long long)arg1;
@property(nonatomic) struct _NSRange selectedTextRange;
@property(readonly, nonatomic) NSArray *drops;
@property(readonly, nonatomic) NSArray *drags;
@property(readonly, nonatomic) NSArray *customActions;
@property(nonatomic) _Bool assistiveTechFocused;
@property(readonly, nonatomic) NSArray *typingCandidates;
@property(readonly, nonatomic) NSArray *textOperations;
@property(readonly, nonatomic) _Bool hasVariantKeys;
@property(readonly, nonatomic) NSArray *variantKeys;
- (_Bool)isMap;
@property(readonly, nonatomic) _Bool hasTextEntry;
@property(readonly, nonatomic) _Bool hasWebContent;
@property(readonly, nonatomic) _Bool isMathEquation;
- (id)keyboardContainer;
@property(readonly, nonatomic) _Bool isKeyboardKey;
@property(readonly, nonatomic) AXElement *touchContainer;
- (id)containerTypes;
@property(readonly, nonatomic) _Bool isTouchContainer;
@property(readonly, nonatomic) _Bool isValid;
@property(readonly, nonatomic) struct CGRect focusableFrameForZoom;
@property(readonly, nonatomic) struct CGRect visibleFrame;
@property(readonly, nonatomic) struct CGRect textCursorFrame;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) struct CGPoint visiblePoint;
@property(readonly, nonatomic) struct CGPoint centerPoint;
- (id)auditIssuesForOptions:(id)arg1;
@property(readonly, nonatomic) unsigned long long traits;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) struct CGPath *path;
@property(readonly, nonatomic) NSURL *url;
@property(nonatomic) NSString *value;
@property(readonly, nonatomic) NSString *hint;
- (id)accessibilityLocalizedStringTableName;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizedStringKey;
@property(readonly, nonatomic) NSString *label;
@property(readonly, nonatomic) _Bool isVisible;
@property(readonly, nonatomic) _Bool isAccessibleElement;
- (id)remoteApplication;
@property(readonly, nonatomic) AXElement *application;
- (id)elementsMatchingText:(id)arg1;
@property(readonly, nonatomic) NSArray *siriContentElementsWithSemanticContext;
@property(readonly, nonatomic) NSArray *siriContentNativeFocusableElements;
@property(readonly, nonatomic) NSArray *elementsWithSemanticContext;
@property(readonly, nonatomic) NSArray *nativeFocusableElements;
@property(readonly, nonatomic) NSArray *explorerElements;
@property(readonly, nonatomic) _Bool isAXUIServer;
@property(readonly, nonatomic) _Bool isSystemApplication;
@property(readonly, nonatomic) _Bool isSpringBoard;
@property(readonly, nonatomic) NSString *bundleId;
@property(readonly, nonatomic) AXElement *firstElementInApplicationForFocus;
@property(readonly, nonatomic) AXElement *firstElementInApplication;
@property(readonly, nonatomic) AXElement *nativeFocusPreferredElement;
@property(readonly, nonatomic) AXElement *nativeFocusElement;
- (id)firstResponderForFocus;
@property(readonly, nonatomic) AXElement *firstResponder;
@property(readonly, nonatomic) NSArray *visibleElements;
@property(readonly, nonatomic) _Bool isScreenLocked;
@property(readonly, nonatomic) long long applicationOrientation;
- (void)clearCachedFrame:(_Bool)arg1 cachedVisibleFrame:(_Bool)arg2;
- (void)updateCache:(long long)arg1;
- (struct CGPath *)convertPath:(struct CGPath *)arg1 fromContextId:(unsigned int)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toContextId:(unsigned int)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromContextId:(unsigned int)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromContextId:(unsigned int)arg2;
- (_Bool)systemPressTVSiriButton;
- (_Bool)systemPressTVHomeButton;
- (_Bool)systemLongPressTVMenuButton;
- (_Bool)systemPressTVMenuButton;
- (_Bool)systemPressTVRightButton;
- (_Bool)systemPressTVLeftButton;
- (_Bool)systemPressTVDownButton;
- (_Bool)systemPressTVUpButton;
- (_Bool)systemPressTVPlayPauseButton;
- (_Bool)systemPressTVSelectButton;
- (void)sendUserEventOccurred;
@property(readonly, nonatomic) AXElement *accessibilityUIServerApplication;
@property(readonly, nonatomic) AXElement *systemApplication;
@property(readonly, nonatomic) AXElement *springBoardApplication;
@property(readonly, nonatomic) NSArray *currentApplicationsIgnoringSiri;
@property(readonly, nonatomic) NSArray *currentApplications;
@property(readonly, nonatomic) AXElement *currentApplication;
@property(nonatomic, getter=isPassivelyListeningForEvents) _Bool passivelyListeningForEvents;
@property(readonly, nonatomic) _Bool isSystemWideElement;
@property(readonly, nonatomic) struct __AXUIElement *elementRef;
- (id)elementsForAttribute:(long long)arg1;
- (id)elementForAttribute:(long long)arg1 parameter:(id)arg2;
- (id)_elementForAttribute:(long long)arg1 shouldUpdateCache:(_Bool)arg2 shouldFetchAttributes:(_Bool)arg3;
- (id)elementForAttribute:(long long)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithUIElement:(id)arg1;
- (id)initWithAXUIElement:(struct __AXUIElement *)arg1;
- (id)makeLookingGlassRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

