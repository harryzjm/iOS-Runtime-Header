//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface TIUserModelDataStoreDurableEntry : NSObject
{
    NSDate *_creationDate;
    NSDate *_lastUpdateDate;
    NSString *_key;
    NSNumber *_value;
}

@property(readonly) NSNumber *value; // @synthesize value=_value;
@property(readonly) NSString *key; // @synthesize key=_key;
@property(readonly) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(readonly) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (void).cxx_destruct;
- (id)initWithCreationDate:(id)arg1 withLastUpdateDate:(id)arg2 withKey:(id)arg3 withValue:(id)arg4;

@end
