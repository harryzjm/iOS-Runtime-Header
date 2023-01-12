//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Catalyst/CATActiveIDSServiceConnectionMessageContent-Protocol.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CATActiveIDSServiceConnectionContentRequestMissingData : NSObject <CATActiveIDSServiceConnectionMessageContent>
{
    unsigned long long _expectedSequenceNumber;
}

+ (id)instanceWithDictionary:(id)arg1;
@property(readonly, nonatomic) unsigned long long expectedSequenceNumber; // @synthesize expectedSequenceNumber=_expectedSequenceNumber;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly, nonatomic) long long contentType;
- (id)initWithExpectedSequenceNumber:(unsigned long long)arg1;

@end
