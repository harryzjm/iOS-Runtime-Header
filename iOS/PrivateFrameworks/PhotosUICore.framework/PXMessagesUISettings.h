//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface PXMessagesUISettings
{
    NSArray *_cachedHorizontalOffsets;
    _Bool _enableDebugTapbacksStack;
    _Bool _applyRotationToFirstAndLast;
    _Bool _renderWithCA;
    _Bool _bestCropRectEnabled;
    _Bool _aspectTilesEnabled;
    _Bool _enableDebugTapbacksGrid;
    long long _dataSourceType;
    unsigned long long _stackedItemsCount;
    double _normalizedStackSizeTransform;
    double _normalizedStackVerticalOffset;
    double _verticalContentInsets;
    double _rotationAngle;
    double _stackShadowYOffset;
    double _stackShadowBlurRadius;
    double _stackShadowAlpha;
    NSString *_horizontalOffsetString;
    double _normalizedPageWidth;
    long long _pagingBehavior;
    double _pagingVelocityThreshold;
    double _gridShadowXOffset;
    double _gridShadowYOffset;
    double _gridShadowBlurRadius;
    double _gridShadowAlpha;
    double _minItemSize;
    double _comfortableFitPercentage;
    long long _minColumns;
    long long _maxColumns;
    unsigned long long _transitionItemsCount;
    double _transitionDuration;
    double _transitionSpringDamping;
    double _transitionSpringVelocity;
}

+ (id)transientProperties;
+ (id)sharedInstance;
+ (void)_showStackBalloonViewWithNavigationController:(id)arg1;
+ (id)_assetCollectionItemProvider;
+ (id)settingsControllerModule;
- (void).cxx_destruct;
@property(nonatomic) double transitionSpringVelocity; // @synthesize transitionSpringVelocity=_transitionSpringVelocity;
@property(nonatomic) double transitionSpringDamping; // @synthesize transitionSpringDamping=_transitionSpringDamping;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic) unsigned long long transitionItemsCount; // @synthesize transitionItemsCount=_transitionItemsCount;
@property(nonatomic) long long maxColumns; // @synthesize maxColumns=_maxColumns;
@property(nonatomic) long long minColumns; // @synthesize minColumns=_minColumns;
@property(nonatomic) double comfortableFitPercentage; // @synthesize comfortableFitPercentage=_comfortableFitPercentage;
@property(nonatomic) double minItemSize; // @synthesize minItemSize=_minItemSize;
@property(nonatomic) _Bool enableDebugTapbacksGrid; // @synthesize enableDebugTapbacksGrid=_enableDebugTapbacksGrid;
@property(nonatomic) double gridShadowAlpha; // @synthesize gridShadowAlpha=_gridShadowAlpha;
@property(nonatomic) double gridShadowBlurRadius; // @synthesize gridShadowBlurRadius=_gridShadowBlurRadius;
@property(nonatomic) double gridShadowYOffset; // @synthesize gridShadowYOffset=_gridShadowYOffset;
@property(nonatomic) double gridShadowXOffset; // @synthesize gridShadowXOffset=_gridShadowXOffset;
@property(nonatomic) _Bool aspectTilesEnabled; // @synthesize aspectTilesEnabled=_aspectTilesEnabled;
@property(nonatomic) _Bool bestCropRectEnabled; // @synthesize bestCropRectEnabled=_bestCropRectEnabled;
@property(nonatomic) double pagingVelocityThreshold; // @synthesize pagingVelocityThreshold=_pagingVelocityThreshold;
@property(nonatomic) long long pagingBehavior; // @synthesize pagingBehavior=_pagingBehavior;
@property(nonatomic) double normalizedPageWidth; // @synthesize normalizedPageWidth=_normalizedPageWidth;
@property(copy, nonatomic) NSString *horizontalOffsetString; // @synthesize horizontalOffsetString=_horizontalOffsetString;
@property(nonatomic) _Bool renderWithCA; // @synthesize renderWithCA=_renderWithCA;
@property(nonatomic) double stackShadowAlpha; // @synthesize stackShadowAlpha=_stackShadowAlpha;
@property(nonatomic) double stackShadowBlurRadius; // @synthesize stackShadowBlurRadius=_stackShadowBlurRadius;
@property(nonatomic) double stackShadowYOffset; // @synthesize stackShadowYOffset=_stackShadowYOffset;
@property(nonatomic) _Bool applyRotationToFirstAndLast; // @synthesize applyRotationToFirstAndLast=_applyRotationToFirstAndLast;
@property(nonatomic) double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(nonatomic) _Bool enableDebugTapbacksStack; // @synthesize enableDebugTapbacksStack=_enableDebugTapbacksStack;
@property(nonatomic) double verticalContentInsets; // @synthesize verticalContentInsets=_verticalContentInsets;
@property(nonatomic) double normalizedStackVerticalOffset; // @synthesize normalizedStackVerticalOffset=_normalizedStackVerticalOffset;
@property(nonatomic) double normalizedStackSizeTransform; // @synthesize normalizedStackSizeTransform=_normalizedStackSizeTransform;
@property(nonatomic) unsigned long long stackedItemsCount; // @synthesize stackedItemsCount=_stackedItemsCount;
@property(nonatomic) long long dataSourceType; // @synthesize dataSourceType=_dataSourceType;
@property(readonly, nonatomic) NSArray *horizontalOffsets;
- (void)setDefaultValues;
- (id)parentSettings;

@end
