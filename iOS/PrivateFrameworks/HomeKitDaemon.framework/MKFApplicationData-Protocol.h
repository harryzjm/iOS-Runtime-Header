//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFApplicationDataPublicExtensions-Protocol.h>
#import <HomeKitDaemon/MKFModel-Protocol.h>

@class MKFApplicationDataDatabaseID, NSDate, NSDictionary, NSUUID;
@protocol MKFAccessory, MKFActionSet, MKFHome, MKFRoom, MKFService, MKFServiceGroup;

@protocol MKFApplicationData <MKFModel, MKFApplicationDataPublicExtensions>
@property(readonly, copy, nonatomic) MKFApplicationDataDatabaseID *databaseID;
@property(readonly, retain, nonatomic) id <MKFServiceGroup> serviceGroup;
@property(readonly, retain, nonatomic) id <MKFService> service;
@property(readonly, retain, nonatomic) id <MKFRoom> room;
@property(readonly, retain, nonatomic) id <MKFHome> home;
@property(readonly, retain, nonatomic) id <MKFActionSet> actionSet;
@property(readonly, retain, nonatomic) id <MKFAccessory> accessory;
@property(copy, nonatomic) NSDate *writerTimestamp;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(retain, nonatomic) NSDictionary *appDataDictionary;
@end

