//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>

@class NSDictionary, NSSet;

@interface AVOutputSettings : NSObject <NSCopying>
{
    NSDictionary *_outputSettingsDictionary;
}

+ (_Bool)supportsEmptyOutputSettingsDictionary;
+ (id)defaultOutputSettingsForMediaType:(id)arg1;
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2 exceptionReason:(id *)arg3;
+ (id)outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2;
+ (unsigned long long)_validateOutputSettingsDictionary:(id)arg1 compatibilityDescription:(id *)arg2;
+ (unsigned long long)validateOutputSettingsDictionary:(id)arg1;
+ (id)eligibleOutputSettingsDictionaryKeys;
+ (id)registeredOutputSettingsClasses;
@property(readonly, nonatomic) NSDictionary *outputSettingsDictionary; // @synthesize outputSettingsDictionary=_outputSettingsDictionary;
- (_Bool)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg1;
- (_Bool)validateUsingOutputSettingsValidator:(id)arg1 reason:(id *)arg2;
- (_Bool)canFullySpecifyOutputFormatReturningReason:(id *)arg1;
@property(readonly, nonatomic) _Bool willYieldCompressedSamples;
@property(readonly, nonatomic) NSSet *compatibleMediaTypes;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
- (id)init;

@end

