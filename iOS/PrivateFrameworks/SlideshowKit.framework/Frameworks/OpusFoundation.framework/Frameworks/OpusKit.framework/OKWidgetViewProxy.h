//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OpusFoundation/OFUIView.h>

#import <OpusKit/OKActionResponder-Protocol.h>
#import <OpusKit/OKActionResponderPrivate-Protocol.h>
#import <OpusKit/OKCollectionProxyDataSource-Protocol.h>
#import <OpusKit/OKDynamicItemProxiedObject-Protocol.h>
#import <OpusKit/OKPlayable-Protocol.h>
#import <OpusKit/OKPresentationReadiness-Protocol.h>
#import <OpusKit/OKPresentationReadinessPrivate-Protocol.h>
#import <OpusKit/OKSettingsSupport-Protocol.h>
#import <OpusKit/OKWidgetViewProxyExports-Protocol.h>
#import <OpusKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, NSURL, OKDynamicItemProxy, OKPresentationPage, OKPresentationViewController, OKPresentationWidget, OKWidgetContainerView, OKWidgetView, UIImageView, UISnapBehavior;
@protocol OKWidgetViewDelegate;

@interface OKWidgetViewProxy : OFUIView <OKCollectionProxyDataSource, OKDynamicItemProxiedObject, UIGestureRecognizerDelegate, OKActionResponderPrivate, OKSettingsSupport, OKPresentationReadinessPrivate, OKWidgetViewProxyExports, OKPresentationReadiness, OKActionResponder, OKPlayable>
{
    struct UIEdgeInsets _eventsInset;
    _Bool _ignoreEventsOnTransparentPixels;
    NSMutableArray *_subWidgetViews;
    NSURL *_borderImageURL;
    UIImageView *_borderView;
    OKWidgetContainerView *_contentContainerView;
    _Bool _needsApplySettings;
    _Bool _hasSettingsApplied;
    OKWidgetView *_parentWidgetView;
    id <OKWidgetViewDelegate> _delegate;
    unsigned long long _prepareMode;
    OKPresentationPage *_page;
    OKPresentationWidget *_widget;
    NSMutableArray *_mediaURLs;
    OKWidgetContainerView *_contentView;
    struct UIEdgeInsets _borderEdgeOutsets;
    struct UIEdgeInsets _borderImageCapEdgeInsets;
    _Bool _shadowOptimization;
    NSArray *_contentEffects;
    _Bool _needsZoning;
    _Bool _antialiasing;
    struct CATransform3D _widgetTransform;
    struct CATransform3D _motionTransform;
    struct CATransform3D _parallaxTransform;
    struct CGAffineTransform _dynamicsTransform;
    double _zRotation;
    struct CGPoint _zRotationAnchorPoint;
    _Bool _xFlipped;
    _Bool _yFlipped;
    struct CGPoint _xyTranslation;
    struct CGSize _xyScale;
    _Bool _motionEnabled;
    _Bool _motionTiltXEnabled;
    _Bool _motionTiltYEnabled;
    _Bool _motionTiltZEnabled;
    struct CGSize _motionXMinMax;
    struct CGSize _motionYMinMax;
    struct CGSize _motionZMinMax;
    struct CGPoint _motionXTiltAnchorPoint;
    struct CGPoint _motionYTiltAnchorPoint;
    struct CGPoint _motionZTiltAnchorPoint;
    _Bool _motionXTiltReversed;
    _Bool _motionYTiltReversed;
    _Bool _motionZTiltReversed;
    _Bool _parallaxEnabled;
    NSString *_dynamicsCollisionActionScript;
    unsigned long long _presentationMode;
    OFUIView *_dimmerView;
    CDStruct_6c2cf6ec *_focusGestureHelper;
    unsigned long long _focusGestureMode;
    struct UIEdgeInsets _focusGestureInsets;
    NSString *_prepareActionScript;
    NSString *_canPerformActionScript;
    NSArray *_layoutSteps;
    NSMutableDictionary *_actionBindings;
    _Bool _isReady;
    NSMutableArray *_readyNotificationBlocks;
    NSRecursiveLock *_readyRecursiveLock;
    struct CGRect _originalFrame;
    struct CGSize _lastBoundsSize;
    NSMutableArray *_newSubWidgetViews;
    OKDynamicItemProxy *_dynamicProxy;
    UISnapBehavior *_dynamicSnapBehavior;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
@property(readonly, retain, nonatomic) OKDynamicItemProxy *dynamicProxy; // @synthesize dynamicProxy=_dynamicProxy;
@property(readonly, retain, nonatomic) NSMutableArray *subWidgetViews; // @synthesize subWidgetViews=_subWidgetViews;
@property(nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(readonly, nonatomic) _Bool needsZoning; // @synthesize needsZoning=_needsZoning;
@property(readonly, nonatomic) _Bool parallaxEnabled; // @synthesize parallaxEnabled=_parallaxEnabled;
@property(readonly, retain, nonatomic) OFUIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, retain, nonatomic) NSMutableArray *mediaURLs; // @synthesize mediaURLs=_mediaURLs;
@property(readonly, retain, nonatomic) OKPresentationWidget *widget; // @synthesize widget=_widget;
@property(retain, nonatomic) OKPresentationPage *page; // @synthesize page=_page;
@property(nonatomic) unsigned long long prepareMode; // @synthesize prepareMode=_prepareMode;
- (_Bool)isFocused;
- (id)dictionaryProxy:(id)arg1 objectAtIndexPath:(id)arg2;
- (id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2;
- (id)allKeysForDictionaryProxy:(id)arg1;
- (unsigned long long)countOfDictionaryProxy:(id)arg1;
- (struct CGPoint)convertPointWithParallax:(struct CGPoint)arg1;
- (id)addSubWidgetViewWithTemplateName:(id)arg1 name:(id)arg2 andSettings:(id)arg3;
- (void)dynamicsSnapToPoint:(struct CGPoint)arg1 withDamping:(double)arg2;
- (void)dynamicsRemoveSnapping;
- (void)unfocus:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)focus:(id)arg1;
- (void)focus:(unsigned long long)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_completionToUnfocus:(_Bool)arg1;
- (void)_animationToUnfocus;
- (void)_animateToUnfocus:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_prepareToUnfocus;
- (void)_completionToFocus:(_Bool)arg1;
- (void)_animationToFocus;
- (struct CGSize)_focusSize;
- (void)_animateToFocus:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_prepareToFocus;
- (CDStruct_6c2cf6ec *)_focusGestureHelper;
- (id)_contentViewToFocus;
- (void)play;
- (double)remainingPlayDuration;
- (void)instantResume;
- (void)instantPause;
- (void)networkStatusDidChange:(long long)arg1;
- (void)readinessDidChange:(_Bool)arg1;
- (void)resignReady;
- (void)becomeReady;
- (double)readyProgress:(_Bool)arg1;
- (double)_localReadyProgress;
- (_Bool)isReady:(_Bool)arg1;
- (_Bool)supportsReadiness;
- (void)notifyWhenBecomesReady:(CDUnknownBlockType)arg1;
- (void)removeAllReadyNotifications;
- (void)prefetchMediaURL:(id)arg1 identifier:(id)arg2;
- (void)reloadMediaURL:(id)arg1 size:(struct CGSize)arg2 mode:(long long)arg3 lowQuality:(_Bool)arg4 highQuality:(_Bool)arg5 identifier:(id)arg6 progressHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)updateProgressIndicator:(double)arg1;
- (void)setActivityIndicatorVisible:(_Bool)arg1;
- (_Bool)isActivityIndicatorVisible;
- (void)_stopShowingProgressIndicator;
- (void)stopShowingProgressIndicator;
- (void)_startShowingProgressIndicator;
- (void)startShowingProgressIndicator;
- (void)prepareIfNeeded:(_Bool)arg1;
- (void)prepareForMode:(unsigned long long)arg1 force:(_Bool)arg2;
- (void)prepareForRefresh;
- (void)prepareForReload;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (void)beganCollisionWithWidgetView:(id)arg1 fromGroup:(id)arg2;
- (id)dynamicProxyForOffsetFromCenter:(struct UIOffset)arg1 realRemoteOffsetFromCenter:(struct UIOffset *)arg2;
- (id)subDynamicProxies;
- (void)wobble;
- (float)contentAspectRatio;
- (void)_unloadBorderContent;
- (void)_reloadBorderContent;
- (void)_reloadBorderContentInHighQuality:(_Bool)arg1;
- (void)_cancelAllOperations;
- (void)_cancelBorderOperations;
- (id)_preparseLayoutString:(id)arg1 targetView:(out id *)arg2 anchorView:(out id *)arg3;
- (void)updateLayoutSteps;
@property(nonatomic) struct CGAffineTransform dynamicsTransform;
- (void)updateDynamics;
- (void)updateParallax;
- (void)updateWithParallaxTranslationX:(double)arg1 translationY:(double)arg2;
- (void)updateMotion;
- (void)updateWithMotionTiltRotationX:(double)arg1 tiltRotationY:(double)arg2 tiltRotationZ:(double)arg3;
- (void)updateWidgetTransforms;
- (void)updateContentTransforms;
- (void)resumeContentEffects:(_Bool)arg1;
- (void)pauseContentEffects;
- (void)updateContentEffects;
- (void)restartContentEffects;
- (void)stopContentEffects;
- (void)startContentEffects;
- (void)prepareContentEffects;
- (void)updateContentFilters;
- (void)updateShadowPath;
- (void)updateBorder;
- (void)updateAntialiasing;
- (void)setAntialiasing:(_Bool)arg1;
- (_Bool)needsAntialiasing;
- (void)updateTransforms;
- (void)_jsSetTransform:(struct CATransform3D)arg1;
- (struct CATransform3D)_jsTransform;
- (struct CATransform3D)_jsOriginalTransform;
- (void)setNeedsPrepare;
@property(readonly) OFUIView *actionView;
- (id)actionBindingForAction:(id)arg1 isTouchCountAgnostic:(_Bool)arg2;
- (id)allActionBindings;
- (void)removeAllActionBindings;
- (void)removeActionBinding:(id)arg1;
- (void)addActionBinding:(id)arg1 scope:(unsigned long long)arg2;
- (_Bool)performActionScript:(id)arg1 withAction:(id)arg2;
- (_Bool)interactivityEnabled;
- (_Bool)canPerformAction:(id)arg1;
- (_Bool)sendAction:(id)arg1 toTarget:(id)arg2;
- (void)setSettingLayoutSteps:(id)arg1;
- (void)setSettingDynamicsPushGroups:(id)arg1;
- (id)settingDynamicsPushGroups;
- (void)setSettingDynamicsAttachments:(id)arg1;
- (id)settingDynamicsAttachments;
- (void)setSettingDynamicsCollisionActionScript:(id)arg1;
- (void)setSettingDynamicsCollisionGroups:(id)arg1;
- (id)settingDynamicsCollisionGroups;
- (void)setSettingDynamicsBodyAllowsRotation:(_Bool)arg1;
- (_Bool)settingDynamicsBodyAllowsRotation;
- (void)setSettingDynamicsBodyAngularResistance:(double)arg1;
- (double)settingDynamicsBodyAngularResistance;
- (void)setSettingDynamicsBodyResistance:(double)arg1;
- (double)settingDynamicsBodyResistance;
- (void)setSettingDynamicsBodyDensity:(double)arg1;
- (double)settingDynamicsBodyDensity;
- (void)setSettingDynamicsBodyFriction:(double)arg1;
- (double)settingDynamicsBodyFriction;
- (void)setSettingDynamicsBodyElasticity:(double)arg1;
- (double)settingDynamicsBodyElasticity;
- (void)setSettingDynamicsGravityDisabled:(_Bool)arg1;
- (_Bool)settingDynamicsGravityDisabled;
- (void)setSettingDynamicsEnabled:(_Bool)arg1;
- (_Bool)settingDynamicsEnabled;
- (void)setSettingParallaxEnabled:(_Bool)arg1;
- (void)setSettingMotionZTiltReversed:(_Bool)arg1;
- (_Bool)settingMotionZTiltReversed;
- (void)setSettingMotionYTiltReversed:(_Bool)arg1;
- (_Bool)settingMotionYTiltReversed;
- (void)setSettingMotionXTiltReversed:(_Bool)arg1;
- (_Bool)settingMotionXtiltReversed;
- (void)setSettingMotionZTiltAnchorPoint:(struct CGPoint)arg1;
- (struct CGPoint)settingMotionZTiltAnchorPoint;
- (void)setSettingMotionYTiltAnchorPoint:(struct CGPoint)arg1;
- (struct CGPoint)settingMotionYTiltAnchorPoint;
- (void)setSettingMotionXTiltAnchorPoint:(struct CGPoint)arg1;
- (struct CGPoint)settingMotionXTiltAnchorPoint;
- (void)setSettingMotionZMinMax:(struct CGSize)arg1;
- (struct CGSize)settingMotionZMinMax;
- (void)setSettingMotionYMinMax:(struct CGSize)arg1;
- (struct CGSize)settingMotionYMinMax;
- (void)setSettingMotionXMinMax:(struct CGSize)arg1;
- (struct CGSize)settingMotionXMinMax;
- (void)setSettingMotionTiltZEnabled:(_Bool)arg1;
- (_Bool)settingMotionTiltZEnabled;
- (void)setSettingMotionTiltYEnabled:(_Bool)arg1;
- (_Bool)settingMotionTiltYEnabled;
- (void)setSettingMotionTiltXEnabled:(_Bool)arg1;
- (_Bool)settingMotionTiltXEnabled;
- (void)setSettingMotionEnabled:(_Bool)arg1;
- (_Bool)settingMotionEnabled;
- (void)setSettingXyTranslation:(struct CGPoint)arg1;
- (struct CGPoint)settingXyTranslation;
- (void)setSettingXyScale:(struct CGSize)arg1;
- (struct CGSize)settingXyScale;
- (void)setSettingYFlipped:(_Bool)arg1;
- (_Bool)settingYFlipped;
- (void)setSettingXFlipped:(_Bool)arg1;
- (_Bool)settingXFlipped;
- (void)setSettingZRotationAnchorPoint:(struct CGPoint)arg1;
- (struct CGPoint)settingZRotationAnchorPoint;
- (void)setSettingZRotation:(double)arg1;
- (double)settingZRotation;
- (void)setSettingContentEffects:(id)arg1;
- (id)settingContentEffects;
- (void)setSettingContentFilters:(id)arg1;
- (id)settingContentFilters;
- (void)setSettingBorderImageCapEdgeInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)settingBorderImageCapEdgeInsets;
- (void)setSettingBorderImageURL:(id)arg1;
- (id)settingBorderImageURL;
- (void)setSettingBorderEdgeOutsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)settingBorderEdgeOutsets;
- (void)setSettingBorderWidth:(double)arg1;
- (double)settingBorderWidth;
- (void)setSettingBorderColor:(id)arg1;
- (id)settingBorderColor;
- (void)setSettingShadowOptimization:(_Bool)arg1;
- (_Bool)settingShadowOptimization;
- (void)setSettingShadowOffset:(struct CGSize)arg1;
- (struct CGSize)settingShadowOffset;
- (void)setSettingShadowOpacity:(double)arg1;
- (double)settingShadowOpacity;
- (void)setSettingShadowRadius:(double)arg1;
- (double)settingShadowRadius;
- (void)setSettingShadowColor:(id)arg1;
- (id)settingShadowColor;
- (void)setSettingActionBindings:(id)arg1;
- (id)settingActionBindings;
- (void)setSettingIgnoreEventsOnTransparentPixels:(_Bool)arg1;
- (_Bool)settingIgnoreEventsOnTransparentPixels;
- (void)setSettingEventsInset:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)settingEventsInset;
- (void)setSettingCanPerformActionScript:(id)arg1;
- (void)setSettingPrepareActionScript:(id)arg1;
- (void)setSettingAutoresizingMask:(unsigned long long)arg1;
- (unsigned long long)settingAutoresizingMask;
- (void)setSettingAntialiasing:(_Bool)arg1;
- (_Bool)settingAntialiasing;
- (void)setSettingCornerRadius:(double)arg1;
- (double)settingCornerRadius;
- (void)setSettingBackgroundColor:(id)arg1;
- (id)settingBackgroundColor;
- (void)setSettingNeedsZoning:(_Bool)arg1;
- (_Bool)settingNeedsZoning;
- (void)setSettingHidden:(_Bool)arg1;
- (void)setSettingAlpha:(double)arg1;
- (double)settingAlpha;
- (void)setSettingZPosition:(double)arg1;
- (double)settingZPosition;
- (void)setSettingUserInteractionEnabled:(_Bool)arg1;
- (_Bool)settingUserInteractionEnabled;
- (void)setSettingClipsToBounds:(_Bool)arg1;
- (_Bool)settingClipsToBounds;
- (void)setSettingPosition:(struct CGPoint)arg1;
- (struct CGPoint)settingPosition;
- (void)setSettingSize:(struct CGSize)arg1;
- (struct CGSize)settingSize;
- (void)setSettingCenter:(struct CGPoint)arg1;
- (struct CGPoint)settingCenter;
- (void)setSettingFrame:(struct CGRect)arg1;
- (struct CGRect)calculateFrame:(struct CGRect)arg1;
- (struct CGRect)settingFrame;
- (struct CGRect)originalFrame;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (id)settingObjectForKey:(id)arg1;
- (void)applyLayoutSettings;
- (id)layoutSettingsKeys;
- (void)applySettings;
- (void)applySettingsIfNeeded;
- (void)setNeedsApplySettings;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setCenterY:(double)arg1;
- (void)setCenterX:(double)arg1;
- (struct CGSize)layoutFactor;
- (struct CGSize)parentLayoutFactor;
- (void)layoutSubviews;
- (struct CGRect)borderRect;
- (void)sizeToFit;
- (void)setFrame:(struct CGRect)arg1;
@property(nonatomic) struct CGRect bounds;
- (id)subWidgetViewsInRect:(struct CGRect)arg1;
- (id)subWidgetViewForName:(id)arg1 recursively:(_Bool)arg2;
- (id)subWidgetViewNames;
- (id)pageViewController;
@property(readonly, nonatomic) OKPresentationViewController *presentationViewController;
- (id)_borderView;
- (id)_dimmerView;
@property(readonly, copy) NSString *description;
- (id)name;
@property(nonatomic) OKWidgetView *parentWidgetView; // @synthesize parentWidgetView=_parentWidgetView;
@property(nonatomic) id <OKWidgetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithWidget:(id)arg1;
- (void)commonInit;

// Remaining properties
@property(nonatomic) struct CGPoint center;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

