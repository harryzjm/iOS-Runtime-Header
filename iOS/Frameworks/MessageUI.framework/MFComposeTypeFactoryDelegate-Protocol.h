//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MessageUI/NSObject-Protocol.h>

@class EFFuture, MFComposeWebView, MFMailAccountProxy, MFMutableMessageHeaders, NSArray, NSString;
@protocol MFMailAccountProxyGenerator;

@protocol MFComposeTypeFactoryDelegate <NSObject>
- (EFFuture *)shouldCreateRichTextRepresentation;
- (NSArray *)attachments;
- (MFMailAccountProxy *)sendingAccountProxy;
- (NSString *)sendingEmailAddress;
- (void)setSendingEmailAddress:(NSString *)arg1;
- (MFMutableMessageHeaders *)savedHeaders;
- (void)setSavedHeaders:(MFMutableMessageHeaders *)arg1;
- (NSString *)subject;
- (void)setSubject:(NSString *)arg1;
- (NSArray *)bccRecipients;
- (void)setBccRecipients:(NSArray *)arg1;
- (NSArray *)ccRecipients;
- (void)setCcRecipients:(NSArray *)arg1;
- (NSArray *)toRecipients;
- (void)setToRecipients:(NSArray *)arg1;
- (MFComposeWebView *)composeWebView;
- (id <MFMailAccountProxyGenerator>)accountProxyGenerator;

@optional
- (void)setHideMyEmailAddressForMailToURLAddressString:(NSString *)arg1;
- (void)setIsQuickReply:(_Bool)arg1;
- (void)setSendingEmailAddressAsHME:(NSString *)arg1 isComposeTypeReply:(_Bool)arg2;
- (void)setOriginalMessageWasEncrypted:(_Bool)arg1;
- (unsigned long long)contentVariationIndex;
- (void)contentDidChange;
- (void)addSignature:(_Bool)arg1;
@end

