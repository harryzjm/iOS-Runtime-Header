//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDDiscoverUserIdentitiesURLRequest
{
    _Bool _wantsProtectionInfo;
    CDUnknownBlockType _progressBlock;
    NSArray *_infosToDiscover;
    NSMutableDictionary *_submittedInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *submittedInfos; // @synthesize submittedInfos=_submittedInfos;
@property(retain, nonatomic) NSArray *infosToDiscover; // @synthesize infosToDiscover=_infosToDiscover;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) _Bool wantsProtectionInfo; // @synthesize wantsProtectionInfo=_wantsProtectionInfo;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (long long)databaseScope;
- (id)initWithOperation:(id)arg1 lookupInfos:(id)arg2;

@end
