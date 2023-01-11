//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface INPlace : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSString *_placeType;
    NSString *_placeSubType;
    NSArray *_placeDescriptors;
    long long _personalPlaceType;
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long personalPlaceType; // @synthesize personalPlaceType=_personalPlaceType;
@property(readonly, copy, nonatomic) NSArray *placeDescriptors; // @synthesize placeDescriptors=_placeDescriptors;
@property(readonly, copy, nonatomic) NSString *placeSubType; // @synthesize placeSubType=_placeSubType;
@property(readonly, copy, nonatomic) NSString *placeType; // @synthesize placeType=_placeType;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithPlaceType:(id)arg1 placeSubType:(id)arg2 placeDescriptors:(id)arg3 personalPlaceType:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
