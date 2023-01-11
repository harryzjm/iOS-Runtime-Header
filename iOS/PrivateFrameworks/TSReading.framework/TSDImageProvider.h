//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSPData, TSUFlushingManager;

@interface TSDImageProvider : NSObject
{
    int mLoadState;
    TSPData *mImageData;
    TSUFlushingManager *mFlushingManager;
    int mInterest;
    struct os_unfair_lock_s mInterestLock;
    struct atomic<int> mRetainCount;
    struct atomic<int> mOwnerCount;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (void)ownerAccess;
- (void)removeOwner;
- (void)addOwner;
- (_Bool)hasFlushableContent;
- (void)setFlushingManager:(id)arg1;
- (void)flush;
- (void)flushIfInterestLessThan:(int)arg1;
- (void)removeInterest;
- (void)addInterest;
- (int)interest;
- (void)drawImageInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (_Bool)isError;
- (_Bool)isValid;
@property(readonly, nonatomic) unsigned long long imageGamut;
- (struct CGSize)dpiAdjustedNaturalSize;
- (struct CGSize)naturalSize;
- (id)imageData;
- (void)dealloc;
- (void)i_commonInit;
- (id)initWithImageData:(id)arg1;

@end

