//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNGroup, NSString;

@interface CNMutableGroup
{
}

- (id)freezeWithSelfAsSnapshot;
- (id)freeze;
@property(copy, nonatomic) CNGroup *snapshot; // @dynamic snapshot;
- (void)adoptValuesFromAndSetSnapshot:(id)arg1;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) int iOSLegacyIdentifier; // @dynamic iOSLegacyIdentifier;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
- (id)copy;

@end

