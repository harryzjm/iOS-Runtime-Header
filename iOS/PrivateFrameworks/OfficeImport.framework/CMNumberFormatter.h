//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CMNumberFormatter : NSObject
{
    int _format;
    int _language;
    void **_numberFormatter;
}

+ (id)formatterForNumberFormat:(int)arg1 language:(int)arg2;
- (id)stringForNumber:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithNumberFormat:(int)arg1 language:(int)arg2;

@end

