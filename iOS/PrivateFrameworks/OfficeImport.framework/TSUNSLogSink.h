//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUNSLogSink : NSObject
{
    int _logLevel;
}

+ (id)sharedInstance;
@property int logLevel; // @synthesize logLevel=_logLevel;
- (CDUnknownBlockType)logSinkBlock;
- (id)init;

@end
