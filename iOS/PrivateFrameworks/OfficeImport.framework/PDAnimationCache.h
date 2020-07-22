//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString, PDAnimateMotionBehavior, PDAnimationTarget, PDBuild;

__attribute__((visibility("hidden")))
@interface PDAnimationCache : NSObject
{
    int mNodeType;
    int mPresetId;
    int mPresetSubType;
    int mPresetClass;
    PDAnimationTarget *mTarget;
    _Bool mHasDelay;
    double mDelay;
    _Bool mHasDuration;
    double mDuration;
    _Bool mHasDirection;
    double mDirection;
    _Bool mHasPartCount;
    int mPartCount;
    PDAnimateMotionBehavior *mMotionPath;
    _Bool mHasValue;
    double mValue;
    PDBuild *mBuild;
    int mIterateType;
    _Bool mIsHead;
    int mLevel;
    NSString *mGroupId;
}

+ (id)createAnimationInfoDataForCacheItem:(id)arg1 order:(unsigned int)arg2;
+ (void)loadAnimationCache:(id)arg1 pdAnimation:(id)arg2 state:(id)arg3;
+ (void)mapAnimationInfo:(id)arg1 cacheData:(id)arg2 state:(id)arg3;
+ (void)mapCommonData:(id)arg1 cacheData:(id)arg2 state:(id)arg3;
@property(retain, nonatomic) PDBuild *build; // @synthesize build=mBuild;
@property(nonatomic) int level; // @synthesize level=mLevel;
@property(nonatomic) _Bool isHead; // @synthesize isHead=mIsHead;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=mGroupId;
@property(nonatomic) double value; // @synthesize value=mValue;
@property(nonatomic) _Bool hasValue; // @synthesize hasValue=mHasValue;
@property(retain, nonatomic) PDAnimateMotionBehavior *motionPath; // @synthesize motionPath=mMotionPath;
@property(nonatomic) int partCount; // @synthesize partCount=mPartCount;
@property(nonatomic) _Bool hasPartCount; // @synthesize hasPartCount=mHasPartCount;
@property(nonatomic) double direction; // @synthesize direction=mDirection;
@property(nonatomic) _Bool hasDirection; // @synthesize hasDirection=mHasDirection;
@property(nonatomic) double duration; // @synthesize duration=mDuration;
@property(nonatomic) _Bool hasDuration; // @synthesize hasDuration=mHasDuration;
@property(nonatomic) double delay; // @synthesize delay=mDelay;
@property(nonatomic) _Bool hasDelay; // @synthesize hasDelay=mHasDelay;
@property(nonatomic) int iterateType; // @synthesize iterateType=mIterateType;
@property(nonatomic) int presetClass; // @synthesize presetClass=mPresetClass;
@property(nonatomic) int presetSubType; // @synthesize presetSubType=mPresetSubType;
@property(nonatomic) int presetId; // @synthesize presetId=mPresetId;
@property(nonatomic) int nodeType; // @synthesize nodeType=mNodeType;
@property(retain, nonatomic) PDAnimationTarget *target; // @synthesize target=mTarget;
- (void)dealloc;
- (id)initWithAnimationInfo:(id)arg1;

@end

