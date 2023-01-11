//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol REDonatedActionIdentifierProviding;

@interface _REActionKey : NSObject
{
    unsigned long long _hash;
    NSString *_identifier;
    id <REDonatedActionIdentifierProviding> _actionType;
    unsigned long long _relevanceProvidersHash;
}

@property(readonly, nonatomic) unsigned long long relevanceProvidersHash; // @synthesize relevanceProvidersHash=_relevanceProvidersHash;
@property(readonly, nonatomic) id <REDonatedActionIdentifierProviding> actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 actionType:(id)arg2 relevanceProvidersHash:(unsigned long long)arg3;

@end
