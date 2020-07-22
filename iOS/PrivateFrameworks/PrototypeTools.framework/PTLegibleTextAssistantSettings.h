//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UISettings.h>

@class NSArray, NSString, UIColor;

@interface PTLegibleTextAssistantSettings : _UISettings
{
    _Bool _drawingShadowDrawsText;
    NSArray *_shadowRadii;
    NSArray *_shadowAlphas;
    NSString *_shadowCompositingFilterName;
    UIColor *_foregroundColor;
    CDStruct_7d841a06 _imageStatistics;
}

+ (id)settingsWithImageStatistics:(CDStruct_7d841a06)arg1;
@property(nonatomic) CDStruct_7d841a06 imageStatistics; // @synthesize imageStatistics=_imageStatistics;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) _Bool drawingShadowDrawsText; // @synthesize drawingShadowDrawsText=_drawingShadowDrawsText;
@property(copy, nonatomic) NSString *shadowCompositingFilterName; // @synthesize shadowCompositingFilterName=_shadowCompositingFilterName;
@property(copy, nonatomic) NSArray *shadowAlphas; // @synthesize shadowAlphas=_shadowAlphas;
@property(copy, nonatomic) NSArray *shadowRadii; // @synthesize shadowRadii=_shadowRadii;
- (void).cxx_destruct;
- (id)calculateForegroundColorWithImageStatistics:(CDStruct_7d841a06)arg1;
- (void)setDefaultValues;

@end
