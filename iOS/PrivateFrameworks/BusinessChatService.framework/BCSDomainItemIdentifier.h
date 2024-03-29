//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSDomainItemIdentifier : NSObject
{
    long long _type;
    NSString *_domain;
}

+ (id)identifierWithType:(long long)arg1 domain:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithType:(long long)arg1 domain:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

