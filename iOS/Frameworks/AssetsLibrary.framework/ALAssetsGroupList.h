//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol PLAssetContainerList;

__attribute__((visibility("hidden")))
@interface ALAssetsGroupList
{
    id <PLAssetContainerList> _containerList;
}

@property(readonly, retain, nonatomic) id <PLAssetContainerList> containerList; // @synthesize containerList=_containerList;
- (id)valueForProperty:(id)arg1;
- (void)_enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithContainerList:(id)arg1 library:(id)arg2 type:(unsigned long long)arg3;

@end
