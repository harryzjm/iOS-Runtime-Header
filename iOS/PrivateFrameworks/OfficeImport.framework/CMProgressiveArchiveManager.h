//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSMutableDictionary, NSMutableString;

@interface CMProgressiveArchiveManager
{
    const void *mClient;
    CDStruct_ba543347 *mCallBacks;
    NSMutableDictionary *mDataCache;
    _Bool mMainDataInited;
    NSDate *mStartDate;
    NSDate *mLastCommitDate;
    NSMutableString *mHtmlLogString;
}

- (void).cxx_destruct;
- (void)pushCssToPath:(id)arg1;
- (_Bool)isCancelled;
- (void)closeResourceAtPath:(id)arg1;
- (void)commitDataAtPath:(id)arg1;
- (void)pushText:(id)arg1 toPath:(id)arg2;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (id)copyResourceWithName:(id)arg1 type:(int)arg2;
- (_Bool)isProgressive;
- (id)initWithClient:(const void *)arg1 andCallBacks:(CDStruct_ba543347 *)arg2;

@end

