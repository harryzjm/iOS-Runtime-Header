//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/CKReplyContext-Protocol.h>

@interface CKReplyContextAttachmentMessagePartChatItem <CKReplyContext>
{
}

- (_Bool)replyIsFromMe;
- (_Bool)isReplyContextPreview;
- (struct CKBalloonDescriptor_t)balloonDescriptor;
- (BOOL)balloonStyle;
- (BOOL)color;
- (Class)balloonViewClass;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (_Bool)isEditable;
- (id)loadTranscriptDrawerText;

@end
