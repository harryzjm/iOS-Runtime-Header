//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface VCRateControlServerBag : NSObject
{
    NSNumber *_experimentGroupIndex;
    NSDictionary *_serverBagDict;
    int _operatingMode;
    _Bool _experimentEnabled;
}

+ (id)prefixForMode:(int)arg1;
+ (id)groupKeysWithMode:(int)arg1 primaryKey:(id)arg2;
+ (id)profileNumberKeyWithMode:(int)arg1;
+ (id)keysWithMode:(int)arg1;
- (id)getExperimentValueForKey:(id)arg1;
@property(readonly, retain) NSNumber *experimentGroupIndex;
@property(readonly) int experimentVersion;
- (id)getExperimentConfig:(unsigned char)arg1 defaultValue:(id)arg2;
- (id)valueForSecondaryKeyWithPrimaryKey:(id)arg1 secondaryKey:(id)arg2 type:(int)arg3;
- (id)valueForType:(int)arg1 value:(id)arg2;
- (_Bool)containsAllSecondaryKeysWithPrimaryKey:(id)arg1;
- (void)dealloc;
- (id)initWithMode:(int)arg1 serverBagDict:(id)arg2;

@end

