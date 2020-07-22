//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSUUID;

@interface HDFitnessMachineSimulatorSupport : NSObject
{
    unsigned long long _fitnessMachineType;
    NSUUID *_uuid;
}

@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) unsigned long long fitnessMachineType; // @synthesize fitnessMachineType=_fitnessMachineType;
- (void).cxx_destruct;
- (void)updateAdvertisementDataForSimulation:(id)arg1;
@property(readonly, nonatomic) NSString *btIdentifier;
@property(readonly, nonatomic) NSData *btIdentifierData;
- (id)initWithFitnessMachineType:(unsigned long long)arg1;

@end

