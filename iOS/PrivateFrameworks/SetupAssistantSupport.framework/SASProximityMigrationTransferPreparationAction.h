//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SASProximityMigrationTransferPreparationAction
{
    NSString *_deviceName;
}

+ (id)actionFromDictionary:(id)arg1;
+ (unsigned long long)actionID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (_Bool)hasResponse;
- (id)requestPayload;

@end
