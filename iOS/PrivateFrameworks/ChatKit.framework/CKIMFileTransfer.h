//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChatKit/CKFileTransfer-Protocol.h>

@class IMMessage, NSDictionary, NSError, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface CKIMFileTransfer : NSObject <CKFileTransfer>
{
    int _mediaObjectCount;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    _Bool _isSticker;
    _Bool _fileDataReady;
    _Bool _fileURLFinalized;
    _Bool _restoring;
    _Bool _hideAttachment;
    _Bool _isDirectory;
    NSString *_guid;
    NSURL *_fileURL;
    NSString *_filename;
    NSError *_error;
    NSDictionary *_transcoderUserInfo;
    NSDictionary *_stickerUserInfo;
    unsigned long long _currentBytes;
    unsigned long long _totalBytes;
    long long _transferState;
    IMMessage *_imMessage;
    NSURL *_linkFileURL;
    NSDictionary *_attributionInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *attributionInfo; // @synthesize attributionInfo=_attributionInfo;
@property(copy, nonatomic) NSURL *linkFileURL; // @synthesize linkFileURL=_linkFileURL;
@property(readonly, nonatomic) _Bool isDirectory; // @synthesize isDirectory=_isDirectory;
@property(nonatomic) long long transferState; // @synthesize transferState=_transferState;
@property(readonly, copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void)attachmentRestored:(id)arg1;
- (void)fetchHighQualityFile:(CDUnknownBlockType)arg1;
- (void)transferUpdated:(id)arg1;
- (void)updateTransfer;
- (id)linkFileURLWithFilename:(id)arg1;
- (id)syncController;
- (id)fileManager;
- (id)notificationCenter;
- (id)imFileTransferCenter;
- (void)mediaObjectRemoved;
- (void)mediaObjectAdded;
@property(readonly, nonatomic, getter=isDownloading) _Bool downloading;
@property(readonly, nonatomic, getter=isDownloadable) _Bool downloadable;
@property(readonly, nonatomic, getter=isRestoring) _Bool restoring; // @synthesize restoring=_restoring;
@property(readonly, nonatomic, getter=isFileURLFinalized) _Bool fileURLFinalized; // @synthesize fileURLFinalized=_fileURLFinalized;
@property(readonly, nonatomic, getter=isFileDataReady) _Bool fileDataReady; // @synthesize fileDataReady=_fileDataReady;
@property(readonly, nonatomic) _Bool hideAttachment; // @synthesize hideAttachment=_hideAttachment;
@property(readonly, nonatomic) _Bool isSticker; // @synthesize isSticker=_isSticker;
@property(readonly, nonatomic) unsigned long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property(readonly, nonatomic) unsigned long long currentBytes; // @synthesize currentBytes=_currentBytes;
@property(readonly, copy, nonatomic) NSDictionary *stickerUserInfo; // @synthesize stickerUserInfo=_stickerUserInfo;
@property(readonly, copy, nonatomic) NSDictionary *transcoderUserInfo; // @synthesize transcoderUserInfo=_transcoderUserInfo;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) IMMessage *IMMessage; // @synthesize IMMessage=_imMessage;
- (id)initWithStickerFileURL:(id)arg1 transferUserInfo:(id)arg2 attributionInfo:(id)arg3;
- (id)initWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3 hideAttachment:(_Bool)arg4;
- (id)initWithTransferGUID:(id)arg1 imMessage:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
