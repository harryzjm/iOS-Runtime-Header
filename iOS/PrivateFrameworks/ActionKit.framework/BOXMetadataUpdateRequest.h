//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface BOXMetadataUpdateRequest
{
    NSArray *_notMatchingEtags;
    NSString *_scope;
    NSString *_templateName;
    NSArray *_updateTasks;
    NSString *_fileID;
}

@property(retain, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(retain, nonatomic) NSArray *updateTasks; // @synthesize updateTasks=_updateTasks;
@property(retain, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
@property(retain, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(retain, nonatomic) NSArray *notMatchingEtags; // @synthesize notMatchingEtags=_notMatchingEtags;
- (void).cxx_destruct;
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)createOperation;
- (id)initWithFileID:(id)arg1 scope:(id)arg2 template:(id)arg3 updateTasks:(id)arg4;
- (id)initWithFileID:(id)arg1 template:(id)arg2 updateTasks:(id)arg3;

@end
