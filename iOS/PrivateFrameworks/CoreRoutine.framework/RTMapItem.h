//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString, NSUUID, RTAddress, RTLocation, RTMapItemExtendedAttributes;

@interface RTMapItem : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_identifier;
    NSData *_geoMapItemHandle;
    unsigned long long _source;
    RTAddress *_address;
    NSString *_name;
    unsigned long long _muid;
    long long _resultProviderID;
    RTLocation *_location;
    RTMapItemExtendedAttributes *_extendedAttributes;
    NSDate *_creationDate;
    double _weight;
}

+ (double)weightForSource:(unsigned long long)arg1;
+ (double)weightForExtendedAttributes:(id)arg1;
+ (id)sourceToString:(unsigned long long)arg1;
+ (_Bool)hasKnownTypeItem:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) RTMapItemExtendedAttributes *extendedAttributes; // @synthesize extendedAttributes=_extendedAttributes;
@property(readonly, nonatomic) RTLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) long long resultProviderID; // @synthesize resultProviderID=_resultProviderID;
@property(readonly, nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) RTAddress *address; // @synthesize address=_address;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(readonly, nonatomic) NSData *geoMapItemHandle; // @synthesize geoMapItemHandle=_geoMapItemHandle;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)updateWeightWithSource:(unsigned long long)arg1 extendedAttributes:(id)arg2;
- (_Bool)validMUID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)compare:(id)arg1;
- (_Bool)isEqualToMapItem:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 address:(id)arg3 location:(id)arg4 source:(unsigned long long)arg5 muid:(unsigned long long)arg6 resultProviderID:(long long)arg7 geoMapItemHandle:(id)arg8 creationDate:(id)arg9 extendedAttributes:(id)arg10;
- (id)initWithMapItemMO:(id)arg1;
- (id)init;

@end

