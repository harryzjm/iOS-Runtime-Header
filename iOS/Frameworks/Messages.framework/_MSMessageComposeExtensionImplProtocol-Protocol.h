//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Messages/_MSMessageComposeExtensionProtocol-Protocol.h>

@class BKSAnimationFenceHandle, MSConversation, MSMessage, MSRichLink, NSArray, NSData, NSString, UIViewController, _MSMessageMediaPayload;
@protocol _MSMessageComposeExtensionImplProtocol, _MSMessageComposeHostImplProtocol;

@protocol _MSMessageComposeExtensionImplProtocol <_MSMessageComposeExtensionProtocol>
@property(retain, nonatomic) id <_MSMessageComposeHostImplProtocol> hostContext;
@property(retain, nonatomic) id <_MSMessageComposeExtensionImplProtocol> containingContext;
@property(readonly, nonatomic) __weak UIViewController *stickerViewController;
@property(readonly, nonatomic) __weak UIViewController *viewController;
@property(nonatomic) unsigned long long presentationContext;
@property(nonatomic) unsigned long long presentationStyle;
@property(readonly, nonatomic) MSConversation *activeConversation;
- (void)presentAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2 buttonTitle:(NSString *)arg3 destructiveButtonTitle:(NSString *)arg4 completion:(void (^)(_Bool))arg5;
- (void)presentAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2 buttonTitle:(NSString *)arg3 completion:(void (^)(void))arg4;
- (void)contentDidLoad;
- (void)requestResize;
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)dismissAndPresentPhotosApp;
- (void)dismiss;
- (void)requestHostSceneIdentifierWithCompletion:(void (^)(NSString *))arg1;
- (void)requestPresentationStyleExpanded:(_Bool)arg1;
- (void)requestPresentationStyle:(unsigned long long)arg1;
- (void)dragMediaItemCanceled;
- (void)dragMediaItemMoved:(_MSMessageMediaPayload *)arg1 frameInRemoteView:(struct CGRect)arg2 rotation:(double)arg3 scale:(double)arg4 completionHandler:(void (^)(_Bool, NSError *))arg5;
- (void)startDragMediaItem:(_MSMessageMediaPayload *)arg1 frameInRemoteView:(struct CGRect)arg2 fence:(BKSAnimationFenceHandle *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)removeAssetArchiveWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)stageAssetArchive:(NSData *)arg1 skipShelf:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)stageRichLink:(MSRichLink *)arg1 skipShelf:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)stageMediaItem:(_MSMessageMediaPayload *)arg1 skipShelf:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)stageAppItem:(MSMessage *)arg1 skipShelf:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;

@optional
- (void)presentAlertSheetWith:(NSArray *)arg1 styles:(NSArray *)arg2 completion:(void (^)(int))arg3;
@end

