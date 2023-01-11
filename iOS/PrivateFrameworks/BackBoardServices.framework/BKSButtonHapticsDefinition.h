//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class BSMutableSettings, BSSettings;

@interface BKSButtonHapticsDefinition : NSObject <NSSecureCoding>
{
    BSMutableSettings *_settings;
    _Bool _representsHomeButton;
}

+ (_Bool)supportsSecureCoding;
+ (id)definitionForHomeButton;
- (void).cxx_destruct;
@property(nonatomic) _Bool representsHomeButton; // @synthesize representsHomeButton=_representsHomeButton;
@property(readonly, nonatomic, getter=_BSSettings) BSSettings *BSSettings; // @synthesize BSSettings=_settings;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateFromDefinition:(id)arg1 withChangeInspectorBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) long long clickHapticAssetType;
@property(readonly, nonatomic, getter=isLongPressEnabled) long long longPressEnabled;
@property(nonatomic) double maximumLongPressTimeInterval;
@property(nonatomic) double minimumLongPressTimeInterval;
@property(nonatomic) double maximumMultiplePressTimeInterval;
@property(nonatomic) double minimumMultiplePressTimeInterval;
@property(nonatomic) long long maximumPressCount;
@property(nonatomic) long long maximumTapCount;
- (id)description;
- (id)init;
- (id)_initWithBSSettings:(id)arg1;

@end
