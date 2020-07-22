//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iAdDeveloper/HTSHTTPServerDelegate-Protocol.h>

@class HTSHTTPServer, NSArray, NSDictionary, NSMutableDictionary, NSString;
@protocol ADEmbeddedAdServerDelegate;

@interface ADEmbeddedAdServer : NSObject <HTSHTTPServerDelegate>
{
    HTSHTTPServer *_server;
    NSMutableDictionary *_authTokens;
    struct __FSEventStream *_stream;
    _Bool _defaultsToNoQualifiedAds;
    _Bool _alwaysRegenerateWebArchives;
    id <ADEmbeddedAdServerDelegate> _delegate;
    NSString *_publicURLRoot;
    NSDictionary *_defaultAdData;
    NSString *_adPath;
    NSArray *_adManifests;
}

+ (id)manifestForAdAtURL:(id)arg1;
+ (id)accessibilityDescriptionForAccessibilityKey:(id)arg1;
+ (int)creativeTypeForPlistType:(id)arg1;
+ (id)creativesForAdBundleAtURL:(id)arg1 matchingRequest:(id)arg2;
+ (_Bool)creativeTypeMatches:(id)arg1 type:(int)arg2 creativeType:(id)arg3;
+ (_Bool)adBundleAtURL:(id)arg1 matchesRequest:(id)arg2;
+ (id)supportedDevicesForAdProperties:(id)arg1;
+ (id)iAdDeviceModelForDeviceModel:(id)arg1;
@property(nonatomic) _Bool alwaysRegenerateWebArchives; // @synthesize alwaysRegenerateWebArchives=_alwaysRegenerateWebArchives;
@property(retain, nonatomic) NSArray *adManifests; // @synthesize adManifests=_adManifests;
@property(copy, nonatomic) NSString *adPath; // @synthesize adPath=_adPath;
@property(retain, nonatomic) NSDictionary *defaultAdData; // @synthesize defaultAdData=_defaultAdData;
@property(nonatomic) _Bool defaultsToNoQualifiedAds; // @synthesize defaultsToNoQualifiedAds=_defaultsToNoQualifiedAds;
@property(copy, nonatomic) NSString *publicURLRoot; // @synthesize publicURLRoot=_publicURLRoot;
@property(nonatomic) id <ADEmbeddedAdServerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)adDataForAdBundleAtPath:(id)arg1 creative:(id)arg2 requesterId:(id)arg3 allowWebArchive:(_Bool)arg4;
- (id)_adDataForPath:(id)arg1 creative:(id)arg2 requester:(id)arg3 error:(id *)arg4;
- (_Bool)_tryAddingAdTagContentStringForCreative:(id)arg1 toAdReponse:(id)arg2 withAdPath:(id)arg3;
- (id)_actionDictionaryFromProperties:(id)arg1 path:(id)arg2 error:(id *)arg3;
- (id)_integerColorFromStringColor:(id)arg1;
- (id)_webArchiveFilenameForDirectory:(id)arg1 withBaseURL:(id)arg2;
- (id)webArchiveForDirectory:(id)arg1 withBaseURL:(id)arg2;
- (id)_webResourcesInDirectory:(id)arg1 baseURL:(id)arg2;
- (id)_webResourceForPath:(id)arg1 url:(id)arg2;
- (id)_handleManifestRequest:(id)arg1 message:(id)arg2;
- (id)_handleLogStationClientEventRequest:(id)arg1 message:(id)arg2;
- (id)_handleLogAggregateMetricsRequest:(id)arg1 message:(id)arg2;
- (id)_handleLogTileImpressionEventRequest:(id)arg1 message:(id)arg2;
- (id)_handleListeningPresenceEventsRequest:(id)arg1 message:(id)arg2;
- (id)_handleMescalSignSAPSetupRequest:(id)arg1 message:(id)arg2;
- (id)_handleMescalSignSAPSetupCertificateRequest:(id)arg1 message:(id)arg2;
- (id)_handleOptOutRequest:(id)arg1 message:(id)arg2;
- (id)_handleRewardsCodeResultRequest:(id)arg1 message:(id)arg2;
- (id)_handleRewardRequest:(id)arg1 message:(id)arg2;
- (id)_handleHeartbeatTokenRequest:(id)arg1 message:(id)arg2;
- (id)_handleSegmentUpdateRequest:(id)arg1 message:(id)arg2;
- (id)_handleLogAdContentErrorRequest:(id)arg1 message:(id)arg2;
- (id)_handleLogAdEventRequest:(id)arg1 message:(id)arg2;
- (id)_handleAdSpaceStatusEventRequest:(id)arg1 message:(id)arg2;
- (id)_handleServerErrorRequest:(id)arg1 message:(id)arg2;
- (id)_handleLogSysEventRequest:(id)arg1 message:(id)arg2;
- (id)_handleLogImpressionRequest:(id)arg1 message:(id)arg2;
- (id)_handleGenericAnalyticsRequest:(id)arg1 message:(id)arg2 type:(int)arg3;
- (id)_handleConfigurationRequest:(id)arg1 message:(id)arg2;
- (id)_handleAdSlotRequest:(id)arg1 message:(id)arg2;
- (id)_handleBatchRequest:(id)arg1 message:(id)arg2;
- (id)_defaultResponseForBatchRequest:(id)arg1;
- (id)_handlePostRequest:(id)arg1;
- (id)_handleGenericPostRequest:(id)arg1;
- (id)httpServer:(id)arg1 proposedResponse:(id)arg2;
- (id)httpServer:(id)arg1 unhandledRequest:(id)arg2;
- (void)httpServer:(id)arg1 dataForRequest:(id)arg2 resolvedPath:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)httpServer:(id)arg1 rewritePath:(id)arg2;
- (_Bool)httpServer:(id)arg1 shouldAllowRequest:(id)arg2 withAuthorization:(id)arg3;
- (void)httpServer:(id)arg1 logMessage:(id)arg2;
- (void)httpServer:(id)arg1 connection:(id)arg2 blockedSandboxViolation:(id)arg3;
- (void)httpServer:(id)arg1 connection:(id)arg2 droppedResponseToRequestBeforeClosing:(id)arg3;
- (void)httpServer:(id)arg1 connection:(id)arg2 wroteBytes:(unsigned long long)arg3 andCompletedResponseToRequest:(id)arg4;
- (void)httpServer:(id)arg1 connection:(id)arg2 wroteBytes:(unsigned long long)arg3 forResponseToRequest:(id)arg4 remaining:(unsigned long long)arg5;
- (void)httpServer:(id)arg1 connection:(id)arg2 enqueuedResponseToRequest:(id)arg3 statusCode:(int)arg4 length:(unsigned long long)arg5;
- (void)httpServer:(id)arg1 closedConnection:(id)arg2 withError:(id)arg3;
- (void)httpServer:(id)arg1 closedConnection:(id)arg2;
- (void)httpServer:(id)arg1 receivedConnection:(id)arg2;
- (void)httpServerListenSocketFailed:(id)arg1;
- (id)_mimeTypeForExtension:(id)arg1;
@property(nonatomic) _Bool pipeliningEnabled;
@property(readonly, nonatomic) unsigned long long totalBytesWritten;
@property(nonatomic) double bandwidthStddev;
@property(nonatomic) double kbps;
@property(nonatomic) double latencyStddev;
@property(nonatomic) double latency;
- (void)resetNetworkSetup;
@property(nonatomic) int cacheMaxAge;
@property(nonatomic) _Bool digestAuthenticationEnabled;
@property(readonly, nonatomic) NSString *urlString;
@property(readonly, nonatomic) unsigned short port;
- (id)init;
- (id)initWithPort:(unsigned short)arg1 adPath:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

