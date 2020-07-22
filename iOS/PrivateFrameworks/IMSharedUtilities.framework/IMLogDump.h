//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface IMLogDump : NSObject
{
    NSObject<OS_dispatch_queue> *_logDumpQueue;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *logDumpQueue; // @synthesize logDumpQueue=_logDumpQueue;
- (void)dumpLogsToFolderAtPath:(id)arg1 withFileName:(id)arg2 lastHours:(int)arg3 predicate:(id)arg4 shouldCompress:(_Bool)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (_Bool)_checkArgumentValidity:(id)arg1 withFileName:(id)arg2 withError:(id *)arg3;
- (void)_compressAndDeleteFileAtPath:(id)arg1 destinationFilePath:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)_lastHoursToAppend:(int)arg1;
- (id)_predicateToAppend:(id)arg1;
- (void)dealloc;
- (id)init;

@end
