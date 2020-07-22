//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMChatRegistry, INVocabulary;

@interface IMChatVocabularyUpdater : NSObject
{
    IMChatRegistry *_chatRegistry;
    INVocabulary *_vocabulary;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)syncAllGroupNames:(id)arg1;
- (void)dealloc;
- (id)initWithChatRegistry:(id)arg1 vocabulary:(id)arg2;
- (id)init;

@end

