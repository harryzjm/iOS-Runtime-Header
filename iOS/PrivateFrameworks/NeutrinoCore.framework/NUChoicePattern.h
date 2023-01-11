//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface NUChoicePattern
{
    NSArray *_choices;
}

- (void).cxx_destruct;
@property(readonly) NSArray *choices; // @synthesize choices=_choices;
- (_Bool)match:(id)arg1 location:(unsigned long long *)arg2 count:(unsigned long long *)arg3;
- (_Bool)isEqualToChoicePattern:(id)arg1;
- (_Bool)isEqualToPattern:(id)arg1;
- (id)stringRepresentation;
- (id)optimizedPattern;
- (id)shortestMatch;
- (_Bool)isFixedOrder;
- (id)tokens;
- (id)initWithChoices:(id)arg1;
- (id)init;

@end
