//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SAHAAttributeValue;

@interface HMDAssistantCharacteristicTuple : NSObject
{
    NSString *_attribute;
    SAHAAttributeValue *_value;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SAHAAttributeValue *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *attribute; // @synthesize attribute=_attribute;
- (id)initWithAttribute:(id)arg1 value:(id)arg2;
- (id)init;

@end
