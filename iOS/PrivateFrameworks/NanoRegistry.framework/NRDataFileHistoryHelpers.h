//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NRDataFileHistoryHelpers : NSObject
{
}

+ (id)unarchiveSecureProperties;
+ (_Bool)archiveSecureProperties:(id)arg1;
+ (_Bool)createMissingDates:(id)arg1;
+ (void)parseDiff:(id)arg1 forPropertyChange:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)findPairedDateForDeviceID:(id)arg1 inHistory:(id)arg2;
+ (_Bool)archiveDeviceHistory:(id)arg1;
+ (id)unarchiveDeviceHistory;

@end

