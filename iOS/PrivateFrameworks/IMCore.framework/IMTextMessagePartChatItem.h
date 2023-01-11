//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString;

@interface IMTextMessagePartChatItem
{
    NSAttributedString *_subject;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSAttributedString *subject; // @synthesize subject=_subject;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange)arg4 subject:(id)arg5 visibleAssociatedMessageChatItems:(id)arg6;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange)arg4 subject:(id)arg5;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange)arg4 subject:(id)arg5 shouldDisplayLink:(_Bool)arg6;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)replyContextPreviewChatItemForReply:(id)arg1;
- (void)setShouldDisplayRichLink:(_Bool)arg1;
- (_Bool)shouldDisplayRichLink;

@end
