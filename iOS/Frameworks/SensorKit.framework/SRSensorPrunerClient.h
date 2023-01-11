//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SensorKit/SRSensorKitServiceClientPruning-Protocol.h>

@class SRSensorPruner;

@interface SRSensorPrunerClient : NSObject <SRSensorKitServiceClientPruning>
{
    SRSensorPruner *_pruner;
}

+ (id)prunerClientWithPruner:(id)arg1;
@property __weak SRSensorPruner *pruner; // @synthesize pruner=_pruner;
- (void).cxx_destruct;
- (void)resetDatastoreFiles:(id)arg1;
- (id)initWithPruner:(id)arg1;

@end
