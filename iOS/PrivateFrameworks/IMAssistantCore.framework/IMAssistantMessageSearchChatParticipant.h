//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IMAssistantMessageSearchChatParticipant : NSObject
{
    _Bool _isMe;
    NSString *_handle;
    NSArray *_contactIdentifiers;
}

@property(readonly, nonatomic) _Bool isMe; // @synthesize isMe=_isMe;
@property(readonly, copy, nonatomic) NSArray *contactIdentifiers; // @synthesize contactIdentifiers=_contactIdentifiers;
@property(readonly, copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
- (void).cxx_destruct;
- (_Bool)matchesPerson:(id)arg1;
- (id)initWithHandle:(id)arg1 contactIdentifiers:(id)arg2 isMe:(_Bool)arg3;

@end

