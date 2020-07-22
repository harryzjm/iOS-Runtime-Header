//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKComplicationDisplay-Protocol.h>

@class NSDate, NSString;

@protocol NTKMoonPhaseComplicationDisplay <NTKComplicationDisplay>

@optional
- (void)setPaused:(_Bool)arg1;
- (void)setLocked:(_Bool)arg1;
- (void)setMoonEvent:(long long)arg1 date:(NSDate *)arg2;
- (void)setPhaseNumber:(unsigned long long)arg1 hemisphere:(long long)arg2;
- (void)setPhaseName:(NSString *)arg1;
@end

