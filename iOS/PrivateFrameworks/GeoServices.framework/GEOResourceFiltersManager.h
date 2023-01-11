//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOActiveResourceFilters, GEOResourceManifestConfiguration, NSSet;
@protocol GEOResourceFiltersManagerDelegate;

__attribute__((visibility("hidden")))
@interface GEOResourceFiltersManager : NSObject
{
    GEOResourceManifestConfiguration *_configuration;
    GEOActiveResourceFilters *_activeFilters;
    struct os_unfair_lock_s _lock;
    id <GEOResourceFiltersManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GEOResourceFiltersManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deactivateScenario:(int)arg1;
- (void)activateScenario:(int)arg1;
- (void)deactivateScale:(int)arg1;
- (void)activateScale:(int)arg1;
- (void)_deactivateFilters:(CDUnknownBlockType)arg1;
- (void)_activateFilters:(CDUnknownBlockType)arg1 setValueBlock:(CDUnknownBlockType)arg2;
- (void)_writeToDisk;
@property(readonly, nonatomic) NSSet *activeScenarios;
@property(readonly, nonatomic) NSSet *activeScales;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

@end
