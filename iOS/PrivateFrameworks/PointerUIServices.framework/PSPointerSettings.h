//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@interface PSPointerSettings : PTSettings
{
    double _materialAlphaDot;
    double _materialAlphaIBeam;
    double _materialAlphaSmallItemLight;
    double _materialAlphaSmallItemDark;
    double _materialAlphaSmallItemDarkHighContrast;
}

+ (id)settingsControllerModule;
@property(nonatomic) double materialAlphaSmallItemDarkHighContrast; // @synthesize materialAlphaSmallItemDarkHighContrast=_materialAlphaSmallItemDarkHighContrast;
@property(nonatomic) double materialAlphaSmallItemDark; // @synthesize materialAlphaSmallItemDark=_materialAlphaSmallItemDark;
@property(nonatomic) double materialAlphaSmallItemLight; // @synthesize materialAlphaSmallItemLight=_materialAlphaSmallItemLight;
@property(nonatomic) double materialAlphaIBeam; // @synthesize materialAlphaIBeam=_materialAlphaIBeam;
@property(nonatomic) double materialAlphaDot; // @synthesize materialAlphaDot=_materialAlphaDot;
- (void)setDefaultValues;

@end
