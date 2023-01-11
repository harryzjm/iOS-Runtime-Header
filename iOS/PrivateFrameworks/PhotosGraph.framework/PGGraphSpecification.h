//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <KnowledgeGraphKit/MAGraphSpecification.h>

@interface PGGraphSpecification : MAGraphSpecification
{
}

- (void)enumerateEdgeClassesUsingBlock:(CDUnknownBlockType)arg1;
- (Class)edgeClassWithLabel:(id)arg1 domain:(unsigned short)arg2;
- (id)edgeClassByDomain;
- (id)edgeClassByDomainAndLabel;
- (void)enumerateNodeClassesUsingBlock:(CDUnknownBlockType)arg1;
- (Class)nodeClassWithLabel:(id)arg1 domain:(unsigned short)arg2;
- (id)nodeClassByDomain;
- (id)nodeClassByDomainAndLabel;
- (id)init;

@end
