//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WFLocation;

@interface WFAggregateForecastRequest
{
    WFLocation *_location;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) WFLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)cleanup;
- (void)handleCancellation;
- (void)handleResponse:(id)arg1;
- (id)initWithLocation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
