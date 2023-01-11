//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class REClassLoader;

@interface REDataSourceLoader : NSObject <NSCopying>
{
    REClassLoader *_loader;
}

+ (id)aggregateDataSourceLoaderWithDataSourceLoaders:(id)arg1;
+ (id)dataSourceLoaderWithDataSources:(id)arg1;
+ (id)dataSourceLoaderWithBlock:(CDUnknownBlockType)arg1;
+ (id)dataSourceLoaderWithDirectories:(id)arg1 dataSourceKey:(id)arg2;
+ (id)dataSourceLoaderWithDirectories:(id)arg1;
+ (id)dataSourceLoaderWithDirectory:(id)arg1;
+ (id)defaultDataSourceLoader;
+ (id)disabledDataSourceLoader;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateDataSourceObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateBundleConfigurations:(CDUnknownBlockType)arg1;
- (void)enumerateDataSourceClassesWithBlock:(CDUnknownBlockType)arg1;
- (void)prewarm;

@end
