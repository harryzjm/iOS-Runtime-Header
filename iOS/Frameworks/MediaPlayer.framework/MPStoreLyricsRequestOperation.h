//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPStoreLyricsRequest, NSOperationQueue;

@interface MPStoreLyricsRequestOperation
{
    NSOperationQueue *_operationQueue;
    MPStoreLyricsRequest *_request;
    CDUnknownBlockType _responseHandler;
}

+ (id)_lyricsURLForURLBagDictionary:(id)arg1;
+ (_Bool)supportsLyricsForURLBagDictionary:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPStoreLyricsRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)_enqueueOperationWithURL:(id)arg1 bagDictionary:(id)arg2 allowingAuthentication:(_Bool)arg3;
- (void)execute;

@end
