//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CLLocation, GEOMapServiceTraits, GEOSearchCategory, NSArray, NSString, NSTimer;
@protocol GEOMapServiceCompletionTicket, MKLocalSearchCompleterDelegate, MKLocationManagerOperation;

@interface MKLocalSearchCompleter : NSObject
{
    NSString *_queryFragment;
    CDStruct_b7cb895d _region;
    GEOSearchCategory *_categoryFilter;
    id <MKLocalSearchCompleterDelegate> _delegate;
    id _context;
    NSString *_identifier;
    long long _filterType;
    long long _listType;
    double _timeSinceLastInBoundingRegion;
    CLLocation *_deviceLocation;
    unsigned long long _mapType;
    double _lastRequestTime;
    _Bool _dirty;
    NSArray *_results;
    NSTimer *_timer;
    id <GEOMapServiceCompletionTicket> _ticket;
    int _source;
    id <MKLocationManagerOperation> _singleLocationUpdate;
    GEOMapServiceTraits *_traits;
}

@property(retain, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
@property(retain, nonatomic) CLLocation *deviceLocation; // @synthesize deviceLocation=_deviceLocation;
@property(nonatomic) double timeSinceLastInBoundingRegion; // @synthesize timeSinceLastInBoundingRegion=_timeSinceLastInBoundingRegion;
@property(nonatomic) long long listType; // @synthesize listType=_listType;
@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id context; // @synthesize context=_context;
@property(nonatomic) __weak id <MKLocalSearchCompleterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GEOSearchCategory *categoryFilter; // @synthesize categoryFilter=_categoryFilter;
@property(nonatomic) CDStruct_b7cb895d region; // @synthesize region=_region;
@property(copy, nonatomic) NSString *queryFragment; // @synthesize queryFragment=_queryFragment;
- (void).cxx_destruct;
@property(nonatomic) long long entriesType;
@property(copy, nonatomic) NSString *fragment;
@property(nonatomic) CDStruct_b7cb895d boundingRegion;
@property(readonly, nonatomic) NSArray *results;
- (void)retry;
- (void)cancel;
- (void)_cancelTimer;
- (_Bool)resultsAreCurrent;
@property(readonly, nonatomic, getter=isSearching) _Bool searching;
- (int)source;
- (void)setSource:(int)arg1;
- (void)_scheduleRequest;
- (void)_markDirty;
- (void)_schedulePendingRequest;
- (void)_fireRequest;
- (void)_handleError:(id)arg1 forTicket:(id)arg2;
- (void)_handleCompletion:(id)arg1 forTicket:(id)arg2;
- (void)dealloc;
- (id)init;

@end

