//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CURangingSample : NSObject
{
    int _channel;
    int _rawRSSI;
    NSData *_deviceAddress;
    NSString *_deviceModel;
}

@property(nonatomic) int rawRSSI; // @synthesize rawRSSI=_rawRSSI;
@property(copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(copy, nonatomic) NSData *deviceAddress; // @synthesize deviceAddress=_deviceAddress;
@property(nonatomic) int channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
- (id)description;

@end
