//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPFetcher, LPFetcherResponse;

__attribute__((visibility("hidden")))
@interface LPFetcherGroupTask : NSObject
{
    _Bool _hasStarted;
    LPFetcher *_fetcher;
    LPFetcherResponse *_response;
}

@property(nonatomic) _Bool hasStarted; // @synthesize hasStarted=_hasStarted;
@property(retain, nonatomic) LPFetcherResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) LPFetcher *fetcher; // @synthesize fetcher=_fetcher;
- (void).cxx_destruct;

@end
