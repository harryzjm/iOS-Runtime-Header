//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface NSObject (TSHOperationDelegate)
- (double)operation:(id)arg1 connection:(id)arg2 restartDelayForError:(id)arg3;
- (_Bool)operation:(id)arg1 connection:(id)arg2 shouldRestartForError:(id)arg3;
- (id)operation:(id)arg1 connection:(id)arg2 willCacheResponse:(id)arg3;
- (void)operation:(id)arg1 connection:(id)arg2 didFailWithError:(id)arg3;
- (void)operationDidFinish:(id)arg1;
- (void)operation:(id)arg1 connectionDidFinishLoading:(id)arg2;
- (void)operation:(id)arg1 connection:(id)arg2 didSendBodyData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)operation:(id)arg1 connection:(id)arg2 didReceiveData:(id)arg3;
- (void)operation:(id)arg1 connection:(id)arg2 didReceiveResponse:(id)arg3;
- (void)operation:(id)arg1 willStartRequest:(id)arg2;
- (void)operation:(id)arg1 didStartRequest:(id)arg2 withConnection:(id)arg3;
- (void)operation:(id)arg1 connection:(id)arg2 didCancelAuthenticationChallenge:(id)arg3;
@end
