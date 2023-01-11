//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

__attribute__((visibility("hidden")))
@interface GEOPlaceDataRequestConfig
{
    double _timeout;
    unsigned long long _urlType;
    NSNumber *_requestPriority;
    unsigned long long _multipathServiceType;
}

- (void).cxx_destruct;
- (unsigned long long)multipathServiceType;
- (double)timeout;
- (CDStruct_d1a7ebee)dataRequestKindForRequest:(id)arg1 traits:(id)arg2;
- (id)serviceTypeNumber;
- (unsigned long long)urlType;
- (id)additionalHTTPHeaders;
- (id)initWithTimeout:(double)arg1 request:(id)arg2 traits:(id)arg3;

@end
