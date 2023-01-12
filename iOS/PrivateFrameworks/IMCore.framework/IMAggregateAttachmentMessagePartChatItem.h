//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface IMAggregateAttachmentMessagePartChatItem
{
    NSArray *_transferGUIDs;
    NSArray *_aggregateAttachmentParts;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *aggregateAttachmentParts; // @synthesize aggregateAttachmentParts=_aggregateAttachmentParts;
@property(readonly, copy, nonatomic) NSArray *transferGUIDs; // @synthesize transferGUIDs=_transferGUIDs;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange)arg4 transferGUIDs:(id)arg5 chatContext:(id)arg6 visibleAssociatedMessageChatItems:(id)arg7;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange)arg4 transferGUIDs:(id)arg5 chatContext:(id)arg6;
- (_Bool)isAttachmentContiguousWithChatItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)replyContextPreviewChatItemForReply:(id)arg1 chatContext:(id)arg2;
- (id)description;

@end
