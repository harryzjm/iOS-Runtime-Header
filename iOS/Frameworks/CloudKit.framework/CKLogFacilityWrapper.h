//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface CKLogFacilityWrapper : NSObject
{
    NSObject<OS_os_log> *_facility;
    NSString *_facilityName;
}

@property(readonly, nonatomic) NSString *facilityName; // @synthesize facilityName=_facilityName;
@property(readonly, nonatomic) NSObject<OS_os_log> *facility; // @synthesize facility=_facility;
- (void).cxx_destruct;
- (id)initWithFacility:(id)arg1 facilityName:(id)arg2;

@end

