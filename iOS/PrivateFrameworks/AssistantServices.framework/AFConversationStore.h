//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AFConversationStore : NSObject
{
    NSMutableDictionary *_conversationsByIdentifier;
}

@property(readonly, nonatomic, getter=_conversationsByIdentifier) NSMutableDictionary *conversationsByIdentifier; // @synthesize conversationsByIdentifier=_conversationsByIdentifier;
- (void).cxx_destruct;
- (_Bool)removeConversationWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)getConversation:(id *)arg1 withIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)saveConversation:(id)arg1 identifier:(id)arg2 error:(id *)arg3;
- (void)_registerConversation:(id)arg1 withIdentifier:(id)arg2;
- (id)init;

@end

