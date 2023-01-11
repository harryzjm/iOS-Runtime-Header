//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>

@class NSString;

@interface _NSHTTPAlternativeServicesFilter : NSObject <NSCopying>
{
    NSString *_host;
    NSString *_partition;
    long long _port;
}

+ (id)emptyFilter;
- (void).cxx_destruct;
@property(nonatomic) long long port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *partition; // @synthesize partition=_partition;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
