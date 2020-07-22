//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CNVCardParsedParameter : NSObject
{
    NSString *_name;
    NSArray *_values;
}

+ (id)parameterWithName:(id)arg1 values:(id)arg2;
@property(readonly, copy) NSArray *values; // @synthesize values=_values;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 values:(id)arg2;

@end
