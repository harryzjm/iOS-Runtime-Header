//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INPerson, INSpeakableString, NSArray, NSString;

@protocol INSendMessageIntentExport <NSObject, JSExport>
@property(copy, nonatomic) INPerson *sender;
@property(copy, nonatomic) NSString *serviceName;
@property(copy, nonatomic) NSString *conversationIdentifier;
@property(copy, nonatomic) INSpeakableString *speakableGroupName;
@property(copy, nonatomic) NSString *content;
@property(copy, nonatomic) NSArray *recipients;
- (id)init;
@end

