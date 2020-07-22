//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _AFDataStoreEntry : NSObject
{
    long long _type;
    id _value;
}

@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithPropertyListRepresentation:(id)arg1 error:(id *)arg2;
- (id)propertyListRepresentation;
- (id)_valueForPropertyListRepresentation:(id)arg1 type:(long long)arg2;
- (id)_valuePropertyListRepresentation;
- (long long)_typeForPropertyListString:(id)arg1;
- (id)_propertyListStringForType;
- (id)initWithType:(long long)arg1 value:(id)arg2;

@end

