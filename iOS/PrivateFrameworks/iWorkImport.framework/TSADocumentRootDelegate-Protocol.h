//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/TSKDocumentRootDelegate-Protocol.h>

@class NSString, TSACachedDocumentInfo, TSACollaborationErrorAction, TSADocumentRoot, TSKMailboxDocStatusMessage;

@protocol TSADocumentRootDelegate <TSKDocumentRootDelegate>
@property(readonly, nonatomic) NSString *name;

@optional
@property(readonly) TSACollaborationErrorAction *collaborationDisallowedErrorAction;
@property(readonly, nonatomic) TSACachedDocumentInfo *cachedDocumentInfo;
@property(readonly, nonatomic) NSString *documentCachePath;
@property(readonly, nonatomic) NSString *defaultDraftName;
- (_Bool)hasPersistenceWarningsOfKind:(long long)arg1;
- (void)showCollaborationErrorAction:(TSACollaborationErrorAction *)arg1 documentRoot:(TSADocumentRoot *)arg2;
- (void)documentRoot:(TSADocumentRoot *)arg1 didReceiveDocumentStatusNotification:(TSKMailboxDocStatusMessage *)arg2;
- (void)willRemoveICloudTeardownObserver:(id)arg1;
- (void)didAddObserverForICloudTeardown:(id)arg1;
- (void)continueActivityUsingBlock:(void (^)(void))arg1;
- (void)invalidateRestorableState;
@end

