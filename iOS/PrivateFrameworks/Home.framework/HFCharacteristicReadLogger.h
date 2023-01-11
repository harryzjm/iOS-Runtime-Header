//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HFCharacteristicReadLogger : NSObject
{
    NSMutableDictionary *_accessoriesToReadByTransport;
}

+ (id)nameForTransportType:(unsigned long long)arg1;
+ (id)transportKeyForCharacteristic:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *accessoriesToReadByTransport; // @synthesize accessoriesToReadByTransport=_accessoriesToReadByTransport;
- (void)markCharacteristicAsRead:(id)arg1 withLogger:(id)arg2;
- (void)addCharacteristic:(id)arg1 withUpdateLogger:(id)arg2;
- (unsigned long long)numberOfAccessoriesForTransportType:(unsigned long long)arg1;
- (id)init;

@end
