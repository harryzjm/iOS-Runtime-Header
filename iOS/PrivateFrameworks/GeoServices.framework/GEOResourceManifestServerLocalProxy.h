//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODataStateCapturing-Protocol.h>
#import <GeoServices/GEOResourceFiltersManagerDelegate-Protocol.h>
#import <GeoServices/GEOResourceManifestServerProxy-Protocol.h>
#import <GeoServices/NSURLSessionDataDelegate-Protocol.h>

@class GEOActiveTileGroup, GEOResourceFiltersManager, GEOResourceManifestConfiguration, GEOResourceManifestDownload, NSArray, NSError, NSLock, NSMutableArray, NSMutableData, NSProgress, NSString, NSTimer, NSURLSession, NSURLSessionTask, NSURLSessionTaskMetrics, _GEOResourceManifestServerLocalProxyMigrationState;
@protocol GEOResourceManifestServerProxyDelegate, NSObject;

__attribute__((visibility("hidden")))
@interface GEOResourceManifestServerLocalProxy : NSObject <NSURLSessionDataDelegate, GEOResourceFiltersManagerDelegate, GEODataStateCapturing, GEOResourceManifestServerProxy>
{
    id <GEOResourceManifestServerProxyDelegate> _delegate;
    NSURLSession *_session;
    NSURLSessionTask *_task;
    NSMutableData *_responseData;
    NSString *_responseETag;
    int _httpResponseStatusCode;
    GEOResourceManifestConfiguration *_configuration;
    _Bool _wantsManifestUpdateOnReachabilityChange;
    NSTimer *_manifestUpdateTimer;
    _Bool _wantsTileGroupUpdateOnReachabilityChange;
    NSTimer *_tileGroupUpdateTimer;
    GEOResourceManifestDownload *_resourceManifest;
    GEOActiveTileGroup *_activeTileGroup;
    id <NSObject> _newActiveTileGroupTransaction;
    _Bool _started;
    unsigned long long _manifestRetryCount;
    double _lastManifestRetryTimestamp;
    NSURLSessionTaskMetrics *_taskMetrics;
    unsigned long long _tileGroupRetryCount;
    double _lastTileGroupRetryTimestamp;
    NSString *_authToken;
    NSLock *_authTokenLock;
    NSError *_lastResourceManifestLoadError;
    NSMutableArray *_manifestUpdateCompletionHandlers;
    long long _currentManifestUpdateType;
    double _lastManifestRequestStartTime;
    GEOResourceFiltersManager *_filtersManager;
    NSArray *_tileGroupMigrators;
    unsigned long long _stateCaptureHandle;
    _GEOResourceManifestServerLocalProxyMigrationState *_tileGroupMigrationState;
    NSProgress *_updateProgress;
    NSProgress *_currentUpdateProgress;
}

@property(nonatomic) __weak id <GEOResourceManifestServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_notifyManifestUpdateCompletionHandlers:(id)arg1;
- (id)captureStateDataWithHints:(struct os_state_hints_s *)arg1;
- (void)filtersManagerDidChangeActiveFilters:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setManifestToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateTimerFired:(id)arg1;
- (void)_scheduleUpdateTimerWithTimeInterval:(double)arg1;
- (void)deactivateResourceScenario:(int)arg1;
- (void)activateResourceScenario:(int)arg1;
- (void)deactivateResourceScale:(int)arg1;
- (void)activateResourceScale:(int)arg1;
- (void)getResourceManifestWithHandler:(CDUnknownBlockType)arg1;
- (id)updateProgress;
- (void)cancelCurrentManifestUpdate;
- (void)forceUpdate:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateIfNecessary:(CDUnknownBlockType)arg1;
- (void)_updateManifest;
- (void)_updateManifest:(CDUnknownBlockType)arg1;
- (_Bool)_updateManifestIfNecessary:(CDUnknownBlockType)arg1;
- (id)_manifestURL;
- (void)_reachabilityChanged:(id)arg1;
- (void)_networkDefaultsDidChange:(id)arg1;
- (void)_countryProvidersDidChange:(id)arg1;
- (_Bool)_writeManifestToDisk:(id)arg1 error:(id *)arg2;
- (_Bool)_writeActiveTileGroupToDisk:(id)arg1 error:(id *)arg2;
- (void)_activeTileGroupOverridesChanged:(id)arg1;
- (oneway void)resetActiveTileGroup;
- (oneway void)setActiveTileGroupIdentifier:(id)arg1;
- (void)_cleanupSession;
- (void)_cancelSession;
- (void)_cancelMigrationTasks;
- (void)_startOpportunisticMigrationToTileGroup:(id)arg1 inResourceManifest:(id)arg2 activeScales:(id)arg3 activeScenarios:(id)arg4;
- (void)_forceChangeActiveTileGroup:(id)arg1 flushTileCache:(_Bool)arg2 ignoreIdentifier:(_Bool)arg3;
- (void)performOpportunisticResourceLoading;
- (void)_tileGroupTimerFired:(id)arg1;
- (void)_scheduleTileGroupUpdateTimerWithTimeInterval:(double)arg1;
- (void)_considerChangingActiveTileGroup;
- (id)_idealTileGroupToUse;
- (void)_changeActiveTileGroup:(id)arg1 activeScales:(id)arg2 activeScenarios:(id)arg3 migrationTasks:(id)arg4 flushTileCache:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
@property(retain, nonatomic) GEOActiveTileGroup *activeTileGroup;
- (void)_loadFromDisk;
- (void)_startServer;
- (id)configuration;
- (id)authToken;
- (void)closeConnection;
- (void)openConnection;
- (void)dealloc;
- (void)createMigratorsWithAdditionalMigrationTaskClasses:(id)arg1;
- (id)initWithDelegate:(id)arg1 configuration:(id)arg2 additionalMigrationTaskClasses:(id)arg3;
- (id)serverOperationQueue;
- (id)serverQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

