//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>
#import <BiomeStreams/BMStreamValidating-Protocol.h>
#import <BiomeStreams/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface BMPhotosKnowledgeGraphEnrichmentLocation : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>
{
    NSString *_street;
    NSString *_city;
    NSString *_state;
    NSString *_country;
    NSData *_encodedLocation;
}

+ (_Bool)supportsSecureCoding;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *encodedLocation; // @synthesize encodedLocation=_encodedLocation;
@property(readonly, nonatomic) NSString *country; // @synthesize country=_country;
@property(readonly, nonatomic) NSString *state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *city; // @synthesize city=_city;
@property(readonly, nonatomic) NSString *street; // @synthesize street=_street;
- (_Bool)isValidWithContext:(id)arg1 error:(id *)arg2;
- (_Bool)isCompleteWithContext:(id)arg1 error:(id *)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)proto;
- (id)initWithProtoData:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)encodeAsProto;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)json;
- (id)jsonDict;
- (id)serialize;
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithStreet:(id)arg1 city:(id)arg2 state:(id)arg3 country:(id)arg4 encodedLocation:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
