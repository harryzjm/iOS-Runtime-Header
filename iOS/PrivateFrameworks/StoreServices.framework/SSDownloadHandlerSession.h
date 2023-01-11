//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface SSDownloadHandlerSession
{
    NSString *_downloadPhase;
    NSNumber *_duetTimeoutInterval;
}

@property(readonly) NSNumber *duetTimeoutInterval; // @synthesize duetTimeoutInterval=_duetTimeoutInterval;
- (void)_setBool:(_Bool)arg1 forSessionProperty:(const char *)arg2;
- (void)_finishWithType:(int)arg1 error:(id)arg2;
- (void)setStatusDescription:(id)arg1;
- (void)setPercentComplete:(float)arg1;
@property _Bool needsPowerAssertion;
@property _Bool canBePaused;
@property _Bool blocksOtherDownloads;
- (void)releaseSessionControl;
- (void)finishSessionWithSuccess:(_Bool)arg1 error:(id)arg2;
@property(readonly) NSString *downloadPhase;
- (void)disavowSessionWithError:(id)arg1;
- (void)dealloc;
- (id)_initWithMessage:(id)arg1 controlConnection:(id)arg2;

@end
