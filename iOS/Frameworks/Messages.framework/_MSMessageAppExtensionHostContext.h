//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <Messages/_MSMessageComposeHostImplProtocol-Protocol.h>

@class NSString;
@protocol _MSMessageComposeHostProtocol;

@interface _MSMessageAppExtensionHostContext : NSExtensionContext <_MSMessageComposeHostImplProtocol>
{
    id <_MSMessageComposeHostProtocol> _delegate;
}

+ (id)_extensionContextHostProtocolAllowedClassesForItems;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
@property(nonatomic) __weak id <_MSMessageComposeHostProtocol> delegate; // @synthesize delegate=_delegate;
- (void)_removeAssetArchiveWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_stageAssetArchive:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_contentDidLoad;
- (void)_requestResize;
- (void)_openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)_updateSnapshotForNextLaunch:(id)arg1;
- (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_dismissAndPresentPhotosApp;
- (void)_dismiss;
- (void)_requestPresentationStyle:(unsigned long long)arg1;
- (void)_dragMediaItemCanceled;
- (void)_dragMediaItemMoved:(id)arg1 frameInRemoteView:(struct CGRect)arg2 rotation:(double)arg3 scale:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_startDragMediaItem:(id)arg1 frameInRemoteView:(struct CGRect)arg2 fence:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_stageRichLink:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_stageMediaItem:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_stageAppItem:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
