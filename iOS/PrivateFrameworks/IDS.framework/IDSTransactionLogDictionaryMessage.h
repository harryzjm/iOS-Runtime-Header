//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface IDSTransactionLogDictionaryMessage
{
    NSDictionary *_dictionaryValue;
}

@property(readonly, nonatomic) NSDictionary *dictionaryValue; // @synthesize dictionaryValue=_dictionaryValue;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithDictionary:(id)arg1 accountUniqueID:(id)arg2 fromID:(id)arg3 loginID:(id)arg4 serviceName:(id)arg5;

@end

