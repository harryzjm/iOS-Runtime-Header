//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CRCHNetworkCursor : NSObject
{
    struct vector<unsigned long, std::__1::allocator<unsigned long>> _edgeIndexes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)edgeIndexAtPosition:(unsigned long long)arg1;
- (unsigned long long)edgeIndexCount;
- (void)addEdgeIndex:(unsigned long long)arg1;

@end
