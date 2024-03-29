//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEODefaultsDBCollection, NSString;

__attribute__((visibility("hidden")))
@interface GEODefaultsDBValue : NSObject
{
    GEODefaultsDBCollection *_parent;
    long long _dbId;
    NSString *_type;
    id _value;
}

+ (id)dbValue:(id)arg1 type:(id)arg2 value:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) __weak GEODefaultsDBCollection *parent; // @synthesize parent=_parent;
@property(nonatomic) long long dbId; // @synthesize dbId=_dbId;
- (id)initWithParent:(id)arg1 type:(id)arg2 value:(id)arg3;

@end

