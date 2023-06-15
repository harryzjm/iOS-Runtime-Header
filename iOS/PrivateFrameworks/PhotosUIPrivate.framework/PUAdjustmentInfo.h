//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PUAdjustmentCustomBehavior;

__attribute__((visibility("hidden")))
@interface PUAdjustmentInfo : NSObject
{
    _Bool _iconIsColor;
    _Bool _enabled;
    NSString *_localizedName;
    NSString *_localizedActionName;
    NSString *_localizedSectionName;
    NSString *_iconName;
    double _defaultLevel;
    double _identityLevel;
    double _minimumLevel;
    double _maximumLevel;
    double _baseLevel;
    double _currentLevel;
    double _lastAdjustedLevel;
    NSString *_identifier;
    NSString *_adjustmentKey;
    NSString *_settingKey;
    id <PUAdjustmentCustomBehavior> _customSettingDelegate;
    NSString *_attributeKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *attributeKey; // @synthesize attributeKey=_attributeKey;
@property(retain, nonatomic) id <PUAdjustmentCustomBehavior> customSettingDelegate; // @synthesize customSettingDelegate=_customSettingDelegate;
@property(retain, nonatomic) NSString *settingKey; // @synthesize settingKey=_settingKey;
@property(retain, nonatomic) NSString *adjustmentKey; // @synthesize adjustmentKey=_adjustmentKey;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) double lastAdjustedLevel; // @synthesize lastAdjustedLevel=_lastAdjustedLevel;
@property(nonatomic) double currentLevel; // @synthesize currentLevel=_currentLevel;
@property(nonatomic) double baseLevel; // @synthesize baseLevel=_baseLevel;
@property(nonatomic) double maximumLevel; // @synthesize maximumLevel=_maximumLevel;
@property(nonatomic) double minimumLevel; // @synthesize minimumLevel=_minimumLevel;
@property(nonatomic) double identityLevel; // @synthesize identityLevel=_identityLevel;
@property(nonatomic) double defaultLevel; // @synthesize defaultLevel=_defaultLevel;
@property(nonatomic) _Bool iconIsColor; // @synthesize iconIsColor=_iconIsColor;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(retain, nonatomic) NSString *localizedSectionName; // @synthesize localizedSectionName=_localizedSectionName;
@property(retain, nonatomic) NSString *localizedActionName; // @synthesize localizedActionName=_localizedActionName;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (id)description;
@property(readonly, nonatomic) double normalizedDefaultLevel;
@property(readonly, nonatomic) double normalizedCurrentLevel;
- (id)copy;

@end

