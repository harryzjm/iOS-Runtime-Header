//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface BYAnalyticsEvent : NSObject
{
    _Bool _persist;
    NSString *_name;
    NSDictionary *_payload;
}

+ (id)eventWithName:(id)arg1 withPayload:(id)arg2 persist:(_Bool)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool persist; // @synthesize persist=_persist;
@property(retain, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;

@end
