//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelPlaylistEntriesShareEligibilityRequest;

@interface MPModelPlaylistEntriesShareEligibilityRequestOperation
{
    MPModelPlaylistEntriesShareEligibilityRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPModelPlaylistEntriesShareEligibilityRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)execute;

@end

