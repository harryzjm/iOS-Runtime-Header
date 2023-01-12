//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBPunchout;

@protocol _SFPBUserReportRequest <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int reportType;
@property(copy, nonatomic) NSArray *userReportOptions;
@property(copy, nonatomic) NSString *dismissText;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *affordanceText;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBPunchout *)userReportOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)userReportOptionsCount;
- (void)addUserReportOptions:(_SFPBPunchout *)arg1;
- (void)clearUserReportOptions;
@end

