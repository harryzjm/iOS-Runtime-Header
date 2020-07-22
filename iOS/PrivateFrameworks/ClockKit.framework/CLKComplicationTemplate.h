//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClockKit/NSCopying-Protocol.h>
#import <ClockKit/NSSecureCoding-Protocol.h>

@class NSMutableSet, UIColor;

@interface CLKComplicationTemplate : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableSet *_activeClients;
    _Bool _finalized;
    UIColor *_tintColor;
}

+ (id)complicationTemplateWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (void).cxx_destruct;
- (void)_enumerateAllKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateScalarKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_setProvidersPaused:(_Bool)arg1;
- (id)_initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
- (void)_enumerateDateKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateBOOLKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateFloatKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateProgressProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)enumerateProgressProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (struct CGSize)maxSizeForImageProviderKey:(id)arg1;
- (void)finalize;
- (id)finalizedCopy;
- (void)validate;
@property(readonly, nonatomic) long long timeTravelUpdateFrequency;
- (_Bool)isCompatibleWithFamily:(long long)arg1;
- (void)endUpdatesForClient:(id)arg1;
- (void)beginUpdatesForClient:(id)arg1;

@end
