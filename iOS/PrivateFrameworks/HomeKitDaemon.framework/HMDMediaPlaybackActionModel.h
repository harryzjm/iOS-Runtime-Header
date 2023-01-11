//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPPlaybackArchive, NSNumber, NSSet;

@interface HMDMediaPlaybackActionModel
{
}

+ (id)properties;
+ (id)schemaHashRoot;
- (id)dependentUUIDs;
- (id)validate;
- (_Bool)validForStorage;
- (void)loadModelWithActionInformation:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSSet *accessories; // @dynamic accessories;
@property(retain, nonatomic) MPPlaybackArchive *encodedPlaybackArchive; // @dynamic encodedPlaybackArchive;
@property(retain, nonatomic) NSSet *profiles; // @dynamic profiles;
@property(retain, nonatomic) NSSet *services; // @dynamic services;
@property(retain, nonatomic) NSNumber *state; // @dynamic state;
@property(retain, nonatomic) NSNumber *volume; // @dynamic volume;

@end
