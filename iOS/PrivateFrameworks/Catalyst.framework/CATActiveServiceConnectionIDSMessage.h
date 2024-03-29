//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSUUID;
@protocol CATActiveIDSServiceConnectionMessageContent;

__attribute__((visibility("hidden")))
@interface CATActiveServiceConnectionIDSMessage : NSObject
{
    NSUUID *_connectionIdentifier;
    NSNumber *_receivedSequenceNumber;
    id <CATActiveIDSServiceConnectionMessageContent> _content;
}

+ (id)instanceWithDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <CATActiveIDSServiceConnectionMessageContent> content; // @synthesize content=_content;
@property(readonly, nonatomic) NSNumber *receivedSequenceNumber; // @synthesize receivedSequenceNumber=_receivedSequenceNumber;
@property(readonly, nonatomic) NSUUID *connectionIdentifier; // @synthesize connectionIdentifier=_connectionIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly, nonatomic) long long messageType;
- (id)initWithConnectionIdentifier:(id)arg1 receivedSequenceNumber:(id)arg2 content:(id)arg3;

@end

