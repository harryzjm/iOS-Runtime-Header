//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SKUIGiftAmount : NSObject
{
    NSString *_displayLabel;
    NSString *_partNumber;
    NSNumber *_value;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *partNumber; // @synthesize partNumber=_partNumber;
@property(copy, nonatomic) NSString *displayLabel; // @synthesize displayLabel=_displayLabel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)HTTPBodyDictionary;
- (id)initWithAmountDictionary:(id)arg1;

@end

