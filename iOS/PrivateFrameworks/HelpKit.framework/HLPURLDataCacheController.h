//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface HLPURLDataCacheController : NSObject
{
    _Bool _loaded;
    unsigned long long _maxDataCacheSize;
    unsigned long long _cacheSize;
    NSString *_identifier;
    NSString *_cacheDirectory;
    NSMutableDictionary *_dataCacheMap;
    long long _URLSessionDataType;
    NSString *_locale;
    NSMutableArray *_dataCacheArray;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *dataCacheArray; // @synthesize dataCacheArray=_dataCacheArray;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
- (void).cxx_destruct;
- (id)cacheFileURLForPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)saveTemporaryFileToCache:(id)arg1 data:(id)arg2 lastModified:(id)arg3;
- (id)newDataCache;
- (void)removeDataCache:(id)arg1 updateCache:(_Bool)arg2;
- (void)removeDataCache:(id)arg1;
- (void)removeAllDataCache;
- (void)moveCacheToEnd:(id)arg1;
- (void)addDataCache:(id)arg1;
- (void)updateCacheDelay;
- (void)updateCache;
- (id)cacheFileURLForIdentifier:(id)arg1;
- (id)cacheFileURLForDataCache:(id)arg1;
- (_Bool)cacheValidForPath:(id)arg1;
- (void)createCacheDirectory;
- (id)dataCacheForPath:(id)arg1;
- (id)initWithIdentifier:(id)arg1 directoryName:(id)arg2 maxCacheSize:(unsigned long long)arg3 URLSessionDataType:(long long)arg4;
- (void)unload;
- (void)load;
- (void)dealloc;

@end

