//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _CDEventStreamProperties : NSObject
{
    NSString *name;
    NSString *knowledgeBaseName;
    NSString *descriptionString;
    long long valueType;
    _Bool futureEvent;
    _Bool setupOnDemand;
    _Bool canBeSpeculative;
    double timeToLive;
    _Bool canPersistOnStorage;
    double temporalPrecision;
    long long deResolitionPolicy;
    NSString *dataProtectionClass;
    long long totalSizeLimit;
    long long eventsPerPeriod;
    double period;
    _Bool canBeShared;
    long long sharingPolicy;
    double maxLatency;
    _Bool canSendToServer;
    _Bool hasStats;
    long long statisticsType;
    _Bool isInstant;
    _Bool isHistorical;
    long long pollingPeriod;
    NSString *_keyPathString;
}

+ (id)eventStreamPropertiesFromDictionary:(id)arg1;
@property(readonly, nonatomic) NSString *keyPathString; // @synthesize keyPathString=_keyPathString;
@property(readonly, nonatomic) long long pollingPeriod; // @synthesize pollingPeriod;
@property(readonly, nonatomic) _Bool isHistorical; // @synthesize isHistorical;
@property(readonly, nonatomic) _Bool isInstant; // @synthesize isInstant;
@property(readonly, nonatomic) long long statisticsType; // @synthesize statisticsType;
@property(readonly, nonatomic) _Bool hasStats; // @synthesize hasStats;
@property(readonly, nonatomic) _Bool canSendToServer; // @synthesize canSendToServer;
@property(readonly, nonatomic) double maxLatency; // @synthesize maxLatency;
@property(readonly, nonatomic) long long sharingPolicy; // @synthesize sharingPolicy;
@property(readonly, nonatomic) _Bool canBeShared; // @synthesize canBeShared;
@property(readonly, nonatomic) long long eventsPerPeriod; // @synthesize eventsPerPeriod;
@property(readonly, nonatomic) double period; // @synthesize period;
@property(readonly, nonatomic) long long totalSizeLimit; // @synthesize totalSizeLimit;
@property(readonly, nonatomic) NSString *dataProtectionClass; // @synthesize dataProtectionClass;
@property(readonly, nonatomic) long long deResolitionPolicy; // @synthesize deResolitionPolicy;
@property(readonly, nonatomic) double temporalPrecision; // @synthesize temporalPrecision;
@property(readonly, nonatomic) _Bool canPersistOnStorage; // @synthesize canPersistOnStorage;
@property(readonly, nonatomic) double timeToLive; // @synthesize timeToLive;
@property(readonly, nonatomic) _Bool canBeSpeculative; // @synthesize canBeSpeculative;
@property(readonly, nonatomic) _Bool setupOnDemand; // @synthesize setupOnDemand;
@property(readonly, nonatomic) _Bool futureEvent; // @synthesize futureEvent;
@property(readonly, nonatomic) long long valueType; // @synthesize valueType;
@property(readonly, nonatomic) NSString *descriptionString; // @synthesize descriptionString;
@property(readonly, nonatomic) NSString *knowledgeBaseName; // @synthesize knowledgeBaseName;
@property(readonly, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (id)initFromDictionary:(id)arg1;
- (id)description;

@end

