//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface CNUIGroupContext : NSObject
{
    NSDictionary *_addedGroupsByContainerDict;
    NSArray *_removedGroups;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *removedGroups; // @synthesize removedGroups=_removedGroups;
@property(readonly, nonatomic) NSDictionary *addedGroupsByContainerDict; // @synthesize addedGroupsByContainerDict=_addedGroupsByContainerDict;
- (id)initWithAddedGroupsByContainerDict:(id)arg1 removedGroups:(id)arg2;

@end

