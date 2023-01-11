//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSDate, NSSet;

@interface PPTopicQuery : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _overrideDecayRate;
    _Bool _scoreWithBiases;
    unsigned long long _limit;
    NSDate *_fromDate;
    NSDate *_toDate;
    NSDate *_scoringDate;
    NSSet *_matchingSourceBundleIds;
    NSSet *_excludingSourceBundleIds;
    unsigned long long _deviceFilter;
    double _decayRate;
    NSSet *_matchingTopicIds;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSSet *matchingTopicIds; // @synthesize matchingTopicIds=_matchingTopicIds;
@property(nonatomic) _Bool scoreWithBiases; // @synthesize scoreWithBiases=_scoreWithBiases;
@property(nonatomic) double decayRate; // @synthesize decayRate=_decayRate;
@property(nonatomic) _Bool overrideDecayRate; // @synthesize overrideDecayRate=_overrideDecayRate;
@property(nonatomic) unsigned long long deviceFilter; // @synthesize deviceFilter=_deviceFilter;
@property(retain, nonatomic) NSSet *excludingSourceBundleIds; // @synthesize excludingSourceBundleIds=_excludingSourceBundleIds;
@property(retain, nonatomic) NSSet *matchingSourceBundleIds; // @synthesize matchingSourceBundleIds=_matchingSourceBundleIds;
@property(retain, nonatomic) NSDate *scoringDate; // @synthesize scoringDate=_scoringDate;
@property(retain, nonatomic) NSDate *toDate; // @synthesize toDate=_toDate;
@property(retain, nonatomic) NSDate *fromDate; // @synthesize fromDate=_fromDate;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

