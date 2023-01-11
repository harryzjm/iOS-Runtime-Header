//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface NTKAnalogFireWaterFaceView
{
    unsigned long long _currentColor;
    unsigned long long _currentDialShape;
    NSDictionary *_dataSources;
}

+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;
+ (id)_nameForColor:(unsigned long long)arg1;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
@property(retain, nonatomic) NSDictionary *dataSources; // @synthesize dataSources=_dataSources;
@property(nonatomic) unsigned long long currentDialShape; // @synthesize currentDialShape=_currentDialShape;
@property(nonatomic) unsigned long long currentColor; // @synthesize currentColor=_currentColor;
- (void).cxx_destruct;
- (id)_swatchImageForColor:(unsigned long long)arg1 andDialShape:(unsigned long long)arg2;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (void)reloadDataSources;
- (void)setupDataSources;
- (void)_updateDialSize;
- (id)imageForEditOption:(id)arg1;
- (void)_customizeVideoPlayerOnSetup;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_editOptionThatHidesAllComplications;

@end
