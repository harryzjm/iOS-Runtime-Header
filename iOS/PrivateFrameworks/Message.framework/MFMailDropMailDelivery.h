//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MFMailDropMetadata, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface MFMailDropMailDelivery
{
    NSArray *_attachments;
    MFMailDropMetadata *_imageArchiveMetadata;
    long long _mailDropState;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)_mailDropZone;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) long long mailDropState; // @synthesize mailDropState=_mailDropState;
@property(retain, nonatomic) MFMailDropMetadata *imageArchiveMetadata; // @synthesize imageArchiveMetadata=_imageArchiveMetadata;
@property(retain, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
- (void)_saveRecordZoneID:(id)arg1 InDatabase:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_recordZoneIDInDatabase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_uploadAttachmentsViaCloudKit:(id)arg1 zone:(id)arg2 records:(id)arg3 zippedPhotos:(id)arg4 attachmentRecords:(id)arg5 images:(id)arg6;
- (id)publishRecord:(id)arg1 database:(id)arg2 attachmentRecords:(id)arg3 images:(id)arg4 allowsCellularAccess:(_Bool)arg5;
- (long long)_processAttachments;
- (id)ckDatabase;
- (id)deliverSynchronouslyWithCompletion:(CDUnknownBlockType)arg1;
- (id)_attachmentManager;
- (void)dealloc;
- (id)init;
- (_Bool)updateMessageWithAttachmentsSynchronously;
- (id)scaledImages:(id)arg1;

@end

