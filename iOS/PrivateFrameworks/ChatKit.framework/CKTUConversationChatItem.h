//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

@interface CKTUConversationChatItem
{
}

@property(readonly, nonatomic) __weak NSUUID *tuConversationUUID;
@property(readonly, nonatomic) BOOL color;
- (id)time;
- (void)configureBalloonView:(id)arg1;
- (_Bool)isFromMe;
- (_Bool)shouldCacheSize;
- (Class)balloonViewClass;

@end

