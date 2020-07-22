//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SAKnowledgeGraphTriple <SAAceSerializable>
{
}

+ (id)graphTripleWithDictionary:(id)arg1 context:(id)arg2;
+ (id)graphTriple;
@property(copy, nonatomic) NSString *subject;
@property(copy, nonatomic) NSString *storeName;
@property(copy, nonatomic) NSString *predicate;
@property(copy, nonatomic) NSString *object;
@property(nonatomic) float confidence;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
