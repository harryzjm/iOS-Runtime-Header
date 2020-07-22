//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MessageUI/NSObject-Protocol.h>

@class MFFuture, MFMailAccountProxy, MFMailAccountProxyGenerator, MFMutableMessageHeaders, NSArray, NSString, UIView;
@protocol MFComposeBodyField;

@protocol MFComposeTypeFactoryDelegate <NSObject>
- (MFFuture *)shouldCreateRichTextRepresentation;
- (NSArray *)attachments;
- (_Bool)hasAnyHiddenTrailingEmptyQuote;
- (MFMailAccountProxy *)sendingAccountProxy;
- (NSString *)sendingEmailAddress;
- (void)setSendingEmailAddress:(NSString *)arg1 addIfNotPresent:(_Bool)arg2;
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
- (UIView<MFComposeBodyField> *)bodyField;
- (MFMailAccountProxyGenerator *)accountProxyGenerator;

@optional
- (void)contentDidChange;
- (void)addSignature:(_Bool)arg1;
@end

