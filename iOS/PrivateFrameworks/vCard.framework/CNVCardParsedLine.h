//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CNVCardParsedLine : NSObject
{
    NSString *_name;
    id _value;
    NSArray *_parameters;
    NSString *_grouping;
    _Bool _isPrimary;
}

@property(copy) NSString *grouping; // @synthesize grouping=_grouping;
@property _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
@property(copy) NSArray *parameters; // @synthesize parameters=_parameters;
@property(retain) id value; // @synthesize value=_value;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1;

@end
