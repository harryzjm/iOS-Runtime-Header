//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFCharacteristic-Protocol.h>
#import <HomeKitDaemon/MKFStringCharacteristicPublicExtensions-Protocol.h>

@class MKFStringCharacteristicDatabaseID, NSNumber;
@protocol MKFHome;

@protocol MKFStringCharacteristic <MKFCharacteristic, MKFStringCharacteristicPublicExtensions>
@property(readonly) id <MKFHome> home;
@property(readonly, copy, nonatomic) MKFStringCharacteristicDatabaseID *databaseID;
@property(copy, nonatomic) NSNumber *maximumLength;
@end

