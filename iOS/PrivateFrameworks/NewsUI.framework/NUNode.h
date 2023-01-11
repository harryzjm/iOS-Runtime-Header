//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/NUNode-Protocol.h>

@class NSMutableArray, NSString;
@protocol NUNode;

@interface NUNode : NSObject <NUNode>
{
    NSMutableArray *_subnodes;
    NSObject<NUNode> *_supernode;
    struct CGRect _frame;
    struct CGRect _bounds;
}

@property(nonatomic) __weak NSObject<NUNode> *supernode; // @synthesize supernode=_supernode;
@property(retain, nonatomic) NSMutableArray *subnodes; // @synthesize subnodes=_subnodes;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
- (void)resolveViewsInView:(id)arg1;
- (void)removeFromSupernode;
- (void)addSubnode:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

