//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKConversation, NSString;

@protocol CKConversationListCell <NSObject>
+ (double)cellHeight;
+ (NSString *)identifierForConversation:(CKConversation *)arg1;
- (void)updateContentsForConversation:(CKConversation *)arg1 fastPreview:(_Bool)arg2;
- (void)updateContentsForConversation:(CKConversation *)arg1;
@end

