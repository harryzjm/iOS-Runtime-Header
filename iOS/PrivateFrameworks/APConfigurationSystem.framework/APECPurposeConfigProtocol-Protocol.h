//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <APConfigurationSystem/APConfigurationProtocol-Protocol.h>
#import <APConfigurationSystem/NSObject-Protocol.h>

@class NSArray, NSNumber, NSString;

@protocol APECPurposeConfigProtocol <NSObject, APConfigurationProtocol>
@property(retain, nonatomic) NSNumber *collectionType;
@property(retain, nonatomic) NSNumber *samplePeriod;
@property(retain, nonatomic) NSNumber *samplePercentage;
@property(retain, nonatomic) NSString *destination;
@property(retain, nonatomic) NSArray *disallowedEvents;
@property(retain, nonatomic) NSArray *allowedSources;
@property(retain, nonatomic) NSArray *allowedPurposes;
@property(retain, nonatomic) NSNumber *purpose;
@end

