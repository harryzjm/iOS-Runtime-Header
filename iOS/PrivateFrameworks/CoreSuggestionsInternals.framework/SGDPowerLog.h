//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SGDPowerLog : NSObject
{
}

+ (void)pluginEndDeletion:(id)arg1;
+ (void)pluginStartDeletion:(id)arg1;
+ (void)pluginEndProcessingSearchableItem:(id)arg1;
+ (void)pluginStartProcessingSearchableItem:(id)arg1;
+ (void)pluginEndSetup:(id)arg1;
+ (void)pluginStartSetup:(id)arg1;
+ (void)endIngestOfMessages:(unsigned long long)arg1;
+ (void)startIngestOfMessages:(unsigned long long)arg1;
+ (void)logPrewarmWithLastPrewarmTime:(double)arg1;
+ (void)endDissectionOfMessage:(id)arg1 inContext:(unsigned long long)arg2;
+ (void)startDissectionOfMessage:(id)arg1 inContext:(unsigned long long)arg2;

@end

