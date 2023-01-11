//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameplayKit/NSCopying-Protocol.h>
#import <GameplayKit/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface GKGraph : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray *_nodes;
    struct GKCGraph *_cGraph;
    NSMutableDictionary *__info;
}

+ (_Bool)supportsSecureCoding;
+ (id)graphWithNodes:(id)arg1;
+ (id)graph;
@property(retain, nonatomic) NSMutableDictionary *_info; // @synthesize _info=__info;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)findPathFromNode:(id)arg1 toNode:(id)arg2;
- (void)addNodes:(id)arg1;
- (void)removeNodes:(id)arg1;
- (void)connectNodeToLowestCostNode:(id)arg1 bidirectional:(_Bool)arg2;
- (id)initWithNodes:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)nodesMut;
@property(readonly, nonatomic) NSArray *nodes;
- (struct GKCGraph *)cGraph;
- (struct GKCGraph *)makeCGraph;

@end

