//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface UPEntityWithValue : NSObject
{
    NSString *_entityType;
    NSString *_entityName;
    NSString *_entityValue;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *entityValue; // @synthesize entityValue=_entityValue;
@property(readonly, copy) NSString *entityName; // @synthesize entityName=_entityName;
@property(readonly, copy) NSString *entityType; // @synthesize entityType=_entityType;
- (id)description;
- (_Bool)isEqualToEntityWithValue:(id)arg1;
- (id)initWithType:(id)arg1 entityName:(id)arg2 entityValue:(id)arg3;

@end
