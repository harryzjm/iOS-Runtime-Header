//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/NSCopying-Protocol.h>
#import <WeatherFoundation/NSURLSessionTaskDelegate-Protocol.h>

@class NSString, NSURL, NSURLSession, NWPathEvaluator, WFSettingsManager;

@interface WFWeatherStoreServiceConfiguration : NSObject <NSURLSessionTaskDelegate, NSCopying>
{
    struct os_unfair_lock_s _serviceConnectivityEvaluationURLLock;
    struct os_unfair_lock_s _serviceConnectivityEvaluatorLock;
    NWPathEvaluator *_serviceConnectivityEvaluator;
    NSURL *_serviceConnectivityEvaluationURL;
    NSURLSession *_session;
    NSURL *_cacheURL;
    Class _cacheClass;
    WFSettingsManager *_settingsManager;
}

+ (id)generateUserAgent;
+ (id)defaultConfiguration;
+ (id)defaultConfigurationWithSourceBundleIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WFSettingsManager *settingsManager; // @synthesize settingsManager=_settingsManager;
@property(retain, nonatomic) Class cacheClass; // @synthesize cacheClass=_cacheClass;
@property(nonatomic) struct os_unfair_lock_s serviceConnectivityEvaluatorLock; // @synthesize serviceConnectivityEvaluatorLock=_serviceConnectivityEvaluatorLock;
@property(nonatomic) struct os_unfair_lock_s serviceConnectivityEvaluationURLLock; // @synthesize serviceConnectivityEvaluationURLLock=_serviceConnectivityEvaluationURLLock;
@property(copy, nonatomic) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) NWPathEvaluator *serviceConnectivityEvaluator; // @synthesize serviceConnectivityEvaluator=_serviceConnectivityEvaluator;
- (id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 units:(int)arg4 locale:(id)arg5 date:(id)arg6 apiVersion:(id)arg7 error:(id *)arg8;
- (id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 units:(int)arg4 locale:(id)arg5 date:(id)arg6 error:(id *)arg7;
- (id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 units:(int)arg3 date:(id)arg4 apiVersion:(id)arg5 error:(id *)arg6;
- (id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 apiVersion:(id)arg4 error:(id *)arg5;
- (id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 error:(id *)arg4;
@property(readonly, nonatomic) _Bool isValid;
- (_Bool)isServiceAvailableSync;
@property(readonly, nonatomic) _Bool isServiceAvailable;
@property(retain, nonatomic) NSURL *serviceConnectivityEvaluationURL; // @synthesize serviceConnectivityEvaluationURL=_serviceConnectivityEvaluationURL;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)apiConfigurationForAPIVersion:(id)arg1;
- (id)apiConfiguration;
@property(readonly, nonatomic) NSString *apiVersion;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)invalidate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
