//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/NSSecureCoding-Protocol.h>
#import <TSReading/TSDHint-Protocol.h>

@class NSNumber, NSString, TSTLayout;

@interface TSTLayoutHint : NSObject <TSDHint, NSSecureCoding>
{
    _Bool mIsValid;
    _Bool mHorizontal;
    CDStruct_5f1f7aa9 mCellRange;
    CDStruct_0441cfb5 mCacheHintID;
    NSNumber *mPartitioningPass;
    unsigned int mPartitionPosition;
    struct CGSize mMaximumSize;
    struct CGSize mEffectiveSize;
    TSTLayout *mLayout;
}

+ (_Bool)supportsSecureCoding;
+ (Class)archivedHintClass;
@property(retain, nonatomic) NSNumber *partitioningPass; // @synthesize partitioningPass=mPartitioningPass;
@property(nonatomic) _Bool horizontal; // @synthesize horizontal=mHorizontal;
@property(nonatomic) TSTLayout *layout; // @synthesize layout=mLayout;
@property(nonatomic) struct CGSize effectiveSize; // @synthesize effectiveSize=mEffectiveSize;
@property(nonatomic) struct CGSize maximumSize; // @synthesize maximumSize=mMaximumSize;
@property(nonatomic) unsigned int partitionPosition; // @synthesize partitionPosition=mPartitionPosition;
@property(nonatomic) CDStruct_0441cfb5 cacheHintID; // @synthesize cacheHintID=mCacheHintID;
@property(nonatomic) CDStruct_5f1f7aa9 cellRange; // @synthesize cellRange=mCellRange;
@property(nonatomic) _Bool isValid; // @synthesize isValid=mIsValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)invalidate;
- (_Bool)isFirstHint;
- (id)lastChildHint;
- (id)firstChildHint;
- (void)offsetByDelta:(int)arg1;
- (_Bool)overlapsWithSelection:(id)arg1;
- (id)copyForArchiving;
- (oneway void)release;
- (void)dealloc;
- (id)init;
- (id)initWithRange:(CDStruct_5f1f7aa9)arg1 hintId:(CDStruct_0441cfb5)arg2 partitionPosition:(unsigned int)arg3 maximumSize:(struct CGSize)arg4 effectiveSize:(struct CGSize)arg5 layout:(id)arg6 validity:(_Bool)arg7 horizontal:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
