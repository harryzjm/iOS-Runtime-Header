//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveExperts/NSCopying-Protocol.h>
#import <ProactiveExperts/NSSecureCoding-Protocol.h>

@class NSString;

@interface PEXItem : NSObject <NSSecureCoding, NSCopying>
{
    unsigned char _source;
    unsigned char _changeType;
    NSString *_identifier;
    double _score;
    NSString *_sourceIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)itemWithScore:(double)arg1 source:(unsigned char)arg2 sourceIdentifier:(id)arg3;
+ (id)itemWithScore:(double)arg1 source:(unsigned char)arg2 sourceIdentifier:(id)arg3 changeType:(unsigned char)arg4;
@property(retain, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(nonatomic) unsigned char changeType; // @synthesize changeType=_changeType;
@property(nonatomic) unsigned char source; // @synthesize source=_source;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqualToItem:(id)arg1;
- (_Bool)hasScoreSimilarToItem:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithScore:(double)arg1 source:(unsigned char)arg2 sourceIdentifier:(id)arg3;
- (id)initWithScore:(double)arg1 source:(unsigned char)arg2 sourceIdentifier:(id)arg3 changeType:(unsigned char)arg4;

@end
