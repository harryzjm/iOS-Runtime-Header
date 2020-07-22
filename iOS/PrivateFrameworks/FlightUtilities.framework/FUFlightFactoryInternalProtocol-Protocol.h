//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FlightUtilities/FUFlightFactoryPrivateProtocol-Protocol.h>

@class NSArray, NSData, NSDate, NSString;

@protocol FUFlightFactoryInternalProtocol <FUFlightFactoryPrivateProtocol>
+ (void)loadFlightDataWithFlightNumber:(unsigned long long)arg1 airlineCode:(NSString *)arg2 date:(NSDate *)arg3 dateType:(long long)arg4 completionHandler:(void (^)(NSData *, NSError *))arg5;
- (NSArray *)parseFlightData:(NSData *)arg1 withError:(id *)arg2;
@end

