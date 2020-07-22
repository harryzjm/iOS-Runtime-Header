//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

__attribute__((visibility("hidden")))
@interface TSDGroupSelection
{
    _Bool _hasSelectedInfosInNonGroupContainer;
}

+ (Class)archivedSelectionClass;
@property(nonatomic) _Bool hasSelectedInfosInNonGroupContainer; // @synthesize hasSelectedInfosInNonGroupContainer=_hasSelectedInfosInNonGroupContainer;
- (id)subclassDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) _Bool isCrossContainerSelection;
@property(readonly, nonatomic) NSSet *containerGroups;
- (id)initWithGroupInfo:(id)arg1;
- (id)initWithContainerGroups:(id)arg1 hasSelectedInfosInNonGroupContainer:(_Bool)arg2;

@end

