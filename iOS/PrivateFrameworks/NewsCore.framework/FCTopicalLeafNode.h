//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCTopicalNode;

@interface FCTopicalLeafNode : NSObject
{
    FCTopicalNode *_node;
    double _score;
}

@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) FCTopicalNode *node; // @synthesize node=_node;
- (void).cxx_destruct;
- (id)initWithNode:(id)arg1 score:(double)arg2;

@end

