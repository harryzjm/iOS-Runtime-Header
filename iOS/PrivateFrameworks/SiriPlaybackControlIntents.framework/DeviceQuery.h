//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObject.h>

@class NSArray, NSString;

@interface DeviceQuery : INObject
{
}

@property(nonatomic, readonly) NSString *description;

// Remaining properties
@property(copy, nonatomic) NSArray *accessoryNames; // @dynamic accessoryNames;
@property(copy, nonatomic) NSArray *deviceGroups; // @dynamic deviceGroups;
@property(copy, nonatomic) NSString *deviceQuantifier; // @dynamic deviceQuantifier;
@property(copy, nonatomic) NSArray *deviceTypes; // @dynamic deviceTypes;
@property(copy, nonatomic) NSArray *fromEntities; // @dynamic fromEntities;
@property(nonatomic) long long mediaType; // @dynamic mediaType;
@property(copy, nonatomic) NSArray *placeHints; // @dynamic placeHints;
@property(copy, nonatomic) NSArray *roomNames; // @dynamic roomNames;
@property(copy, nonatomic) NSArray *serviceNames; // @dynamic serviceNames;
@property(copy, nonatomic) NSArray *toEntities; // @dynamic toEntities;
@property(copy, nonatomic) NSArray *zoneNames; // @dynamic zoneNames;

@end
