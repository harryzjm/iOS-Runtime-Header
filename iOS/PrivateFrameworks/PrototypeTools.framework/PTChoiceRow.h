//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;
@protocol PTChoiceRowDataSource;

@interface PTChoiceRow
{
    NSArray *_possibleValues;
    NSArray *_possibleTitles;
    NSArray *_possibleShortTitles;
    id <PTChoiceRowDataSource> _dataSource;
    NSString *_choiceIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *choiceIdentifier; // @synthesize choiceIdentifier=_choiceIdentifier;
@property(nonatomic) __weak id <PTChoiceRowDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) NSArray *possibleShortTitles; // @synthesize possibleShortTitles=_possibleShortTitles;
@property(copy, nonatomic) NSArray *possibleTitles; // @synthesize possibleTitles=_possibleTitles;
@property(copy, nonatomic) NSArray *possibleValues; // @synthesize possibleValues=_possibleValues;
- (_Bool)isEncodable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)indexPathForValue:(id)arg1;
- (id)shortTitleForRow:(long long)arg1 inSection:(long long)arg2;
- (id)titleForRow:(long long)arg1 inSection:(long long)arg2;
- (id)valueForRow:(long long)arg1 inSection:(long long)arg2;
- (long long)numberOfRowsInSection:(long long)arg1;
- (id)titleForSection:(long long)arg1;
- (long long)numberOfSections;
- (id)possibleShortTitles:(id)arg1;
- (id)possibleValues:(id)arg1 titles:(id)arg2;

@end
