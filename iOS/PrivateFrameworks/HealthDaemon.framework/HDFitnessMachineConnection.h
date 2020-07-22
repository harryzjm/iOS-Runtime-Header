//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;
@protocol HKFitnessMachineConnectionClientInterface;

@interface HDFitnessMachineConnection : NSObject
{
    NSUUID *_uuid;
    id <HKFitnessMachineConnectionClientInterface> _client;
}

@property(readonly, nonatomic) id <HKFitnessMachineConnectionClientInterface> client; // @synthesize client=_client;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)initWithUUID:(id)arg1 client:(id)arg2;

@end

