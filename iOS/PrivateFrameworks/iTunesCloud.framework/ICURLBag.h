//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICURLBagRadioConfiguration, NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface ICURLBag : NSObject
{
    NSDictionary *_bagValues;
    NSMutableDictionary *_convertedActionsCache;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_GUIDURLRegexPatterns;
    NSSet *_GUIDURLSchemes;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *convertedActionsCache; // @synthesize convertedActionsCache=_convertedActionsCache;
@property(retain, nonatomic) NSDictionary *bagValues; // @synthesize bagValues=_bagValues;
- (void).cxx_destruct;
- (void)_validateGUIDURLConfigIfNeeded;
- (_Bool)_shouldMescalSignBodyForURL:(id)arg1 withSignatureConfiguration:(id)arg2;
@property(retain, nonatomic) NSSet *GUIDURLSchemes; // @synthesize GUIDURLSchemes=_GUIDURLSchemes;
@property(retain, nonatomic) NSArray *GUIDURLRegexPatterns; // @synthesize GUIDURLRegexPatterns=_GUIDURLRegexPatterns;
@property(readonly, nonatomic) _Bool canPostKeybagSyncData;
@property(readonly, copy, nonatomic) NSString *storefrontHeaderSuffix;
@property(readonly, nonatomic) ICURLBagRadioConfiguration *radioConfiguration;
- (id)mescalConfigurationForResponseURL:(id)arg1;
- (id)mescalConfigurationForRequestURL:(id)arg1;
- (_Bool)shouldAppendMachineDataHeadersForURL:(id)arg1;
- (_Bool)shouldAppendDeviceGUIDForURL:(id)arg1;
- (long long)int64ValueForBagKey:(id)arg1;
- (id)urlForBagKey:(id)arg1;
- (_Bool)hasValueForBagKey:(id)arg1;
- (id)valueForBagKey:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *allValues;
- (id)initWithDictionary:(id)arg1;

@end

