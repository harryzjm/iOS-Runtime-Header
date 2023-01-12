//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ICURLResponseHandler.h"

__attribute__((visibility("hidden")))
@interface ICMusicKitURLResponseHandler : ICURLResponseHandler
{
}

- (void)_updateRequest:(id)arg1 forProcessedResponseOfStoreURLRequest:(id)arg2;
- (void)_invalidateUserTokenForInitialResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_invalidateDeveloperTokenForInitialResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)processCompletedResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)processInitialResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end

