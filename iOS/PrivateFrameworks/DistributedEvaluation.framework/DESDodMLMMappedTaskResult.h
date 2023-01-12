//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DESMMappedFile, DESSandBoxManager;

@interface DESDodMLMMappedTaskResult
{
    DESSandBoxManager *_sandboxManager;
    DESMMappedFile *_mmappedFile;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithJSONResult:(id)arg1 sandboxManager:(id)arg2 mmappedFile:(id)arg3 duration:(double)arg4;
- (id)initWithJSONResult:(id)arg1 binaryResult:(id)arg2 deferred:(_Bool)arg3 deferralURL:(id)arg4 duration:(double)arg5;

@end
