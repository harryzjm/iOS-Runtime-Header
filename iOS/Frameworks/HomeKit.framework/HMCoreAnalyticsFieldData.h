//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSObject, NSString;

@interface HMCoreAnalyticsFieldData : HMFObject
{
    NSString *_name;
    NSObject *_value;
}

- (void).cxx_destruct;
@property(readonly, copy) NSObject *value; // @synthesize value=_value;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (id)initWithName:(id)arg1;

@end
