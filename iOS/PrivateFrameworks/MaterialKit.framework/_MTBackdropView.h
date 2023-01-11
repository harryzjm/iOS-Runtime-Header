//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIColor;

@interface _MTBackdropView : UIView
{
    NSString *_luminanceColorMapName;
    _Bool _preservesFiltersAtZero;
    UIColor *_colorMatrixColor;
    UIColor *_colorAddColor;
}

+ (id)_luminanceColorMapWithName:(id)arg1;
+ (Class)layerClass;
@property(nonatomic, getter=_preservesFiltersAtZero, setter=_setPreservesFiltersAtZero:) _Bool preservesFiltersAtZero; // @synthesize preservesFiltersAtZero=_preservesFiltersAtZero;
@property(copy, nonatomic) UIColor *colorAddColor; // @synthesize colorAddColor=_colorAddColor;
@property(copy, nonatomic) UIColor *colorMatrixColor; // @synthesize colorMatrixColor=_colorMatrixColor;
- (void).cxx_destruct;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)_backdropLayer;
- (void)_setFloatValue:(double)arg1 forFilterOfType:(id)arg2 valueKey:(id)arg3 configurationBlock:(CDUnknownBlockType)arg4;
- (void)_setValue:(id)arg1 forFilterOfType:(id)arg2 valueKey:(id)arg3 configurationBlock:(CDUnknownBlockType)arg4;
- (void)_removeFilterOfTypeIfNecessary:(id)arg1;
- (void)_configureFilterOfTypeIfNecessary:(id)arg1 withConfigurationBlock:(CDUnknownBlockType)arg2;
- (void)_setLuminanceColorMapName:(id)arg1;
- (id)_luminanceColorMapName;
@property(copy, nonatomic) NSString *groupName;
@property(nonatomic) double zoom;
@property(nonatomic) double brightness;
@property(nonatomic) double saturation;
@property(nonatomic) double luminanceAlpha;
@property(copy, nonatomic) NSString *blurInputQuality;
@property(nonatomic) double blurRadius;

@end

