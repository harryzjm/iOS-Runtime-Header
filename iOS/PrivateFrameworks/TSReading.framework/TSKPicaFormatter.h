//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFormatter.h>

@class NSNumber, NSString;

@interface TSKPicaFormatter : NSFormatter
{
    NSString *mPicaSeparator;
    NSNumber *mMinimum;
    NSNumber *mMaximum;
}

@property(copy, nonatomic) NSNumber *maximum; // @synthesize maximum=mMaximum;
@property(copy, nonatomic) NSNumber *minimum; // @synthesize minimum=mMinimum;
@property(copy, nonatomic) NSString *picaSeparator; // @synthesize picaSeparator=mPicaSeparator;
- (_Bool)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithPicaSeparator:(id)arg1;

@end
