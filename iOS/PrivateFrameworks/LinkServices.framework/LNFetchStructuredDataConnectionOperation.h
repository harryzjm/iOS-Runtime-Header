//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface LNFetchStructuredDataConnectionOperation
{
    long long _typeIdentifier;
    NSArray *_entityIdentifiers;
    NSDictionary *_entityIdentifiersToStructuredData;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSDictionary *entityIdentifiersToStructuredData; // @synthesize entityIdentifiersToStructuredData=_entityIdentifiersToStructuredData;
@property(readonly, nonatomic) NSArray *entityIdentifiers; // @synthesize entityIdentifiers=_entityIdentifiers;
@property(readonly, nonatomic) long long typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
- (void)finishWithError:(id)arg1;
- (void)start;
- (id)initWithConnectionInterface:(id)arg1 typeIdentifier:(long long)arg2 entityIdentifiers:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

