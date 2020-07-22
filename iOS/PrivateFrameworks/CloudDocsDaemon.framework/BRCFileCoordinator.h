//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileCoordinator.h>

@class BRCAccountSession, NSObject, NSURL;
@protocol OS_dispatch_source;

@interface BRCFileCoordinator : NSFileCoordinator
{
    BRCAccountSession *_session;
    unsigned long long _startStamp;
    NSURL *_url1;
    NSURL *_url2;
    NSObject<OS_dispatch_source> *_timer;
    CDUnknownBlockType _doneHandler;
    _Bool _cancelled;
    _Bool _isUpdateForReconnecting;
    _Bool _forRead;
}

+ (void)itemAtPath:(id)arg1 logicalFilename:(id)arg2 didMoveToPath:(id)arg3 logicalFilename:(id)arg4 hasContentUpdate:(_Bool)arg5;
+ (void)itemAtPath:(id)arg1 origLogicalName:(id)arg2 didBounceToNewLogicalName:(id)arg3;
+ (void)itemDidDisappearAtPath:(id)arg1 logicalFilename:(id)arg2;
+ (void)itemDidAppearAtPath:(id)arg1 logicalFilename:(id)arg2;
+ (void)itemDidChangeAtPath:(id)arg1 logicalFilename:(id)arg2;
@property(readonly, nonatomic) _Bool forRead; // @synthesize forRead=_forRead;
@property(nonatomic) _Bool isUpdateForReconnecting; // @synthesize isUpdateForReconnecting=_isUpdateForReconnecting;
- (void).cxx_destruct;
- (void)scheduleRenameOfItemAtURL:(id)arg1 toItemAtURL:(id)arg2 contentUpdate:(_Bool)arg3 queue:(id)arg4 taskTracker:(id)arg5 accessor:(CDUnknownBlockType)arg6;
- (void)scheduleUpdateOfItemAtURL:(id)arg1 queue:(id)arg2 taskTracker:(id)arg3 accessor:(CDUnknownBlockType)arg4;
- (void)scheduleDeleteOfItemAtURL:(id)arg1 queue:(id)arg2 taskTracker:(id)arg3 accessor:(CDUnknownBlockType)arg4;
- (void)scheduleReadOfItemAtURL:(id)arg1 queue:(id)arg2 taskTracker:(id)arg3 accessor:(CDUnknownBlockType)arg4;
- (void)_didObtainCoordination:(id)arg1 context:(id)arg2 url1:(id)arg3 url2:(id)arg4 handler:(CDUnknownBlockType)arg5 fcHandler:(CDUnknownBlockType)arg6 error:(id)arg7;
- (void)_willRequestCoordinationWithContext:(id)arg1 url1:(id)arg2 url2:(id)arg3;
- (void)cancelAfterDelay:(double)arg1;
- (void)cancel;
- (id)initWithSession:(id)arg1 forRead:(_Bool)arg2 doneHandler:(CDUnknownBlockType)arg3;

@end

