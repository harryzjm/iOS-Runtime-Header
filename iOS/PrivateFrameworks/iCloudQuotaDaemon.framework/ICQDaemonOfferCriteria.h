//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ICQDaemonOfferCriteria : NSObject
{
    NSDictionary *_serverDict;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *serverDictionary;
- (id)initWithServerDictionary:(id)arg1;
- (_Bool)isSatisfiedByConditions:(id)arg1;

@end

