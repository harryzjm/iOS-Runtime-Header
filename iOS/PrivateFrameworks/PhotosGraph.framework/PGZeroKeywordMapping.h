//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, PGGraphMeaningNode;

@interface PGZeroKeywordMapping : NSObject
{
    PGGraphMeaningNode *_displayNode;
    NSArray *_mappedMeaningNodes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *mappedMeaningNodes; // @synthesize mappedMeaningNodes=_mappedMeaningNodes;
@property(readonly, nonatomic) PGGraphMeaningNode *displayNode; // @synthesize displayNode=_displayNode;
- (id)initWithDisplayNode:(id)arg1 mappedMeaningNodes:(id)arg2;

@end
