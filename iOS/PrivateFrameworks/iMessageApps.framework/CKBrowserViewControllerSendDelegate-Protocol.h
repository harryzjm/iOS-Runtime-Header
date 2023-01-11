//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iMessageApps/NSObject-Protocol.h>

@class CKBrowserDragControllerTarget, CKBrowserItemPayload, IMSticker, NSString, NSURL;
@protocol CKBrowserDragControllerTranscriptDelegate;

@protocol CKBrowserViewControllerSendDelegate <NSObject>
- (void)commitSticker:(IMSticker *)arg1 withDragTarget:(CKBrowserDragControllerTarget *)arg2;
- (void)commitSticker:(IMSticker *)arg1;
- (id <CKBrowserDragControllerTranscriptDelegate>)dragControllerTranscriptDelegate;
- (void)dismissToKeyboard:(_Bool)arg1;
- (void)requestPresentationStyleExpanded:(_Bool)arg1;
- (void)dismiss;
- (void)dismissAndReloadInputViews:(_Bool)arg1;
- (void)openURL:(NSURL *)arg1 applicationIdentifier:(NSString *)arg2 pluginID:(NSString *)arg3 completionHandler:(void (^)(_Bool))arg4;
- (void)openURL:(NSURL *)arg1 pluginID:(NSString *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)setLocalUserIsTyping:(_Bool)arg1;
- (void)startEditingPayload:(CKBrowserItemPayload *)arg1 dismiss:(_Bool)arg2;
- (void)startEditingPayload:(CKBrowserItemPayload *)arg1;
- (void)commitPayload:(CKBrowserItemPayload *)arg1;

@optional
- (void)setEntryViewHidden:(_Bool)arg1;
- (void)eagerUploadCancelIdentifier:(NSString *)arg1;
- (void)eagerUploadPayload:(CKBrowserItemPayload *)arg1 identifier:(NSString *)arg2 replace:(_Bool)arg3;
- (_Bool)handwritingIsDisplayed;
- (void)requestPresentationStyleFullScreenModalForPlugin:(NSString *)arg1;
- (void)requestPresentationStyleExpanded:(_Bool)arg1 forPlugin:(NSString *)arg2;
- (void)startEditingPayload:(CKBrowserItemPayload *)arg1 dismiss:(_Bool)arg2 forPlugin:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)startEditingPayload:(CKBrowserItemPayload *)arg1 dismiss:(_Bool)arg2 forPlugin:(NSString *)arg3;
- (void)dismissAndPresentPhotosApp;
- (void)dismissAndReloadInputViews:(_Bool)arg1 forPlugin:(NSString *)arg2;
- (void)commitSticker:(IMSticker *)arg1 forPlugin:(NSString *)arg2;
- (void)commitSticker:(IMSticker *)arg1 atScreenCoordinate:(struct CGPoint)arg2 scale:(double)arg3 rotation:(double)arg4;
- (_Bool)commitPayload:(CKBrowserItemPayload *)arg1 forPlugin:(NSString *)arg2 allowAllCommits:(_Bool)arg3 error:(id *)arg4;
@end

