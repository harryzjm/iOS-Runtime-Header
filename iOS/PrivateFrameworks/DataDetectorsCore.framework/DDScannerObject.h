//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DDScannerObject : NSObject
{
    struct __DDScanner *_scanner;
    int _type;
}

- (int)type;
- (id)resultsWithOptions:(long long)arg1;
- (id)ddResultsWithOptions:(long long)arg1;
- (long long)scanString:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithType:(int)arg1;

@end

