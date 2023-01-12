//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSApplication/TSKAccessControllerDelegate-Protocol.h>

@class NSDate, NSURL, SFUCryptoKey, TSKCommandExecutor, TSKDocumentRoot, TSKSharingState, TSUDocumentSerializationToken;
@protocol NSFilePresenter, TSKActivityStreamTransformationManagerConfig, TSKActivityStreamTransformationManagerOperationExecutor, TSKCollaborationCommandReceiver, TSKCollaborationSessionContext, TSKDocumentInfo, TSULogContext;

@protocol TSKDocumentRootDelegate <TSKAccessControllerDelegate>
@property(readonly, nonatomic) id <TSULogContext> logContext;
@property(readonly, nonatomic) NSURL *fileURL;

@optional
@property(readonly, nonatomic) NSDate *activityStreamInitialLastViewedDate;
@property(readonly, nonatomic) id <TSKActivityStreamTransformationManagerOperationExecutor> activityStreamTransformationManagerOperationExecutor;
@property(readonly, nonatomic) id <TSKActivityStreamTransformationManagerConfig> activityStreamTransformationManagerConfig;
@property(readonly, nonatomic) struct __CFRunLoop *primaryRunLoopForAccessControllerInitialization;
@property(readonly, nonatomic) _Bool shouldInitiallySuspendCollaborationSessionForOfflineCatchUp;
@property(readonly, nonatomic) id <TSKCollaborationSessionContext> collaborationSessionContext;
@property(readonly, nonatomic) id <TSKDocumentInfo> tskDocumentInfo;
@property(readonly) NSDate *openedDate;
@property(readonly, retain) SFUCryptoKey *encryptionKey;
@property(readonly, nonatomic) id <NSFilePresenter> cloudFilePresenter;
- (id <TSKCollaborationCommandReceiver>)commandReceiverWithExecutor:(TSKCommandExecutor *)arg1;
- (void)materializeDataFromCollaborationCacheAndClean:(_Bool)arg1;
- (void)documentRootDidRollbackBlockedCommands:(TSKDocumentRoot *)arg1;
- (void)sharingStateRefreshed:(TSKSharingState *)arg1 isUserInitiated:(_Bool)arg2 parentDocumentSerializationToken:(TSUDocumentSerializationToken *)arg3 completionBlock:(void (^)(void))arg4;
- (TSKSharingState *)sharingState;
- (unsigned long long)documentType;
@end

