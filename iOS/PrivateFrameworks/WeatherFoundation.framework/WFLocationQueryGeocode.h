//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLGeocoder, MKLocalSearch, MKLocalSearchCompletion, NSString, WFResponse, WFTaskIdentifier;

__attribute__((visibility("hidden")))
@interface WFLocationQueryGeocode : NSObject
{
    _Bool _finished;
    WFTaskIdentifier *identifier;
    MKLocalSearchCompletion *_searchCompletion;
    NSString *_searchString;
    CDUnknownBlockType _resultHandler;
    WFResponse *_response;
    CLGeocoder *_reverseGeocoder;
    MKLocalSearch *_search;
    struct CLLocationCoordinate2D _searchCoordinate;
    struct CLLocationCoordinate2D _unshiftedCoordinate;
}

+ (id)queryWithSearchString:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)invalidateCaches;
+ (id)queryWithSearchCompletion:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (id)queryWithCoordinate:(struct CLLocationCoordinate2D)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (id)queryWithDictionaryRepresentation:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(nonatomic) struct CLLocationCoordinate2D unshiftedCoordinate; // @synthesize unshiftedCoordinate=_unshiftedCoordinate;
@property(nonatomic) struct CLLocationCoordinate2D searchCoordinate; // @synthesize searchCoordinate=_searchCoordinate;
@property(retain, nonatomic) MKLocalSearch *search; // @synthesize search=_search;
@property(retain, nonatomic) CLGeocoder *reverseGeocoder; // @synthesize reverseGeocoder=_reverseGeocoder;
@property(retain) WFResponse *response; // @synthesize response=_response;
@property(copy) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(readonly) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly) MKLocalSearchCompletion *searchCompletion; // @synthesize searchCompletion=_searchCompletion;
@property(retain) WFTaskIdentifier *identifier; // @synthesize identifier;
- (void)_handleErrorResponse:(id)arg1;
- (void)handleSearchResponseWithLocation:(id)arg1;
- (id)_reverseGeocoderLocation;
- (id)_mkLocalSearchRequest;
- (_Bool)isLocationValid:(id)arg1;
- (void)_startCLGeocoderReverseGeo;
- (void)_startMKLocalSearch;
- (void)cancel;
- (void)start;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)initWithSearchString:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)initWithSearchCompletion:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

