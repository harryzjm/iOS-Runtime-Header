//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKRemoteItemForSending, NSArray, NSData, NSDictionary, NSString, NSURL, TUConversationActivity;

@protocol CKSMSComposeViewServiceProtocol <NSObject>
- (void)setGameCenterPickedHandles:(NSArray *)arg1 playerNames:(NSArray *)arg2;
- (void)setGameCenterModeWithPickerBlock:(void (^)(void))arg1;
- (void)forceMMS;
- (void)forceCancelComposition;
- (void)insertGroupActivity:(TUConversationActivity *)arg1;
- (void)setTextEntryContentsVisible:(_Bool)arg1;
- (void)showInsertedItemInEntryView;
- (void)insertFilename:(NSString *)arg1 MIMEType:(NSString *)arg2 exportedFilename:(NSString *)arg3 options:(NSDictionary *)arg4;
- (void)insertRemoteItemForSendingAndCalculateEntryViewFrame:(CKRemoteItemForSending *)arg1 completion:(void (^)(NSValue *))arg2;
- (void)insertRemoteItemForSending:(CKRemoteItemForSending *)arg1;
- (void)insertData:(NSData *)arg1 MIMEType:(NSString *)arg2 exportedFilename:(NSString *)arg3;
- (void)insertAttachmentWithURL:(NSURL *)arg1 andDescription:(NSString *)arg2;
- (void)setShareSheetSessionID:(NSString *)arg1;
- (void)setContentText:(NSArray *)arg1;
- (void)setCloudPhotoIDs:(NSArray *)arg1;
- (void)setPhotoIDs:(NSArray *)arg1;
- (void)setContentURLs:(NSArray *)arg1;
- (void)setUTIs:(NSArray *)arg1;
- (void)setUICustomizationData:(NSData *)arg1;
- (void)setText:(NSString *)arg1 subject:(NSString *)arg2 addresses:(NSArray *)arg3 chatGUID:(NSString *)arg4 groupName:(NSString *)arg5;
- (void)setText:(NSString *)arg1 subject:(NSString *)arg2 addresses:(NSArray *)arg3 shouldHideClearPluginButton:(_Bool)arg4 chatGUID:(NSString *)arg5;
- (void)setText:(NSString *)arg1 subject:(NSString *)arg2 addresses:(NSArray *)arg3 shouldHideClearPluginButton:(_Bool)arg4;
- (void)setText:(NSString *)arg1 subject:(NSString *)arg2 addresses:(NSArray *)arg3;
- (void)disableCameraAttachments;
- (void)setNavBarTitle:(NSString *)arg1;
- (void)setShouldDisableEntryField:(_Bool)arg1;
- (void)setShouldIgnoreEmailsWhenSending:(_Bool)arg1;
- (void)setCanEditRecipients:(_Bool)arg1;
- (void)setPendingAddresses:(NSArray *)arg1;
@end

