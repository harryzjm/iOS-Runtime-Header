//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSCharacterSet;

__attribute__((visibility("hidden")))
@interface _HKCFGCharacterTerminal
{
    NSCharacterSet *_characterSet;
}

@property(copy, nonatomic) NSCharacterSet *characterSet; // @synthesize characterSet=_characterSet;
- (void).cxx_destruct;
- (unsigned long long)_minimumLength;
- (id)_label;
- (_Bool)_scanValue:(id *)arg1 withScanner:(id)arg2;

@end
