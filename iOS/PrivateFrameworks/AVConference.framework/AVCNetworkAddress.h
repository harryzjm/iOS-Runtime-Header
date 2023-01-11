//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AVCNetworkAddress : NSObject
{
    NSString *ip;
    NSString *interfaceName;
    unsigned short port;
    _Bool isIPv6;
}

@property(nonatomic) _Bool isIPv6; // @synthesize isIPv6;
@property(nonatomic) unsigned short port; // @synthesize port;
@property(copy, nonatomic) NSString *ip; // @synthesize ip;
@property(copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName;
- (void)dealloc;
- (id)init;

@end

