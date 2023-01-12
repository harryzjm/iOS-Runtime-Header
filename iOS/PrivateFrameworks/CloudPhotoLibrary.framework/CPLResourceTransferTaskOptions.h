//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@interface CPLResourceTransferTaskOptions : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _intent;
    unsigned long long _priority;
    CDStruct_e83c9415 _timeRange;
}

+ (_Bool)supportsSecureCoding;
+ (id)optionsForLegacyIntent:(unsigned long long)arg1;
+ (_Bool)isForegroundOperationForIntent:(unsigned long long)arg1 priority:(unsigned long long)arg2;
+ (_Bool)isHighPriorityForIntent:(unsigned long long)arg1 priority:(unsigned long long)arg2;
+ (id)descriptionForIntentPriority:(unsigned long long)arg1;
+ (id)descriptionForIntent:(unsigned long long)arg1;
+ (id)intentsToBackgroundDownload;
+ (id)defaultOptions;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) unsigned long long intent; // @synthesize intent=_intent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)legacyIntent;
- (id)description;
- (_Bool)hasValidTimeRange;
- (_Bool)shouldKeepPower;
- (_Bool)isHighPriority;
- (id)init;
- (id)initWithHighPriority:(_Bool)arg1;
- (id)initWithIntent:(unsigned long long)arg1 priority:(unsigned long long)arg2;
- (id)initWithIntent:(unsigned long long)arg1 priority:(unsigned long long)arg2 timeRange:(CDStruct_e83c9415)arg3;

@end
