//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, SSURLConnectionRequest;

@interface RadioSearchResultAccessedRequest
{
    SSURLConnectionRequest *_request;
    NSArray *_searchResults;
}

- (void).cxx_destruct;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancel;
- (id)initWithAccessedSearchResults:(id)arg1;
- (id)init;

@end
