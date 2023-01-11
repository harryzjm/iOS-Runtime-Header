//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SSMetricsPageEvent
{
}

- (id)description;
@property(nonatomic, setter=setXPSamplingPercentageCachedResponses:) double xpSamplingPercentageCachedResponses;
@property(nonatomic, setter=setXPSamplingPercentageUsers:) double xpSamplingPercentageUsers;
@property(nonatomic, setter=setXPSamplingForced:) _Bool xpSamplingForced;
@property(nonatomic, setter=setXPSessionDuration:) double xpSessionDuration;
@property(nonatomic, getter=isUbered) _Bool ubered;
@property(retain, nonatomic) NSString *serverTiming;
@property(retain, nonatomic) NSString *serverApplicationInstance;
@property(nonatomic) double secureConnectionStartTime;
@property(retain, nonatomic) NSString *searchTerm;
@property(nonatomic) double responseStartTime;
@property(nonatomic) double responseEndTime;
@property(nonatomic) double requestStartTime;
@property(nonatomic) double requestEndTime;
@property(retain, nonatomic) NSString *referringURL;
@property(retain, nonatomic) NSString *referringAppName;
@property(nonatomic) double redirectStartTime;
@property(nonatomic) double redirectEndTime;
@property(nonatomic) unsigned long long redirectCount;
@property(nonatomic) double pageRenderTime;
- (void)setPageHistoryDescriptionWithIdentifiers:(id)arg1;
@property(retain, nonatomic) NSString *pageHistoryDescription;
@property(retain, nonatomic) NSString *navigationType;
@property(nonatomic) double fetchStartTime;
@property(nonatomic) double domainLookupStartTime;
@property(nonatomic) double domainLookupEndTime;
@property(nonatomic) unsigned long long connectionStopNStatTXBytes;
@property(nonatomic) unsigned long long connectionStopNStatRXBytes;
@property(nonatomic) unsigned long long connectionStartNStatTXBytes;
@property(nonatomic) unsigned long long connectionStartNStatRXBytes;
@property(nonatomic) double connectionStartTime;
@property(nonatomic) _Bool connectionReused;
@property(nonatomic) double connectionEndTime;
@property(retain, nonatomic) NSString *clientCorrelationKey;
@property(nonatomic, getter=isCachedResponse) _Bool cachedResponse;
- (id)init;

@end
