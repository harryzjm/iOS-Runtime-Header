//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface BRAsset : NSObject
{
    _Bool _hasAudio;
    _Bool _hasHaptic;
    _Bool _isNull;
    long long _type;
    NSDictionary *_parameters;
}

+ (id)nullAsset;
+ (id)withType:(long long)arg1 andParameters:(id)arg2;
@property(readonly, nonatomic) _Bool isNull; // @synthesize isNull=_isNull;
@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) _Bool hasHaptic; // @synthesize hasHaptic=_hasHaptic;
@property(nonatomic) _Bool hasAudio; // @synthesize hasAudio=_hasAudio;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) id propertyList;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithType:(long long)arg1 andParameters:(id)arg2 null:(_Bool)arg3;
- (id)init;

@end
