//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MANAutoAssetSetTarget : NSObject
{
    NSString *_minTargetOSVersion;
    NSString *_maxTargetOSVersion;
    NSArray *_autoAssetEntries;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *autoAssetEntries; // @synthesize autoAssetEntries=_autoAssetEntries;
@property(retain, nonatomic) NSString *maxTargetOSVersion; // @synthesize maxTargetOSVersion=_maxTargetOSVersion;
@property(retain, nonatomic) NSString *minTargetOSVersion; // @synthesize minTargetOSVersion=_minTargetOSVersion;
- (id)summary;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForMinTargetOSVersion:(id)arg1 toMaxTargetOSVersion:(id)arg2 asEntriesWhenTargeting:(id)arg3;

@end

