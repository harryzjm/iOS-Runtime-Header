//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface WFRemoteExecutionKeyValuePair : NSObject
{
    NSString *_key;
    id _value;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
- (id)initWithKey:(id)arg1 value:(id)arg2;

@end
