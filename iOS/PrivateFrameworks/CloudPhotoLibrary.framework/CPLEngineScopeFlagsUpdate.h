//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CPLEngineScopeFlagsUpdate : NSObject
{
    long long _flags;
    long long _updatedFlagsMask;
}

+ (id)descriptionForFlags:(long long)arg1;
+ (id)_arrayDescriptionForFlags:(long long)arg1 remainingFlags:(long long *)arg2;
+ (id)flagsDescriptionMapping;
@property(readonly, nonatomic) long long updatedFlagsMask; // @synthesize updatedFlagsMask=_updatedFlagsMask;
@property(readonly, nonatomic) long long flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) NSArray *arrayDescription;
- (id)description;
- (long long)updatedFlagsFromFlags:(long long)arg1;
- (void)setValue:(_Bool)arg1 forFlag:(long long)arg2;
- (_Bool)valueForFlag:(long long)arg1;
- (id)initWithFlags:(long long)arg1;
- (id)init;

@end
