//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSUserDefaults;

@interface VSPreferencesInterface : NSObject
{
    NSUserDefaults *_defaults;
}

+ (id)defaultInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(readonly, nonatomic) NSString *deviceUUID;
@property(retain, nonatomic) NSDate *lastTTSRequestDate;
- (id)autoDownloadedVoicesForClientID:(id)arg1;
- (void)setAutoDownloadedVoices:(id)arg1 withClientID:(id)arg2;
- (void)migrateDefaults;
- (id)initWithSuiteName:(id)arg1;

@end
