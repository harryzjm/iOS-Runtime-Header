//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOETATrafficUpdateRequest, GEOETATrafficUpdateResponse, NSError;

__attribute__((visibility("hidden")))
@interface MNSessionUpdateResponseInfo : NSObject
{
    GEOETATrafficUpdateRequest *_request;
    GEOETATrafficUpdateResponse *_response;
    NSError *_error;
    double _responseTime;
}

- (void).cxx_destruct;
@property(nonatomic) double responseTime; // @synthesize responseTime=_responseTime;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) GEOETATrafficUpdateResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) GEOETATrafficUpdateRequest *request; // @synthesize request=_request;

@end
