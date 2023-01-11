//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface WLKStoredConfiguration : NSObject
{
    _Bool _activeUser;
    NSDictionary *_requiredRequestKeyValuePairs;
    NSDate *_timestamp;
    NSString *_utsc;
    NSString *_vppaState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *vppaState; // @synthesize vppaState=_vppaState;
@property(retain, nonatomic) NSString *utsc; // @synthesize utsc=_utsc;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool activeUser; // @synthesize activeUser=_activeUser;
@property(retain, nonatomic) NSDictionary *requiredRequestKeyValuePairs; // @synthesize requiredRequestKeyValuePairs=_requiredRequestKeyValuePairs;
@property(readonly, nonatomic) NSString *utsk;
- (id)description;

@end
