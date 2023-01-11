//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/MTLJSONSerializing-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSString, NSURL;

@interface WFWunderlistFile : MTLModel <MTLJSONSerializing>
{
    long long _fileId;
    long long _taskId;
    long long _listId;
    long long _userId;
    NSURL *_url;
    NSString *_filename;
    NSNumber *_fileSize;
    NSDate *_localCreatedAt;
    NSDate *_createdAt;
    NSDate *_updatedAt;
    long long _revision;
}

+ (id)updatedAtJSONTransformer;
+ (id)createdAtJSONTransformer;
+ (id)localCreatedAtJSONTransformer;
+ (id)urlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) long long revision; // @synthesize revision=_revision;
@property(readonly, nonatomic) NSDate *updatedAt; // @synthesize updatedAt=_updatedAt;
@property(readonly, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, nonatomic) NSDate *localCreatedAt; // @synthesize localCreatedAt=_localCreatedAt;
@property(readonly, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) long long userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) long long listId; // @synthesize listId=_listId;
@property(readonly, nonatomic) long long taskId; // @synthesize taskId=_taskId;
@property(readonly, nonatomic) long long fileId; // @synthesize fileId=_fileId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
