//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MTIDScheme : NSObject
{
    _Bool _isDefault;
    NSString *_idNamespace;
    long long _idType;
    long long _rotationSchedule;
    long long _lifespan;
    NSArray *_correlations;
    NSString *_version;
    NSString *_containerIdentifier;
    unsigned long long _localHash;
    unsigned long long _correlationHash;
    NSArray *_topics;
}

+ (id)referenceDateComponents;
+ (id)localCalendar;
- (void).cxx_destruct;
@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(copy, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(nonatomic) unsigned long long correlationHash; // @synthesize correlationHash=_correlationHash;
@property(nonatomic) unsigned long long localHash; // @synthesize localHash=_localHash;
@property(copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSArray *correlations; // @synthesize correlations=_correlations;
@property(nonatomic) long long lifespan; // @synthesize lifespan=_lifespan;
@property(nonatomic) long long rotationSchedule; // @synthesize rotationSchedule=_rotationSchedule;
@property(nonatomic) long long idType; // @synthesize idType=_idType;
@property(copy, nonatomic) NSString *idNamespace; // @synthesize idNamespace=_idNamespace;
- (id)debugInfo;
- (unsigned long long)calculateHash;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)rotatedSecretNameForDate:(id)arg1 maxCount:(long long)arg2;
- (id)secretKeyForDate:(id)arg1;
- (id)rollingEndDateForDate:(id)arg1;
- (id)rollingStartDateForDate:(id)arg1;
- (long long)timeBucketForDate:(id)arg1;
- (id)initWithNamespace:(id)arg1 type:(long long)arg2;
- (id)initWithNamespace:(id)arg1 options:(id)arg2;

@end
