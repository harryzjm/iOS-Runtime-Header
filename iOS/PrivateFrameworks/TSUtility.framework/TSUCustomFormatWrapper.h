//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSUCustomFormatWrapper : NSObject
{
    struct TSUCustomFormat *mCustomFormat;
}

- (const CDStruct_8acff13f *)conditionalFormatDataForValue:(double)arg1;
- (const CDStruct_8acff13f *)defaultFormatData;
- (int)formatType;
- (id)formatName;
- (const struct TSUCustomFormat *)pointerToTSUCustomFormat;
- (id)initWithCustomFormat:(struct TSUCustomFormat *)arg1;

@end

