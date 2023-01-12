//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TISupplementalPhraseItem
{
    NSString *_title;
    NSString *_phoneticTitle;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *phoneticTitle; // @synthesize phoneticTitle=_phoneticTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 phoneticTitle:(id)arg2;
- (id)initWithTitle:(id)arg1;

@end
