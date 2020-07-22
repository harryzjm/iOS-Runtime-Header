//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CacheDeleteVolume : NSObject
{
    _Bool _isRoot;
    NSString *_mountPoint;
    unsigned long long _initialFreespace;
    NSDictionary *_thresholds;
}

+ (long long)stateForPath:(id)arg1;
+ (id)validateVolumeAtPath:(id)arg1;
+ (id)rootVolume;
+ (id)volumeWithMountpoint:(id)arg1;
+ (id)volumeWithPath:(id)arg1;
@property(readonly, nonatomic) NSDictionary *thresholds; // @synthesize thresholds=_thresholds;
@property(readonly) unsigned long long initialFreespace; // @synthesize initialFreespace=_initialFreespace;
@property(readonly, nonatomic) NSString *mountPoint; // @synthesize mountPoint=_mountPoint;
@property(readonly) _Bool isRoot; // @synthesize isRoot=_isRoot;
- (void).cxx_destruct;
- (_Bool)isEqualTo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithPath:(id)arg1;
- (_Bool)validate;
@property(readonly, nonatomic) long long state; // @dynamic state;
- (unsigned long long)freespace;
- (unsigned long long)size;
- (unsigned long long)amountPurged;

@end
