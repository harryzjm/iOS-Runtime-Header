//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKStackedTextItem : NSObject
{
    _Bool _significantPrimary;
    _Bool _deemphasizedPrimary;
    _Bool _strikethroughPrimary;
    NSString *_groupingIdentifier;
    unsigned long long _numberOfContentRows;
    NSString *_title;
    NSString *_primary;
    NSString *_secondary;
    NSString *_tertiary;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isStrikethroughPrimary) _Bool strikethroughPrimary; // @synthesize strikethroughPrimary=_strikethroughPrimary;
@property(nonatomic, getter=isDeemphasizedPrimary) _Bool deemphasizedPrimary; // @synthesize deemphasizedPrimary=_deemphasizedPrimary;
@property(nonatomic, getter=isSignificantPrimary) _Bool significantPrimary; // @synthesize significantPrimary=_significantPrimary;
@property(copy, nonatomic) NSString *tertiary; // @synthesize tertiary=_tertiary;
@property(copy, nonatomic) NSString *secondary; // @synthesize secondary=_secondary;
@property(copy, nonatomic) NSString *primary; // @synthesize primary=_primary;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long numberOfContentRows; // @synthesize numberOfContentRows=_numberOfContentRows;
@property(readonly, copy, nonatomic) NSString *groupingIdentifier; // @synthesize groupingIdentifier=_groupingIdentifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithNumberOfContentRows:(unsigned long long)arg1 groupingIdentifier:(id)arg2;
- (id)init;

@end
