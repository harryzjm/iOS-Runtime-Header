//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iCalendar/VCSDictifiable-Protocol.h>

@class NSMutableDictionary, NSString;

@interface VCSPropertyValue : NSObject <VCSDictifiable>
{
    NSMutableDictionary *_parameters;
    unsigned long long _valueType;
    id _value;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long valueType; // @synthesize valueType=_valueType;
- (id)valueDescription;
- (id)dictify;
- (void)addParameter:(id)arg1 withValue:(id)arg2;
- (id)initWithValue:(id)arg1 type:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
