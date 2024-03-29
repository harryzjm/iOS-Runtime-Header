//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface LPFetcherJSONResponse
{
    id _rootObject;
}

+ (id)responseForFetcher:(id)arg1 withData:(id)arg2 MIMEType:(id)arg3;
+ (_Bool)isValidMIMEType:(id)arg1;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) id rootObject; // @synthesize rootObject=_rootObject;
- (id)initWithRootObject:(id)arg1 fetcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

