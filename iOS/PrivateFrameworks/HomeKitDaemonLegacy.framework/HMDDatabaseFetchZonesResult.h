//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMBCloudZone, HMBLocalZone;

__attribute__((visibility("hidden")))
@interface HMDDatabaseFetchZonesResult : NSObject
{
    HMBLocalZone *_localZone;
    HMBCloudZone *_cloudZone;
}

- (void).cxx_destruct;
@property(readonly) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(readonly) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
- (id)initWithLocalZone:(id)arg1 cloudZone:(id)arg2;

@end

