//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreNFC/NSCopying-Protocol.h>

@interface NFCTagCommandConfiguration : NSObject <NSCopying>
{
    unsigned long long _maximumRetries;
    double _retryInterval;
}

@property(nonatomic) double retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) unsigned long long maximumRetries; // @synthesize maximumRetries=_maximumRetries;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

