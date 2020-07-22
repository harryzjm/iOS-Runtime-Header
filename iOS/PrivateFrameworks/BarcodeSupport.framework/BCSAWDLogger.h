//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BCSAWDLogger : NSObject
{
}

+ (id)sharedLogger;
- (int)_awdInvalidBarcodeDataTypeFromInvalidData:(id)arg1;
- (int)_awdBarcodeClientType;
- (int)_awdBarcodeDataTypeFromAction:(id)arg1;
- (void)logBarcodePreviewedEventForContentType:(long long)arg1;
- (void)logBarcodeActivatedEventForAction:(id)arg1;
- (void)logBarcodeDetectedEventForAction:(id)arg1 startTime:(unsigned long long)arg2;
- (void)logBarcodeDetectedEvent:(id)arg1 startTime:(unsigned long long)arg2;
- (id)barcodeDetectedEventForAction:(id)arg1;

@end

