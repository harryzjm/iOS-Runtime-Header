//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPAsyncOperation.h"

@class MPModelPlaylistEntriesShareEligibilityRequest;

__attribute__((visibility("hidden")))
@interface MPModelPlaylistEntriesShareEligibilityRequestOperation : MPAsyncOperation
{
    MPModelPlaylistEntriesShareEligibilityRequest *_request;
    CDUnknownBlockType _responseHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPModelPlaylistEntriesShareEligibilityRequest *request; // @synthesize request=_request;
- (void)execute;

@end

