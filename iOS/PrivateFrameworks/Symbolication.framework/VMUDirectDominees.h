//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class VMUDominatorGraph;

__attribute__((visibility("hidden")))
@interface VMUDirectDominees : NSEnumerator
{
    VMUDominatorGraph *_dg;
    unsigned int _node;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithDominatorGraph:(id)arg1 rootNode:(unsigned int)arg2;

@end
