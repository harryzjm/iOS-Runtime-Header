//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BarcodeSupport/BCSDataParser-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSGenericDataParser : NSObject <BCSDataParser>
{
}

+ (id)_parsedDataFromDDResult:(struct __DDResult *)arg1 decodedString:(id)arg2;
+ (id)parseString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
