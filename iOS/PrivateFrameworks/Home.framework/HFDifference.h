//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface HFDifference : NSObject <NSCopying>
{
    NSString *_key;
    unsigned long long _priority;
    NSDictionary *_userInfo;
}

+ (id)difference:(id)arg1 priority:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)difference:(id)arg1 priority:(unsigned long long)arg2;
+ (id)difference:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (id)_subclass_description;
- (id)description;
- (id)descriptionBuilder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)withPriority:(unsigned long long)arg1;
- (id)initWithKey:(id)arg1;
- (id)initWithKey:(id)arg1 priority:(unsigned long long)arg2;

@end
