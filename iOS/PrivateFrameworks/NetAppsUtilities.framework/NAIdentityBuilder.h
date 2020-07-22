//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetAppsUtilities/NSCopying-Protocol.h>

@class NAIdentity, NSMutableArray;

@interface NAIdentityBuilder : NSObject <NSCopying>
{
    NSMutableArray *_characteristics;
    NAIdentity *_builtIdentity;
}

+ (id)buildPointerIdentity;
+ (id)na_identity;
+ (id)builderWithIdentity:(id)arg1;
+ (id)builder;
@property(retain, nonatomic) NAIdentity *builtIdentity; // @synthesize builtIdentity=_builtIdentity;
@property(retain, nonatomic) NSMutableArray *characteristics; // @synthesize characteristics=_characteristics;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)build;
- (_Bool)isObject:(id)arg1 equalToObject:(id)arg2;
- (unsigned long long)hashOfObject:(id)arg1;
- (id)appendCharacteristic:(CDUnknownBlockType)arg1 withRole:(long long)arg2 comparatorBlock:(CDUnknownBlockType)arg3 hashBlock:(CDUnknownBlockType)arg4;
- (id)appendRangeCharacteristic:(CDUnknownBlockType)arg1 withRole:(long long)arg2;
- (id)appendDoubleCharacteristic:(CDUnknownBlockType)arg1 withRole:(long long)arg2;
- (id)appendFloatCharacteristic:(CDUnknownBlockType)arg1 withRole:(long long)arg2;
- (id)appendUnsignedIntegerCharacteristic:(CDUnknownBlockType)arg1 withRole:(long long)arg2;
- (id)appendIntegerCharacteristic:(CDUnknownBlockType)arg1 withRole:(long long)arg2;
- (id)appendCharacteristic:(CDUnknownBlockType)arg1 withRole:(long long)arg2;
- (id)appendRangeCharacteristic:(CDUnknownBlockType)arg1;
- (id)appendDoubleCharacteristic:(CDUnknownBlockType)arg1;
- (id)appendFloatCharacteristic:(CDUnknownBlockType)arg1;
- (id)appendUnsignedIntegerCharacteristic:(CDUnknownBlockType)arg1;
- (id)appendIntegerCharacteristic:(CDUnknownBlockType)arg1;
- (id)appendCharacteristic:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentity:(id)arg1;
- (id)init;

@end

