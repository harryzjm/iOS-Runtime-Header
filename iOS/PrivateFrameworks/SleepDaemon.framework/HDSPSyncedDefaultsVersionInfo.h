//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HDSPSyncedDefaultsVersionInfo : NSObject
{
    NSString *_dataVersionKey;
    unsigned long long _currentDataVersion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long currentDataVersion; // @synthesize currentDataVersion=_currentDataVersion;
@property(readonly, copy, nonatomic) NSString *dataVersionKey; // @synthesize dataVersionKey=_dataVersionKey;
- (id)initWithDataVersionKey:(id)arg1 currentDataVersion:(unsigned long long)arg2;

@end
