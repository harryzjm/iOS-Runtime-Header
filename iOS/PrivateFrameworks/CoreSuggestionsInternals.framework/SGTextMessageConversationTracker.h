//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SGConversationTracker;

@interface SGTextMessageConversationTracker : NSObject
{
    SGConversationTracker *_conversationTracker;
}

+ (id)getMergedPrompt:(id)arg1 withParams:(id)arg2;
+ (id)instance;
- (void).cxx_destruct;
- (void)clear;
- (id)addTextMessageItem:(id)arg1;
- (id)conversationForIdentifier:(id)arg1;
- (id)init;

@end
