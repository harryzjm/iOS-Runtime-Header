//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class RERelevanceProviderEnvironment;

@interface RERelevanceProvider : NSObject <NSCopying>
{
    unsigned long long _cachedHash;
    unsigned long long _priority;
    RERelevanceProviderEnvironment *_environment;
}

+ (id)relevanceSimulatorID;
+ (id)customRelevanceProviderForFeature:(id)arg1 withValue:(id)arg2;
- (void).cxx_destruct;
- (id)environment;
- (void)setEnvironment:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)_hash;
- (_Bool)isEqual:(id)arg1;
- (id)providerWithPriority:(unsigned long long)arg1;
- (unsigned long long)relevancePriority;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryEncoding;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end
