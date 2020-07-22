//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

@interface GKCompatibilityEntryInternal
{
    NSString *_bundleID;
    NSSet *_versions;
}

+ (id)secureCodedPropertyKeys;
@property(retain, nonatomic) NSSet *versions; // @synthesize versions=_versions;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;

@end
