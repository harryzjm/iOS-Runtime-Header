//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSCH3DDataBuffer;

__attribute__((visibility("hidden")))
@interface TSCH3DResource : NSObject <NSCopying>
{
    int mCaching;
    TSCH3DDataBuffer *mCache;
    int mUpdate;
    _Bool mChanged;
    _Bool mCached;
    struct DataBufferInfo mDataBufferInfo;
    unsigned long long mUniqueIdentifier;
}

+ (id)resourceWithCaching:(int)arg1;
+ (id)resource;
+ (void)deallocateResourceUniqueIdentifier:(unsigned long long)arg1;
+ (unsigned long long)allocateResourceUniqueIdentifier;
@property(readonly, nonatomic) unsigned long long uniqueIdentifier; // @synthesize uniqueIdentifier=mUniqueIdentifier;
@property(nonatomic) int caching; // @synthesize caching=mCaching;
@property(nonatomic) int update; // @synthesize update=mUpdate;
- (id).cxx_construct;
@property(readonly, nonatomic) TSCH3DDataBuffer *buffer;
- (void)flushMemory;
- (void)setCache:(id)arg1;
- (_Bool)cacheNeedsUpdate;
@property(readonly, nonatomic) struct DataBufferInfo bufferInfo;
- (void)updateBufferInfoFromBuffer:(id)arg1;
@property(nonatomic) _Bool changed;
@property(readonly, nonatomic) _Bool isTexturable;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCaching:(int)arg1;

@end

