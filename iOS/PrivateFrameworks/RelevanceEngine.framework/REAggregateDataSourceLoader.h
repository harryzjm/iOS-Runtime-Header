//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOrderedSet;

@interface REAggregateDataSourceLoader
{
    NSOrderedSet *_loaders;
}

@property(copy, nonatomic) NSOrderedSet *loaders; // @synthesize loaders=_loaders;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_loadBundleConfigurationsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_loadClassesUsingBlock:(CDUnknownBlockType)arg1;

@end
