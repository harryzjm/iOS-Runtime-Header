//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSByteCountFormatter, NSNumberFormatter;

@interface SSNumberFormatManager : NSObject
{
    NSNumberFormatter *_numberFormatter;
    NSByteCountFormatter *_byteCountFormatter;
}

+ (id)stringFromByteCount:(long long)arg1;
+ (id)stringFromInt:(int)arg1 withMinimumDigits:(unsigned long long)arg2;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) NSByteCountFormatter *byteCountFormatter; // @synthesize byteCountFormatter=_byteCountFormatter;
@property(retain) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
- (id)init;

@end
