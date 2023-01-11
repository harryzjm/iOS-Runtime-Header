//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMaterial/MTRecipeMaterialSettingsProviding-Protocol.h>

@class NSDictionary, NSString;
@protocol MTTinting><MTMaterialFiltering;

@interface MTRecipeMaterialSettings : NSObject <MTRecipeMaterialSettingsProviding>
{
    long long _materialSettingsVersion;
    NSString *_recipeName;
    NSDictionary *_styles;
    id <MTTinting><MTMaterialFiltering> _baseMaterialSettings;
    id <MTTinting><MTMaterialFiltering> _baseOverlaySettings;
    id <MTTinting><MTMaterialFiltering> _primaryOverlaySettings;
    id <MTTinting><MTMaterialFiltering> _secondaryOverlaySettings;
    id <MTTinting><MTMaterialFiltering> _auxiliaryOverlaySettings;
}

+ (id)styleSetNameForStyleSetFromRecipeWithName:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <MTTinting><MTMaterialFiltering> auxiliaryOverlaySettings; // @synthesize auxiliaryOverlaySettings=_auxiliaryOverlaySettings;
@property(readonly, nonatomic) id <MTTinting><MTMaterialFiltering> secondaryOverlaySettings; // @synthesize secondaryOverlaySettings=_secondaryOverlaySettings;
@property(readonly, nonatomic) id <MTTinting><MTMaterialFiltering> primaryOverlaySettings; // @synthesize primaryOverlaySettings=_primaryOverlaySettings;
@property(readonly, nonatomic) id <MTTinting><MTMaterialFiltering> baseOverlaySettings; // @synthesize baseOverlaySettings=_baseOverlaySettings;
@property(readonly, nonatomic) id <MTTinting><MTMaterialFiltering> baseMaterialSettings; // @synthesize baseMaterialSettings=_baseMaterialSettings;
@property(retain, nonatomic) NSDictionary *styles; // @synthesize styles=_styles;
@property(readonly, copy, nonatomic) NSString *recipeName; // @synthesize recipeName=_recipeName;
@property(readonly, nonatomic) long long materialSettingsVersion; // @synthesize materialSettingsVersion=_materialSettingsVersion;
@property(readonly, copy) NSString *description;
- (id)_platformColorsStyleSetName;
- (id)_newVisualStyleSet;
- (id)_visualStyleSetDescription;
- (id)settingsForConfiguration:(id)arg1;
- (id)styleNameForCategory:(id)arg1;
- (id)initWithRecipeName:(id)arg1 andDescription:(id)arg2 descendantDescriptions:(id)arg3 bundle:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
