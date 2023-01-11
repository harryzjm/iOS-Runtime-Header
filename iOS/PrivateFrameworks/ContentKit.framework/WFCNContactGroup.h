//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNGroup, NSArray;

@interface WFCNContactGroup
{
    CNGroup *_group;
    NSArray *_cachedMembers;
}

+ (id)contactGroupWithCNGroup:(id)arg1;
+ (id)allContactGroups;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *cachedMembers; // @synthesize cachedMembers=_cachedMembers;
@property(readonly, nonatomic) CNGroup *group; // @synthesize group=_group;
- (_Bool)containsContact:(id)arg1;
@property(readonly, nonatomic) NSArray *contacts;
- (id)name;
- (id)initWithCNGroup:(id)arg1;

@end
