//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface MCMClientCodeSignIndex : NSObject
{
    NSData *_cdhash;
    NSString *_identifier;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToClientCodeSignIndex:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCDHash:(id)arg1 identifier:(id)arg2;

@end

