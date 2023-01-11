//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServiceRequestConfiguring-Protocol.h>

@class GEODirectionsRequest, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface GEODirectionsRequestConfig <GEOServiceRequestConfiguring>
{
    NSNumber *_requestPriority;
    GEODirectionsRequest *_request;
}

- (void).cxx_destruct;
- (id)additionalStatesForNetworkEvent;
- (unsigned long long)multipathServiceType;
- (CDStruct_d1a7ebee)dataRequestKindForRequest:(id)arg1 traits:(id)arg2;
- (id)serviceTypeNumber;
- (id)additionalHTTPHeaders;
- (id)additionalURLQueryItems;
- (unsigned long long)urlType;
- (id)initWithRequest:(id)arg1 requestPriority:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
