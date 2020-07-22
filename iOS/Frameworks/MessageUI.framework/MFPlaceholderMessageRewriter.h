//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MessageUI/MFComposeTypeFactoryDelegate-Protocol.h>

@class MFOutgoingMessageContent, NSMutableArray, NSString;
@protocol MFMessageRewriterPlaceholderResolver;

@interface MFPlaceholderMessageRewriter : NSObject <MFComposeTypeFactoryDelegate>
{
    NSMutableArray *_placeholders;
    MFOutgoingMessageContent *_originalMessageContent;
    MFOutgoingMessageContent *_rewrittenMessageContent;
    id <MFMessageRewriterPlaceholderResolver> _placeholderResolver;
}

+ (id)_deriveOutgoingMessageContentFromLibraryMessageContent:(id)arg1;
@property(nonatomic) id <MFMessageRewriterPlaceholderResolver> placeholderResolver; // @synthesize placeholderResolver=_placeholderResolver;
@property(readonly, nonatomic) MFOutgoingMessageContent *originalMessageContent; // @synthesize originalMessageContent=_originalMessageContent;
- (id)shouldCreateRichTextRepresentation;
- (id)attachments;
- (_Bool)hasAnyHiddenTrailingEmptyQuote;
- (id)sendingAccountProxy;
- (id)sendingEmailAddress;
- (void)setSendingEmailAddress:(id)arg1 addIfNotPresent:(_Bool)arg2;
- (id)savedHeaders;
- (void)setSavedHeaders:(id)arg1;
- (id)subject;
- (void)setSubject:(id)arg1;
- (id)bccRecipients;
- (void)setBccRecipients:(id)arg1;
- (id)ccRecipients;
- (void)setCcRecipients:(id)arg1;
- (id)toRecipients;
- (void)setToRecipients:(id)arg1;
- (id)bodyField;
- (id)accountProxyGenerator;
- (id)rewrittenMessageContent;
- (id)initWithOriginalMessageContent:(id)arg1 resolver:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

