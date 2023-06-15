//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

@class NSString;

@interface NSUUID (NSUUIDAdditions)
+ (id)TTZero;
+ (id)CR_UUIDFromStdString:(const void *)arg1;
+ (id)CR_unknown;
+ (id)CR_unserialized;
+ (id)CR_zero;
+ (id)CR_repeatedCharUUID:(unsigned char)arg1;
- (id)TTShortDescription;
- (long long)TTCompare:(id)arg1;
- (basic_string_b963e3c0)CR_toStdString;
- (void)encodeWithICCRCoder:(id)arg1;
- (id)initWithICCRCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *CR_shortDescription;
- (long long)CR_compare:(id)arg1;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)mergeWith:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

