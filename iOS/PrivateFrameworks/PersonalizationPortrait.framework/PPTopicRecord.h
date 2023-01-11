//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSMutableCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSString, PPSource, PPTopic;

@interface PPTopicRecord : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    PPTopic *_topic;
    PPSource *_source;
    unsigned long long _algorithm;
    double _initialScore;
    double _decayRate;
    _Bool _isLocal;
    NSString *_extractionOsBuild;
    unsigned long long _extractionAssetVersion;
}

+ (id)describeAlgorithm:(unsigned long long)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long extractionAssetVersion; // @synthesize extractionAssetVersion=_extractionAssetVersion;
@property(readonly, nonatomic) NSString *extractionOsBuild; // @synthesize extractionOsBuild=_extractionOsBuild;
@property(readonly, nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(readonly, nonatomic) double decayRate; // @synthesize decayRate=_decayRate;
@property(readonly, nonatomic) double initialScore; // @synthesize initialScore=_initialScore;
@property(readonly, nonatomic) unsigned long long algorithm; // @synthesize algorithm=_algorithm;
@property(readonly, nonatomic) PPSource *source; // @synthesize source=_source;
@property(readonly, nonatomic) PPTopic *topic; // @synthesize topic=_topic;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

