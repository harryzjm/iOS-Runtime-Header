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

@class NSString;

@interface BMPhotosKnowledgeGraphEnrichmentTopic : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>
{
    NSString *_identifier;
    double _score;
}

+ (_Bool)supportsSecureCoding;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
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
- (id)initWithIdentifier:(id)arg1 score:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
