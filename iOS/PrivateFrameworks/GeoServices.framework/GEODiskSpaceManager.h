//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODiskSpaceProvider-Protocol.h>

@class NSMutableArray, NSString;

@interface GEODiskSpaceManager : NSObject <GEODiskSpaceProvider>
{
    NSString *_cacheDeleteID;
    NSMutableArray *_diskSpaceProviders;
    _Bool _freePurgableInProgress;
    double _lastSignificantUpdate;
    double _cachedPurgableTime[4];
    unsigned long long _cachedPurgableSpace[4];
}

+ (id)sharedManager;
@property(readonly, copy) NSString *cacheDeleteID; // @synthesize cacheDeleteID=_cacheDeleteID;
- (void).cxx_destruct;
- (unsigned long long)freePurgableDiskSpace:(unsigned long long)arg1 urgency:(int)arg2;
- (unsigned long long)purgableDiskSpaceForUrgency:(int)arg1;
- (void)reportSignificantPurgableDiskSpaceUpdate;
- (void)addDiskSpaceProvider:(id)arg1;
- (void)_registerCacheDeleteCallbacks;
- (id)_validVolume:(id)arg1;
- (id)initWithCacheDeleteID:(id)arg1;
- (_Bool)shouldIncreaseCacheSizeBy:(unsigned long long)arg1 urgency:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

