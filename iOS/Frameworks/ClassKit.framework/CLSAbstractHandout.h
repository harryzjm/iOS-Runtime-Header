//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface CLSAbstractHandout
{
    NSString *_title;
    NSString *_instructions;
    NSDate *_dueDate;
    NSDate *_dateOfPublication;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)mergeWithObject:(id)arg1;
- (id)dictionaryRepresentation;
@property(retain, nonatomic) NSDate *dateOfPublication;
@property(retain, nonatomic) NSDate *dueDate;
@property(copy, nonatomic) NSString *instructions;
@property(copy, nonatomic) NSString *title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)init;

@end
