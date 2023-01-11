//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSPFieldTreeNodeWithChildren
{
    struct map<int, TSPFieldTreeNode *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, TSPFieldTreeNode *>>> _children;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1 message:(struct Message *)arg2;
- (_Bool)addChildNode:(id)arg1 forFieldNumber:(int)arg2;
- (id)childNodeForFieldNumber:(int)arg1;

@end

