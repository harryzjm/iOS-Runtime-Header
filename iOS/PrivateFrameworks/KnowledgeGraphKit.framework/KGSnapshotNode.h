//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <KnowledgeGraphKit/KGNode-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface KGSnapshotNode : NSObject <KGNode>
{
    float _weight;
    unsigned long long _identifier;
    NSArray *_labels;
    NSDictionary *_properties;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) float weight; // @synthesize weight=_weight;
@property(readonly, copy, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
