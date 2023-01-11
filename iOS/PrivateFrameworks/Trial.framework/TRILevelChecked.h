//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TRILevel;

@interface TRILevelChecked : NSObject
{
    TRILevel *_wrapped;
}

+ (id)wrapLevel:(id)arg1;
- (void).cxx_destruct;
- (id)directoryValue;
- (id)fileValue;
- (id)binaryValue;
- (double)doubleValue;
- (float)floatValue;
- (long long)longValue;
- (int)intValue;
- (id)stringValue;
- (_Bool)booleanValue;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithLevel:(id)arg1;
- (id)init;

@end
